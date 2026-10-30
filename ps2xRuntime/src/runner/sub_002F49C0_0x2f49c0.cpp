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

// Function: sub_002F49C0
// Address: 0x2f49c0 - 0x2f4a78
void sub_002F49C0_0x2f49c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F49C0_0x2f49c0");
#endif

    switch (ctx->pc) {
        case 0x2f49c0u: goto label_2f49c0;
        case 0x2f49c4u: goto label_2f49c4;
        case 0x2f49c8u: goto label_2f49c8;
        case 0x2f49ccu: goto label_2f49cc;
        case 0x2f49d0u: goto label_2f49d0;
        case 0x2f49d4u: goto label_2f49d4;
        case 0x2f49d8u: goto label_2f49d8;
        case 0x2f49dcu: goto label_2f49dc;
        case 0x2f49e0u: goto label_2f49e0;
        case 0x2f49e4u: goto label_2f49e4;
        case 0x2f49e8u: goto label_2f49e8;
        case 0x2f49ecu: goto label_2f49ec;
        case 0x2f49f0u: goto label_2f49f0;
        case 0x2f49f4u: goto label_2f49f4;
        case 0x2f49f8u: goto label_2f49f8;
        case 0x2f49fcu: goto label_2f49fc;
        case 0x2f4a00u: goto label_2f4a00;
        case 0x2f4a04u: goto label_2f4a04;
        case 0x2f4a08u: goto label_2f4a08;
        case 0x2f4a0cu: goto label_2f4a0c;
        case 0x2f4a10u: goto label_2f4a10;
        case 0x2f4a14u: goto label_2f4a14;
        case 0x2f4a18u: goto label_2f4a18;
        case 0x2f4a1cu: goto label_2f4a1c;
        case 0x2f4a20u: goto label_2f4a20;
        case 0x2f4a24u: goto label_2f4a24;
        case 0x2f4a28u: goto label_2f4a28;
        case 0x2f4a2cu: goto label_2f4a2c;
        case 0x2f4a30u: goto label_2f4a30;
        case 0x2f4a34u: goto label_2f4a34;
        case 0x2f4a38u: goto label_2f4a38;
        case 0x2f4a3cu: goto label_2f4a3c;
        case 0x2f4a40u: goto label_2f4a40;
        case 0x2f4a44u: goto label_2f4a44;
        case 0x2f4a48u: goto label_2f4a48;
        case 0x2f4a4cu: goto label_2f4a4c;
        case 0x2f4a50u: goto label_2f4a50;
        case 0x2f4a54u: goto label_2f4a54;
        case 0x2f4a58u: goto label_2f4a58;
        case 0x2f4a5cu: goto label_2f4a5c;
        case 0x2f4a60u: goto label_2f4a60;
        case 0x2f4a64u: goto label_2f4a64;
        case 0x2f4a68u: goto label_2f4a68;
        case 0x2f4a6cu: goto label_2f4a6c;
        case 0x2f4a70u: goto label_2f4a70;
        case 0x2f4a74u: goto label_2f4a74;
        default: break;
    }

    ctx->pc = 0x2f49c0u;

label_2f49c0:
    // 0x2f49c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f49c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f49c4:
    // 0x2f49c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2f49c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2f49c8:
    // 0x2f49c8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f49c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2f49cc:
    // 0x2f49cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f49ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2f49d0:
    // 0x2f49d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f49d4:
    // 0x2f49d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f49d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f49d8:
    // 0x2f49d8: 0xc0e8b48  jal         func_3A2D20
label_2f49dc:
    if (ctx->pc == 0x2F49DCu) {
        ctx->pc = 0x2F49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49D8u;
        // 0x2f49dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49E0u;
        goto label_2f49e0;
    }
    ctx->pc = 0x2F49D8u;
    SET_GPR_U32(ctx, 31, 0x2F49E0u);
    ctx->pc = 0x2F49DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49D8u;
    // 0x2f49dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2F49D8u, 0x2F49E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49E0u;
label_2f49e0:
    // 0x2f49e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f49e4:
    // 0x2f49e4: 0xc0e8b70  jal         func_3A2DC0
label_2f49e8:
    if (ctx->pc == 0x2F49E8u) {
        ctx->pc = 0x2F49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49E4u;
        // 0x2f49e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49ECu;
        goto label_2f49ec;
    }
    ctx->pc = 0x2F49E4u;
    SET_GPR_U32(ctx, 31, 0x2F49ECu);
    ctx->pc = 0x2F49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49E4u;
    // 0x2f49e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x2F49E4u, 0x2F49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49ECu;
label_2f49ec:
    // 0x2f49ec: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f49f0:
    // 0x2f49f0: 0xc0e8b70  jal         func_3A2DC0
label_2f49f4:
    if (ctx->pc == 0x2F49F4u) {
        ctx->pc = 0x2F49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49F0u;
        // 0x2f49f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49F8u;
        goto label_2f49f8;
    }
    ctx->pc = 0x2F49F0u;
    SET_GPR_U32(ctx, 31, 0x2F49F8u);
    ctx->pc = 0x2F49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49F0u;
    // 0x2f49f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x2F49F0u, 0x2F49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49F8u;
label_2f49f8:
    // 0x2f49f8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f49f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f49fc:
    // 0x2f49fc: 0xc0e8b68  jal         func_3A2DA0
label_2f4a00:
    if (ctx->pc == 0x2F4A00u) {
        ctx->pc = 0x2F4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49FCu;
        // 0x2f4a00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A04u;
        goto label_2f4a04;
    }
    ctx->pc = 0x2F49FCu;
    SET_GPR_U32(ctx, 31, 0x2F4A04u);
    ctx->pc = 0x2F4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49FCu;
    // 0x2f4a00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2F49FCu, 0x2F4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A04u;
label_2f4a04:
    // 0x2f4a04: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f4a08:
    // 0x2f4a08: 0xc0e8b68  jal         func_3A2DA0
label_2f4a0c:
    if (ctx->pc == 0x2F4A0Cu) {
        ctx->pc = 0x2F4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A08u;
        // 0x2f4a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A10u;
        goto label_2f4a10;
    }
    ctx->pc = 0x2F4A08u;
    SET_GPR_U32(ctx, 31, 0x2F4A10u);
    ctx->pc = 0x2F4A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A08u;
    // 0x2f4a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2F4A08u, 0x2F4A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A10u;
label_2f4a10:
    // 0x2f4a10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f4a14:
    // 0x2f4a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f4a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f4a18:
    // 0x2f4a18: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2f4a18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2f4a1c:
    // 0x2f4a1c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2f4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2f4a20:
    // 0x2f4a20: 0x60f809  jalr        $v1
label_2f4a24:
    if (ctx->pc == 0x2F4A24u) {
        ctx->pc = 0x2F4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A20u;
        // 0x2f4a24: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A28u;
        goto label_2f4a28;
    }
    ctx->pc = 0x2F4A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4A28u);
        ctx->pc = 0x2F4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A20u;
        // 0x2f4a24: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4A20u, 0x2F4A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4A28u;
label_2f4a28:
    // 0x2f4a28: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f4a2c:
    // 0x2f4a2c: 0xc0e8b58  jal         func_3A2D60
label_2f4a30:
    if (ctx->pc == 0x2F4A30u) {
        ctx->pc = 0x2F4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A2Cu;
        // 0x2f4a30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A34u;
        goto label_2f4a34;
    }
    ctx->pc = 0x2F4A2Cu;
    SET_GPR_U32(ctx, 31, 0x2F4A34u);
    ctx->pc = 0x2F4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A2Cu;
    // 0x2f4a30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F4A2Cu, 0x2F4A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A34u;
label_2f4a34:
    // 0x2f4a34: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f4a38:
    // 0x2f4a38: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2f4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2f4a3c:
    // 0x2f4a3c: 0xc0e8b58  jal         func_3A2D60
label_2f4a40:
    if (ctx->pc == 0x2F4A40u) {
        ctx->pc = 0x2F4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A3Cu;
        // 0x2f4a40: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A44u;
        goto label_2f4a44;
    }
    ctx->pc = 0x2F4A3Cu;
    SET_GPR_U32(ctx, 31, 0x2F4A44u);
    ctx->pc = 0x2F4A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A3Cu;
    // 0x2f4a40: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F4A3Cu, 0x2F4A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A44u;
label_2f4a44:
    // 0x2f4a44: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f4a48:
    // 0x2f4a48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f4a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4a4c:
    // 0x2f4a4c: 0xc0e8b80  jal         func_3A2E00
label_2f4a50:
    if (ctx->pc == 0x2F4A50u) {
        ctx->pc = 0x2F4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A4Cu;
        // 0x2f4a50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A54u;
        goto label_2f4a54;
    }
    ctx->pc = 0x2F4A4Cu;
    SET_GPR_U32(ctx, 31, 0x2F4A54u);
    ctx->pc = 0x2F4A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A4Cu;
    // 0x2f4a50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2F4A4Cu, 0x2F4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A54u;
label_2f4a54:
    // 0x2f4a54: 0xc0e8b50  jal         func_3A2D40
label_2f4a58:
    if (ctx->pc == 0x2F4A58u) {
        ctx->pc = 0x2F4A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A54u;
        // 0x2f4a58: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A5Cu;
        goto label_2f4a5c;
    }
    ctx->pc = 0x2F4A54u;
    SET_GPR_U32(ctx, 31, 0x2F4A5Cu);
    ctx->pc = 0x2F4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A54u;
    // 0x2f4a58: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2F4A54u, 0x2F4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A5Cu;
label_2f4a5c:
    // 0x2f4a5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2f4a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4a60:
    // 0x2f4a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4a64:
    // 0x2f4a64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f4a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f4a68:
    // 0x2f4a68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f4a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f4a6c:
    // 0x2f4a6c: 0x3e00008  jr          $ra
label_2f4a70:
    if (ctx->pc == 0x2F4A70u) {
        ctx->pc = 0x2F4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A6Cu;
        // 0x2f4a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A74u;
        goto label_2f4a74;
    }
    ctx->pc = 0x2F4A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A6Cu;
        // 0x2f4a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4A74u;
label_2f4a74:
    // 0x2f4a74: 0x0  nop
    ctx->pc = 0x2f4a74u;
    // NOP
    ctx->pc = 0x2f4a78u;
}
