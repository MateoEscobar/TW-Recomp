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

// Function: sub_002960C8
// Address: 0x2960c8 - 0x296130
void sub_002960C8_0x2960c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002960C8_0x2960c8");
#endif

    switch (ctx->pc) {
        case 0x2960c8u: goto label_2960c8;
        case 0x2960ccu: goto label_2960cc;
        case 0x2960d0u: goto label_2960d0;
        case 0x2960d4u: goto label_2960d4;
        case 0x2960d8u: goto label_2960d8;
        case 0x2960dcu: goto label_2960dc;
        case 0x2960e0u: goto label_2960e0;
        case 0x2960e4u: goto label_2960e4;
        case 0x2960e8u: goto label_2960e8;
        case 0x2960ecu: goto label_2960ec;
        case 0x2960f0u: goto label_2960f0;
        case 0x2960f4u: goto label_2960f4;
        case 0x2960f8u: goto label_2960f8;
        case 0x2960fcu: goto label_2960fc;
        case 0x296100u: goto label_296100;
        case 0x296104u: goto label_296104;
        case 0x296108u: goto label_296108;
        case 0x29610cu: goto label_29610c;
        case 0x296110u: goto label_296110;
        case 0x296114u: goto label_296114;
        case 0x296118u: goto label_296118;
        case 0x29611cu: goto label_29611c;
        case 0x296120u: goto label_296120;
        case 0x296124u: goto label_296124;
        case 0x296128u: goto label_296128;
        case 0x29612cu: goto label_29612c;
        default: break;
    }

    ctx->pc = 0x2960c8u;

label_2960c8:
    // 0x2960c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2960c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2960cc:
    // 0x2960cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2960ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2960d0:
    // 0x2960d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2960d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2960d4:
    // 0x2960d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2960d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2960d8:
    // 0x2960d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2960d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2960dc:
    // 0x2960dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2960dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2960e0:
    // 0x2960e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2960e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2960e4:
    // 0x2960e4: 0x40f809  jalr        $v0
label_2960e8:
    if (ctx->pc == 0x2960E8u) {
        ctx->pc = 0x2960E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960E4u;
        // 0x2960e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2960ECu;
        goto label_2960ec;
    }
    ctx->pc = 0x2960E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2960ECu);
        ctx->pc = 0x2960E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960E4u;
        // 0x2960e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2960E4u, 0x2960ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2960ECu;
label_2960ec:
    // 0x2960ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2960ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2960f0:
    // 0x2960f0: 0x261001b0  addiu       $s0, $s0, 0x1B0
    ctx->pc = 0x2960f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_2960f4:
    // 0x2960f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2960f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2960f8:
    // 0x2960f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2960fc:
    // 0x2960fc: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
label_296100:
    if (ctx->pc == 0x296100u) {
        ctx->pc = 0x296100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960FCu;
        // 0x296100: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296104u;
        goto label_296104;
    }
    ctx->pc = 0x2960FCu;
    {
        const bool branch_taken_0x2960fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2960fc) {
            ctx->pc = 0x296100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2960FCu;
            // 0x296100: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29610Cu;
            goto label_29610c;
        }
    }
    ctx->pc = 0x296104u;
label_296104:
    // 0x296104: 0x10000005  b           . + 4 + (0x5 << 2)
label_296108:
    if (ctx->pc == 0x296108u) {
        ctx->pc = 0x296108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296104u;
        // 0x296108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29610Cu;
        goto label_29610c;
    }
    ctx->pc = 0x296104u;
    {
        const bool branch_taken_0x296104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296104u;
        // 0x296108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296104) {
            ctx->pc = 0x29611Cu;
            goto label_29611c;
        }
    }
    ctx->pc = 0x29610Cu;
label_29610c:
    // 0x29610c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x29610cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_296110:
    // 0x296110: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_296114:
    if (ctx->pc == 0x296114u) {
        ctx->pc = 0x296114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296110u;
        // 0x296114: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296118u;
        goto label_296118;
    }
    ctx->pc = 0x296110u;
    {
        const bool branch_taken_0x296110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296110u;
        // 0x296114: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296110) {
            ctx->pc = 0x2960F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2960f8;
        }
    }
    ctx->pc = 0x296118u;
label_296118:
    // 0x296118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29611c:
    // 0x29611c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29611cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296120:
    // 0x296120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296124:
    // 0x296124: 0x3e00008  jr          $ra
label_296128:
    if (ctx->pc == 0x296128u) {
        ctx->pc = 0x296128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296124u;
        // 0x296128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29612Cu;
        goto label_29612c;
    }
    ctx->pc = 0x296124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296124u;
        // 0x296128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29612Cu;
label_29612c:
    // 0x29612c: 0x0  nop
    ctx->pc = 0x29612cu;
    // NOP
    ctx->pc = 0x296130u;
}
