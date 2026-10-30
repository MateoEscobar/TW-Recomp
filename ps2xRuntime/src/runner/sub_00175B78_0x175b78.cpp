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

// Function: sub_00175B78
// Address: 0x175b78 - 0x175be8
void sub_00175B78_0x175b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175B78_0x175b78");
#endif

    switch (ctx->pc) {
        case 0x175b78u: goto label_175b78;
        case 0x175b7cu: goto label_175b7c;
        case 0x175b80u: goto label_175b80;
        case 0x175b84u: goto label_175b84;
        case 0x175b88u: goto label_175b88;
        case 0x175b8cu: goto label_175b8c;
        case 0x175b90u: goto label_175b90;
        case 0x175b94u: goto label_175b94;
        case 0x175b98u: goto label_175b98;
        case 0x175b9cu: goto label_175b9c;
        case 0x175ba0u: goto label_175ba0;
        case 0x175ba4u: goto label_175ba4;
        case 0x175ba8u: goto label_175ba8;
        case 0x175bacu: goto label_175bac;
        case 0x175bb0u: goto label_175bb0;
        case 0x175bb4u: goto label_175bb4;
        case 0x175bb8u: goto label_175bb8;
        case 0x175bbcu: goto label_175bbc;
        case 0x175bc0u: goto label_175bc0;
        case 0x175bc4u: goto label_175bc4;
        case 0x175bc8u: goto label_175bc8;
        case 0x175bccu: goto label_175bcc;
        case 0x175bd0u: goto label_175bd0;
        case 0x175bd4u: goto label_175bd4;
        case 0x175bd8u: goto label_175bd8;
        case 0x175bdcu: goto label_175bdc;
        case 0x175be0u: goto label_175be0;
        case 0x175be4u: goto label_175be4;
        default: break;
    }

    ctx->pc = 0x175b78u;

label_175b78:
    // 0x175b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_175b7c:
    // 0x175b7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_175b80:
    // 0x175b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_175b84:
    // 0x175b84: 0xc05d484  jal         func_175210
label_175b88:
    if (ctx->pc == 0x175B88u) {
        ctx->pc = 0x175B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B84u;
        // 0x175b88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B8Cu;
        goto label_175b8c;
    }
    ctx->pc = 0x175B84u;
    SET_GPR_U32(ctx, 31, 0x175B8Cu);
    ctx->pc = 0x175B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B84u;
    // 0x175b88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x175B84u, 0x175B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B8Cu;
label_175b8c:
    // 0x175b8c: 0xc05d484  jal         func_175210
label_175b90:
    if (ctx->pc == 0x175B90u) {
        ctx->pc = 0x175B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B8Cu;
        // 0x175b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B94u;
        goto label_175b94;
    }
    ctx->pc = 0x175B8Cu;
    SET_GPR_U32(ctx, 31, 0x175B94u);
    ctx->pc = 0x175B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B8Cu;
    // 0x175b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x175B8Cu, 0x175B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B94u;
label_175b94:
    // 0x175b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175b98:
    // 0x175b98: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x175b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_175b9c:
    // 0x175b9c: 0x8c6500f4  lw          $a1, 0xF4($v1)
    ctx->pc = 0x175b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_175ba0:
    // 0x175ba0: 0xa0f809  jalr        $a1
label_175ba4:
    if (ctx->pc == 0x175BA4u) {
        ctx->pc = 0x175BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BA0u;
        // 0x175ba4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BA8u;
        goto label_175ba8;
    }
    ctx->pc = 0x175BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x175BA8u);
        ctx->pc = 0x175BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BA0u;
        // 0x175ba4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175BA0u, 0x175BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175BA8u;
label_175ba8:
    // 0x175ba8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_175bac:
    if (ctx->pc == 0x175BACu) {
        ctx->pc = 0x175BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BA8u;
        // 0x175bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BB0u;
        goto label_175bb0;
    }
    ctx->pc = 0x175BA8u;
    {
        const bool branch_taken_0x175ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175ba8) {
            ctx->pc = 0x175BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175BA8u;
            // 0x175bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175BD8u;
            goto label_175bd8;
        }
    }
    ctx->pc = 0x175BB0u;
label_175bb0:
    // 0x175bb0: 0xc05d484  jal         func_175210
label_175bb4:
    if (ctx->pc == 0x175BB4u) {
        ctx->pc = 0x175BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BB0u;
        // 0x175bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BB8u;
        goto label_175bb8;
    }
    ctx->pc = 0x175BB0u;
    SET_GPR_U32(ctx, 31, 0x175BB8u);
    ctx->pc = 0x175BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BB0u;
    // 0x175bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x175BB0u, 0x175BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BB8u;
label_175bb8:
    // 0x175bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175bbc:
    // 0x175bbc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x175bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_175bc0:
    // 0x175bc0: 0x8c6500f4  lw          $a1, 0xF4($v1)
    ctx->pc = 0x175bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_175bc4:
    // 0x175bc4: 0xa0f809  jalr        $a1
label_175bc8:
    if (ctx->pc == 0x175BC8u) {
        ctx->pc = 0x175BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BC4u;
        // 0x175bc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BCCu;
        goto label_175bcc;
    }
    ctx->pc = 0x175BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x175BCCu);
        ctx->pc = 0x175BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BC4u;
        // 0x175bc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175BC4u, 0x175BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175BCCu;
label_175bcc:
    // 0x175bcc: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x175bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_175bd0:
    // 0x175bd0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x175bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_175bd4:
    // 0x175bd4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x175bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_175bd8:
    // 0x175bd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175bdc:
    // 0x175bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175be0:
    // 0x175be0: 0x3e00008  jr          $ra
label_175be4:
    if (ctx->pc == 0x175BE4u) {
        ctx->pc = 0x175BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BE0u;
        // 0x175be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BE8u;
        goto label_fallthrough_0x175be0;
    }
    ctx->pc = 0x175BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BE0u;
        // 0x175be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x175be0:
    ctx->pc = 0x175BE8u;
}
