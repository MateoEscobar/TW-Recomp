#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D7DB8
// Address: 0x4d7db8 - 0x4d7e68
void sub_004D7DB8_0x4d7db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7DB8_0x4d7db8");
#endif

    switch (ctx->pc) {
        case 0x4d7df8u: goto label_4d7df8;
        default: break;
    }

    ctx->pc = 0x4d7db8u;

    // 0x4d7db8: 0xc4001a  div         $zero, $a2, $a0
    ctx->pc = 0x4d7db8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4d7dbc: 0x45043  sra         $t2, $a0, 1
    ctx->pc = 0x4d7dbcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4d7dc0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4d7dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d7dc4: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x4d7dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x4d7dc8: 0x4012  mflo        $t0
    ctx->pc = 0x4d7dc8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x4d7dcc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4D7DCCu;
    {
        const bool branch_taken_0x4d7dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7DCCu;
        // 0x4d7dd0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7dcc) {
            ctx->pc = 0x4D7E48u;
            goto label_4d7e48;
        }
    }
    ctx->pc = 0x4D7DD4u;
    // 0x4d7dd4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4d7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d7dd8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x4d7dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d7ddc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d7de0: 0x65823  negu        $t3, $a2
    ctx->pc = 0x4d7de0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4d7de4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x4d7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x4d7de8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4d7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4d7dec: 0x24a80004  addiu       $t0, $a1, 0x4
    ctx->pc = 0x4d7decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d7df0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4d7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7df4: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x4d7df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_4d7df8:
    // 0x4d7df8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4d7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4d7dfc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4d7dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4d7e00: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4d7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7e04: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d7e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d7e08: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4d7e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7e0c: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x4d7e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d7e10: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x4d7e10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4d7e14: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x4d7e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d7e18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4d7e18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d7e1c: 0x46031142  mul.s       $f5, $f2, $f3
    ctx->pc = 0x4d7e1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4d7e20: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x4d7e20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4d7e24: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4d7e24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x4d7e28: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4d7e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4d7e2c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x4d7e2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x4d7e30: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4d7e30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d7e34: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x4d7e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4d7e38: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4d7e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4d7e3c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4d7e3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d7e40: 0x1520ffed  bnez        $t1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4D7E40u;
    {
        const bool branch_taken_0x4d7e40 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7E40u;
        // 0x4d7e44: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7e40) {
            ctx->pc = 0x4D7DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d7df8;
        }
    }
    ctx->pc = 0x4D7E48u;
label_4d7e48:
    // 0x4d7e48: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x4d7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4d7e4c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x4d7e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7e50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d7e54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4d7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7e58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4d7e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4d7e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7E5Cu;
        // 0x4d7e60: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7E64u;
    // 0x4d7e64: 0x0  nop
    ctx->pc = 0x4d7e64u;
    // NOP
    ctx->pc = 0x4d7e68u;
}
