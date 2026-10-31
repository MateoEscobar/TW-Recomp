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

// Function: sub_001512D8
// Address: 0x1512d8 - 0x151360
void sub_001512D8_0x1512d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001512D8_0x1512d8");
#endif

    ctx->pc = 0x1512d8u;

    // 0x1512d8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1512d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512dc: 0x28624000  slti        $v0, $v1, 0x4000
    ctx->pc = 0x1512dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1512e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1512E0u;
    {
        const bool branch_taken_0x1512e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1512E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512E0u;
        // 0x1512e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512e0) {
            ctx->pc = 0x1512F4u;
            goto label_1512f4;
        }
    }
    ctx->pc = 0x1512E8u;
    // 0x1512e8: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1512e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1512ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1512ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1512f0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1512f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1512f4:
    // 0x1512f4: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1512f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1512f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1512f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1512fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1512fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x151300: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x151300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x151304: 0x24820fff  addiu       $v0, $a0, 0xFFF
    ctx->pc = 0x151304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x151308: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x151308u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x15130c: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15130Cu;
    {
        const bool branch_taken_0x15130c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x151310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15130Cu;
        // 0x151310: 0x21b03  sra         $v1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15130c) {
            ctx->pc = 0x15131Cu;
            goto label_15131c;
        }
    }
    ctx->pc = 0x151314u;
    // 0x151314: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x151314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x151318: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15131c:
    // 0x15131c: 0x3e00008  jr          $ra
    ctx->pc = 0x15131Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15131Cu;
        // 0x151320: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15131Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151324u;
    // 0x151324: 0x0  nop
    ctx->pc = 0x151324u;
    // NOP
    // 0x151328: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15132c: 0x0  nop
    ctx->pc = 0x15132cu;
    // NOP
    // 0x151330: 0x0  nop
    ctx->pc = 0x151330u;
    // NOP
    // 0x151334: 0x0  nop
    ctx->pc = 0x151334u;
    // NOP
    // 0x151338: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x151338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x15133c: 0x0  nop
    ctx->pc = 0x15133cu;
    // NOP
    // 0x151340: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151344: 0x0  nop
    ctx->pc = 0x151344u;
    // NOP
    // 0x151348: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15134c: 0x0  nop
    ctx->pc = 0x15134cu;
    // NOP
    // 0x151350: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151354: 0x0  nop
    ctx->pc = 0x151354u;
    // NOP
    // 0x151358: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15135c: 0x0  nop
    ctx->pc = 0x15135cu;
    // NOP
    ctx->pc = 0x151360u;
}
