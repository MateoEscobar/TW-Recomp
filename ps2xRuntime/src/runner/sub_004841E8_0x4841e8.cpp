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

// Function: sub_004841E8
// Address: 0x4841e8 - 0x484240
void sub_004841E8_0x4841e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004841E8_0x4841e8");
#endif

    switch (ctx->pc) {
        case 0x4841e8u: goto label_4841e8;
        case 0x4841ecu: goto label_4841ec;
        case 0x4841f0u: goto label_4841f0;
        case 0x4841f4u: goto label_4841f4;
        case 0x4841f8u: goto label_4841f8;
        case 0x4841fcu: goto label_4841fc;
        case 0x484200u: goto label_484200;
        case 0x484204u: goto label_484204;
        case 0x484208u: goto label_484208;
        case 0x48420cu: goto label_48420c;
        case 0x484210u: goto label_484210;
        case 0x484214u: goto label_484214;
        case 0x484218u: goto label_484218;
        case 0x48421cu: goto label_48421c;
        case 0x484220u: goto label_484220;
        case 0x484224u: goto label_484224;
        case 0x484228u: goto label_484228;
        case 0x48422cu: goto label_48422c;
        case 0x484230u: goto label_484230;
        case 0x484234u: goto label_484234;
        case 0x484238u: goto label_484238;
        case 0x48423cu: goto label_48423c;
        default: break;
    }

    ctx->pc = 0x4841e8u;

label_4841e8:
    // 0x4841e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4841e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4841ec:
    // 0x4841ec: 0x8f838960  lw          $v1, -0x76A0($gp)
    ctx->pc = 0x4841ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
label_4841f0:
    // 0x4841f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4841f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4841f4:
    // 0x4841f4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4841f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4841f8:
    // 0x4841f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4841f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4841fc:
    // 0x4841fc: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x4841fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_484200:
    // 0x484200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x484200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_484204:
    // 0x484204: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x484204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_484208:
    // 0x484208: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x484208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_48420c:
    // 0x48420c: 0x34a5000e  ori         $a1, $a1, 0xE
    ctx->pc = 0x48420cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
label_484210:
    // 0x484210: 0x40f809  jalr        $v0
label_484214:
    if (ctx->pc == 0x484214u) {
        ctx->pc = 0x484214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484210u;
        // 0x484214: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484218u;
        goto label_484218;
    }
    ctx->pc = 0x484210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484218u);
        ctx->pc = 0x484214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484210u;
        // 0x484214: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484210u, 0x484218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484218u;
label_484218:
    // 0x484218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x484218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48421c:
    // 0x48421c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_484220:
    if (ctx->pc == 0x484220u) {
        ctx->pc = 0x484220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48421Cu;
        // 0x484220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484224u;
        goto label_484224;
    }
    ctx->pc = 0x48421Cu;
    {
        const bool branch_taken_0x48421c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x484220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48421Cu;
        // 0x484220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48421c) {
            ctx->pc = 0x484230u;
            goto label_484230;
        }
    }
    ctx->pc = 0x484224u;
label_484224:
    // 0x484224: 0xc120e98  jal         func_483A60
label_484228:
    if (ctx->pc == 0x484228u) {
        ctx->pc = 0x484228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484224u;
        // 0x484228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48422Cu;
        goto label_48422c;
    }
    ctx->pc = 0x484224u;
    SET_GPR_U32(ctx, 31, 0x48422Cu);
    ctx->pc = 0x484228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484224u;
    // 0x484228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483A60u, 0x484224u, 0x48422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48422Cu;
label_48422c:
    // 0x48422c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48422cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484230:
    // 0x484230: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x484230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484234:
    // 0x484234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x484234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_484238:
    // 0x484238: 0x3e00008  jr          $ra
label_48423c:
    if (ctx->pc == 0x48423Cu) {
        ctx->pc = 0x48423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484238u;
        // 0x48423c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484240u;
        goto label_fallthrough_0x484238;
    }
    ctx->pc = 0x484238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484238u;
        // 0x48423c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x484238:
    ctx->pc = 0x484240u;
}
