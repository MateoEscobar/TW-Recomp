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

// Function: sub_0017A560
// Address: 0x17a560 - 0x17a610
void sub_0017A560_0x17a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A560_0x17a560");
#endif

    switch (ctx->pc) {
        case 0x17a570u: goto label_17a570;
        case 0x17a5a0u: goto label_17a5a0;
        case 0x17a5b8u: goto label_17a5b8;
        default: break;
    }

    ctx->pc = 0x17a560u;

    // 0x17a560: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x17a560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17a564: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17a564u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a568: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x17a568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x17a56c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17a570:
    // 0x17a570: 0x2c620064  sltiu       $v0, $v1, 0x64
    ctx->pc = 0x17a570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x17a574: 0x0  nop
    ctx->pc = 0x17a574u;
    // NOP
    // 0x17a578: 0x0  nop
    ctx->pc = 0x17a578u;
    // NOP
    // 0x17a57c: 0x0  nop
    ctx->pc = 0x17a57cu;
    // NOP
    // 0x17a580: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17A580u;
    {
        const bool branch_taken_0x17a580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a580) {
            ctx->pc = 0x17A584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A580u;
            // 0x17a584: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a570;
        }
    }
    ctx->pc = 0x17A588u;
    // 0x17a588: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17a588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17a58c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17A58Cu;
    {
        const bool branch_taken_0x17a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A58Cu;
        // 0x17a590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a58c) {
            ctx->pc = 0x17A608u;
            goto label_17a608;
        }
    }
    ctx->pc = 0x17A594u;
    // 0x17a594: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x17a594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x17a598: 0xa81818  mult        $v1, $a1, $t0
    ctx->pc = 0x17a598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17a59c: 0x0  nop
    ctx->pc = 0x17a59cu;
    // NOP
label_17a5a0:
    // 0x17a5a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17a5a4: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x17a5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17a5a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5ac: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x17a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a5b0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x17a5b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5b4: 0x0  nop
    ctx->pc = 0x17a5b4u;
    // NOP
label_17a5b8:
    // 0x17a5b8: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x17a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a5bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17a5c0: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x17a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a5c4: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x17a5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17a5c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17a5c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17a5cc: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x17a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17a5d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x17a5d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x17a5d4: 0xc4630058  lwc1        $f3, 0x58($v1)
    ctx->pc = 0x17a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17a5d8: 0xe4620034  swc1        $f2, 0x34($v1)
    ctx->pc = 0x17a5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x17a5dc: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x17a5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x17a5e0: 0xe4630054  swc1        $f3, 0x54($v1)
    ctx->pc = 0x17a5e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x17a5e4: 0xe4610058  swc1        $f1, 0x58($v1)
    ctx->pc = 0x17a5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x17a5e8: 0xa0c0006f  sb          $zero, 0x6F($a2)
    ctx->pc = 0x17a5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a5ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x17A5ECu;
    {
        const bool branch_taken_0x17a5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5ECu;
        // 0x17a5f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5ec) {
            ctx->pc = 0x17A5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a5b8;
        }
    }
    ctx->pc = 0x17A5F4u;
    // 0x17a5f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17a5f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x17a5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5fc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x17a5fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a600: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x17A600u;
    {
        const bool branch_taken_0x17a600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A600u;
        // 0x17a604: 0xa81818  mult        $v1, $a1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a600) {
            ctx->pc = 0x17A5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a5a0;
        }
    }
    ctx->pc = 0x17A608u;
label_17a608:
    // 0x17a608: 0x3e00008  jr          $ra
    ctx->pc = 0x17A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A610u;
}
