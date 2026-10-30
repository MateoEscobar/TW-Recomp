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

// Function: sub_004222A0
// Address: 0x4222a0 - 0x422308
void sub_004222A0_0x4222a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004222A0_0x4222a0");
#endif

    switch (ctx->pc) {
        case 0x4222dcu: goto label_4222dc;
        default: break;
    }

    ctx->pc = 0x4222a0u;

    // 0x4222a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4222a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4222a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4222a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4222a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4222a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4222ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4222acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4222b0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x4222b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x4222b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4222B4u;
    {
        const bool branch_taken_0x4222b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4222B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4222B4u;
        // 0x4222b8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4222b4) {
            ctx->pc = 0x4222F8u;
            goto label_4222f8;
        }
    }
    ctx->pc = 0x4222BCu;
    // 0x4222bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4222bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4222c0: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x4222c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x4222c4: 0x9043043c  lbu         $v1, 0x43C($v0)
    ctx->pc = 0x4222c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1084)));
    // 0x4222c8: 0x5465000c  bnel        $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x4222C8u;
    {
        const bool branch_taken_0x4222c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4222c8) {
            ctx->pc = 0x4222CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4222C8u;
            // 0x4222cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4222FCu;
            goto label_4222fc;
        }
    }
    ctx->pc = 0x4222D0u;
    // 0x4222d0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x4222d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x4222d4: 0xc109150  jal         func_424540
    ctx->pc = 0x4222D4u;
    SET_GPR_U32(ctx, 31, 0x4222DCu);
    ctx->pc = 0x4222D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4222D4u;
    // 0x4222d8: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424540u, 0x4222D4u, 0x4222DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4222DCu;
label_4222dc:
    // 0x4222dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4222DCu;
    {
        const bool branch_taken_0x4222dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4222E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4222DCu;
        // 0x4222e0: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4222dc) {
            ctx->pc = 0x4222F8u;
            goto label_4222f8;
        }
    }
    ctx->pc = 0x4222E4u;
    // 0x4222e4: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x4222e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x4222e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4222e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4222ec: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x4222ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4222f0: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x4222f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4222f4: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4222f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_4222f8:
    // 0x4222f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4222f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4222fc:
    // 0x4222fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4222fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x422300: 0x3e00008  jr          $ra
    ctx->pc = 0x422300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422300u;
        // 0x422304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422308u;
}
