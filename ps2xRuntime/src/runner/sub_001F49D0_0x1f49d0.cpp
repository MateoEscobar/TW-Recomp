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

// Function: sub_001F49D0
// Address: 0x1f49d0 - 0x1f4a58
void sub_001F49D0_0x1f49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F49D0_0x1f49d0");
#endif

    switch (ctx->pc) {
        case 0x1f49d0u: goto label_1f49d0;
        case 0x1f49d4u: goto label_1f49d4;
        case 0x1f49d8u: goto label_1f49d8;
        case 0x1f49dcu: goto label_1f49dc;
        case 0x1f49e0u: goto label_1f49e0;
        case 0x1f49e4u: goto label_1f49e4;
        case 0x1f49e8u: goto label_1f49e8;
        case 0x1f49ecu: goto label_1f49ec;
        case 0x1f49f0u: goto label_1f49f0;
        case 0x1f49f4u: goto label_1f49f4;
        case 0x1f49f8u: goto label_1f49f8;
        case 0x1f49fcu: goto label_1f49fc;
        case 0x1f4a00u: goto label_1f4a00;
        case 0x1f4a04u: goto label_1f4a04;
        case 0x1f4a08u: goto label_1f4a08;
        case 0x1f4a0cu: goto label_1f4a0c;
        case 0x1f4a10u: goto label_1f4a10;
        case 0x1f4a14u: goto label_1f4a14;
        case 0x1f4a18u: goto label_1f4a18;
        case 0x1f4a1cu: goto label_1f4a1c;
        case 0x1f4a20u: goto label_1f4a20;
        case 0x1f4a24u: goto label_1f4a24;
        case 0x1f4a28u: goto label_1f4a28;
        case 0x1f4a2cu: goto label_1f4a2c;
        case 0x1f4a30u: goto label_1f4a30;
        case 0x1f4a34u: goto label_1f4a34;
        case 0x1f4a38u: goto label_1f4a38;
        case 0x1f4a3cu: goto label_1f4a3c;
        case 0x1f4a40u: goto label_1f4a40;
        case 0x1f4a44u: goto label_1f4a44;
        case 0x1f4a48u: goto label_1f4a48;
        case 0x1f4a4cu: goto label_1f4a4c;
        case 0x1f4a50u: goto label_1f4a50;
        case 0x1f4a54u: goto label_1f4a54;
        default: break;
    }

    ctx->pc = 0x1f49d0u;

label_1f49d0:
    // 0x1f49d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f49d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f49d4:
    // 0x1f49d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f49d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f49d8:
    // 0x1f49d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f49d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f49dc:
    // 0x1f49dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f49dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f49e0:
    // 0x1f49e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f49e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f49e4:
    // 0x1f49e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f49e8:
    // 0x1f49e8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f49ec:
    if (ctx->pc == 0x1F49ECu) {
        ctx->pc = 0x1F49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49E8u;
        // 0x1f49ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F49F0u;
        goto label_1f49f0;
    }
    ctx->pc = 0x1F49E8u;
    {
        const bool branch_taken_0x1f49e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49E8u;
        // 0x1f49ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f49e8) {
            ctx->pc = 0x1F4A40u;
            goto label_1f4a40;
        }
    }
    ctx->pc = 0x1F49F0u;
label_1f49f0:
    // 0x1f49f0: 0xc06a3aa  jal         func_1A8EA8
label_1f49f4:
    if (ctx->pc == 0x1F49F4u) {
        ctx->pc = 0x1F49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49F0u;
        // 0x1f49f4: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F49F8u;
        goto label_1f49f8;
    }
    ctx->pc = 0x1F49F0u;
    SET_GPR_U32(ctx, 31, 0x1F49F8u);
    ctx->pc = 0x1F49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49F0u;
    // 0x1f49f4: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1F49F0u, 0x1F49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49F8u;
label_1f49f8:
    // 0x1f49f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1f49fc:
    if (ctx->pc == 0x1F49FCu) {
        ctx->pc = 0x1F49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49F8u;
        // 0x1f49fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A00u;
        goto label_1f4a00;
    }
    ctx->pc = 0x1F49F8u;
    {
        const bool branch_taken_0x1f49f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49F8u;
        // 0x1f49fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f49f8) {
            ctx->pc = 0x1F4A44u;
            goto label_1f4a44;
        }
    }
    ctx->pc = 0x1F4A00u;
label_1f4a00:
    // 0x1f4a00: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1f4a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f4a04:
    // 0x1f4a04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f4a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f4a08:
    // 0x1f4a08: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f4a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f4a0c:
    // 0x1f4a0c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f4a10:
    // 0x1f4a10: 0x40f809  jalr        $v0
label_1f4a14:
    if (ctx->pc == 0x1F4A14u) {
        ctx->pc = 0x1F4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A10u;
        // 0x1f4a14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A18u;
        goto label_1f4a18;
    }
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F4A18u);
        ctx->pc = 0x1F4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A10u;
        // 0x1f4a14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4A10u, 0x1F4A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4A18u;
label_1f4a18:
    // 0x1f4a18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f4a1c:
    if (ctx->pc == 0x1F4A1Cu) {
        ctx->pc = 0x1F4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A18u;
        // 0x1f4a1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A20u;
        goto label_1f4a20;
    }
    ctx->pc = 0x1F4A18u;
    {
        const bool branch_taken_0x1f4a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A18u;
        // 0x1f4a1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a18) {
            ctx->pc = 0x1F4A44u;
            goto label_1f4a44;
        }
    }
    ctx->pc = 0x1F4A20u;
label_1f4a20:
    // 0x1f4a20: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x1f4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f4a24:
    // 0x1f4a24: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x1f4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1f4a28:
    // 0x1f4a28: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1f4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1f4a2c:
    // 0x1f4a2c: 0x84650088  lh          $a1, 0x88($v1)
    ctx->pc = 0x1f4a2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f4a30:
    // 0x1f4a30: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f4a34:
    // 0x1f4a34: 0x40f809  jalr        $v0
label_1f4a38:
    if (ctx->pc == 0x1F4A38u) {
        ctx->pc = 0x1F4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A34u;
        // 0x1f4a38: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A3Cu;
        goto label_1f4a3c;
    }
    ctx->pc = 0x1F4A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F4A3Cu);
        ctx->pc = 0x1F4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A34u;
        // 0x1f4a38: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4A34u, 0x1F4A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4A3Cu;
label_1f4a3c:
    // 0x1f4a3c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1f4a3cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f4a40:
    // 0x1f4a40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f4a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a44:
    // 0x1f4a44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f4a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4a48:
    // 0x1f4a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4a4c:
    // 0x1f4a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4a50:
    // 0x1f4a50: 0x3e00008  jr          $ra
label_1f4a54:
    if (ctx->pc == 0x1F4A54u) {
        ctx->pc = 0x1F4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A50u;
        // 0x1f4a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A58u;
        goto label_fallthrough_0x1f4a50;
    }
    ctx->pc = 0x1F4A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A50u;
        // 0x1f4a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f4a50:
    ctx->pc = 0x1F4A58u;
}
