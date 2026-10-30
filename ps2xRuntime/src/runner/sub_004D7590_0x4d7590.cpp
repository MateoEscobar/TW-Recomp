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

// Function: sub_004D7590
// Address: 0x4d7590 - 0x4d7660
void sub_004D7590_0x4d7590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7590_0x4d7590");
#endif

    switch (ctx->pc) {
        case 0x4d75d8u: goto label_4d75d8;
        default: break;
    }

    ctx->pc = 0x4d7590u;

    // 0x4d7590: 0x44843  sra         $t1, $a0, 1
    ctx->pc = 0x4d7590u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4d7594: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4d7594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4d7598: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x4d7598u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4d759c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4d759cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d75a0: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x4d75a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x4d75a4: 0x5012  mflo        $t2
    ctx->pc = 0x4d75a4u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x4d75a8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x4D75A8u;
    {
        const bool branch_taken_0x4d75a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D75A8u;
        // 0x4d75ac: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d75a8) {
            ctx->pc = 0x4D7658u;
            goto label_4d7658;
        }
    }
    ctx->pc = 0x4D75B0u;
    // 0x4d75b0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4d75b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d75b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d75b8: 0xa3080  sll         $a2, $t2, 2
    ctx->pc = 0x4d75b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4d75bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4d75bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4d75c0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x4d75c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x4d75c4: 0x65023  negu        $t2, $a2
    ctx->pc = 0x4d75c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4d75c8: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x4d75c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x4d75cc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4d75ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4d75d0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4d75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4d75d4: 0x0  nop
    ctx->pc = 0x4d75d4u;
    // NOP
label_4d75d8:
    // 0x4d75d8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d75d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d75dc: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x4d75dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d75e0: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x4d75e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d75e4: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x4d75e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4d75e8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4d75e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d75ec: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4d75ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4d75f0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x4d75f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d75f4: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x4d75f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x4d75f8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4d75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d75fc: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x4d75fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x4d7600: 0x460338c1  sub.s       $f3, $f7, $f3
    ctx->pc = 0x4d7600u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x4d7604: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4d7604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7608: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x4d7608u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x4d760c: 0x46030142  mul.s       $f5, $f0, $f3
    ctx->pc = 0x4d760cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4d7610: 0x46011102  mul.s       $f4, $f2, $f1
    ctx->pc = 0x4d7610u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4d7614: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4d7614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4d7618: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4d7618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4d761c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x4d761cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x4d7620: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4d7620u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d7624: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x4d7624u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x4d7628: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x4d7628u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x4d762c: 0xe4a60004  swc1        $f6, 0x4($a1)
    ctx->pc = 0x4d762cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d7630: 0xe4a70000  swc1        $f7, 0x0($a1)
    ctx->pc = 0x4d7630u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d7634: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4d7634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4d7638: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4d7638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d763c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4d763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7640: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4d7640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4d7644: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4d7644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4d7648: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4d7648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d764c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4d764cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d7650: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4D7650u;
    {
        const bool branch_taken_0x4d7650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7650u;
        // 0x4d7654: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7650) {
            ctx->pc = 0x4D75D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d75d8;
        }
    }
    ctx->pc = 0x4D7658u;
label_4d7658:
    // 0x4d7658: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7660u;
}
