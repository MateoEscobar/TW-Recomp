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

// Function: sub_00422208
// Address: 0x422208 - 0x422270
void sub_00422208_0x422208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422208_0x422208");
#endif

    switch (ctx->pc) {
        case 0x422208u: goto label_422208;
        case 0x42220cu: goto label_42220c;
        case 0x422210u: goto label_422210;
        case 0x422214u: goto label_422214;
        case 0x422218u: goto label_422218;
        case 0x42221cu: goto label_42221c;
        case 0x422220u: goto label_422220;
        case 0x422224u: goto label_422224;
        case 0x422228u: goto label_422228;
        case 0x42222cu: goto label_42222c;
        case 0x422230u: goto label_422230;
        case 0x422234u: goto label_422234;
        case 0x422238u: goto label_422238;
        case 0x42223cu: goto label_42223c;
        case 0x422240u: goto label_422240;
        case 0x422244u: goto label_422244;
        case 0x422248u: goto label_422248;
        case 0x42224cu: goto label_42224c;
        case 0x422250u: goto label_422250;
        case 0x422254u: goto label_422254;
        case 0x422258u: goto label_422258;
        case 0x42225cu: goto label_42225c;
        case 0x422260u: goto label_422260;
        case 0x422264u: goto label_422264;
        case 0x422268u: goto label_422268;
        case 0x42226cu: goto label_42226c;
        default: break;
    }

    ctx->pc = 0x422208u;

label_422208:
    // 0x422208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x422208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42220c:
    // 0x42220c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_422210:
    // 0x422210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x422210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_422214:
    // 0x422214: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x422214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422218:
    // 0x422218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42221c:
    // 0x42221c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42221cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_422220:
    // 0x422220: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x422220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_422224:
    // 0x422224: 0x0  nop
    ctx->pc = 0x422224u;
    // NOP
label_422228:
    // 0x422228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x422228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42222c:
    // 0x42222c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x42222cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_422230:
    // 0x422230: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x422230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_422234:
    // 0x422234: 0x40f809  jalr        $v0
label_422238:
    if (ctx->pc == 0x422238u) {
        ctx->pc = 0x422238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422234u;
        // 0x422238: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42223Cu;
        goto label_42223c;
    }
    ctx->pc = 0x422234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42223Cu);
        ctx->pc = 0x422238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422234u;
        // 0x422238: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422234u, 0x42223Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42223Cu;
label_42223c:
    // 0x42223c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_422240:
    if (ctx->pc == 0x422240u) {
        ctx->pc = 0x422240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42223Cu;
        // 0x422240: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422244u;
        goto label_422244;
    }
    ctx->pc = 0x42223Cu;
    {
        const bool branch_taken_0x42223c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42223c) {
            ctx->pc = 0x422240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42223Cu;
            // 0x422240: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42224Cu;
            goto label_42224c;
        }
    }
    ctx->pc = 0x422244u;
label_422244:
    // 0x422244: 0x10000005  b           . + 4 + (0x5 << 2)
label_422248:
    if (ctx->pc == 0x422248u) {
        ctx->pc = 0x422248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422244u;
        // 0x422248: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42224Cu;
        goto label_42224c;
    }
    ctx->pc = 0x422244u;
    {
        const bool branch_taken_0x422244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x422248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422244u;
        // 0x422248: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422244) {
            ctx->pc = 0x42225Cu;
            goto label_42225c;
        }
    }
    ctx->pc = 0x42224Cu;
label_42224c:
    // 0x42224c: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x42224cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_422250:
    // 0x422250: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_422254:
    if (ctx->pc == 0x422254u) {
        ctx->pc = 0x422254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422250u;
        // 0x422254: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422258u;
        goto label_422258;
    }
    ctx->pc = 0x422250u;
    {
        const bool branch_taken_0x422250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x422250) {
            ctx->pc = 0x422254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x422250u;
            // 0x422254: 0x8e230128  lw          $v1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422228;
        }
    }
    ctx->pc = 0x422258u;
label_422258:
    // 0x422258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x422258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42225c:
    // 0x42225c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x42225cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_422260:
    // 0x422260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x422260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_422264:
    // 0x422264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x422264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_422268:
    // 0x422268: 0x3e00008  jr          $ra
label_42226c:
    if (ctx->pc == 0x42226Cu) {
        ctx->pc = 0x42226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422268u;
        // 0x42226c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422270u;
        goto label_fallthrough_0x422268;
    }
    ctx->pc = 0x422268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422268u;
        // 0x42226c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x422268:
    ctx->pc = 0x422270u;
}
