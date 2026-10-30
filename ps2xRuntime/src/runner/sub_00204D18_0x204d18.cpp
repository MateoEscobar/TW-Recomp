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

// Function: sub_00204D18
// Address: 0x204d18 - 0x204e70
void sub_00204D18_0x204d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204D18_0x204d18");
#endif

    switch (ctx->pc) {
        case 0x204d4cu: goto label_204d4c;
        case 0x204d60u: goto label_204d60;
        case 0x204d78u: goto label_204d78;
        case 0x204d88u: goto label_204d88;
        case 0x204d98u: goto label_204d98;
        case 0x204da8u: goto label_204da8;
        case 0x204db8u: goto label_204db8;
        case 0x204dc8u: goto label_204dc8;
        case 0x204dd8u: goto label_204dd8;
        case 0x204de8u: goto label_204de8;
        case 0x204df8u: goto label_204df8;
        case 0x204e08u: goto label_204e08;
        case 0x204e18u: goto label_204e18;
        case 0x204e28u: goto label_204e28;
        case 0x204e38u: goto label_204e38;
        case 0x204e48u: goto label_204e48;
        case 0x204e50u: goto label_204e50;
        default: break;
    }

    ctx->pc = 0x204d18u;

    // 0x204d18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x204d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x204d1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x204d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x204d20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x204d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x204d24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x204d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x204d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x204d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204d30: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x204d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x204d34: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x204D34u;
    {
        const bool branch_taken_0x204d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D34u;
        // 0x204d38: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d34) {
            ctx->pc = 0x204E58u;
            goto label_204e58;
        }
    }
    ctx->pc = 0x204D3Cu;
    // 0x204d3c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x204d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x204d40: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x204d44: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x204D44u;
    SET_GPR_U32(ctx, 31, 0x204D4Cu);
    ctx->pc = 0x204D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D44u;
    // 0x204d48: 0x8e45f588  lw          $a1, -0xA78($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x204D44u, 0x204D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D4Cu;
label_204d4c:
    // 0x204d4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x204D4Cu;
    {
        const bool branch_taken_0x204d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d4c) {
            ctx->pc = 0x204D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204D4Cu;
            // 0x204d50: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204D64u;
            goto label_204d64;
        }
    }
    ctx->pc = 0x204D54u;
    // 0x204d54: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x204d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x204d58: 0xc062be2  jal         func_18AF88
    ctx->pc = 0x204D58u;
    SET_GPR_U32(ctx, 31, 0x204D60u);
    ctx->pc = 0x204D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D58u;
    // 0x204d5c: 0x9645f588  lhu         $a1, -0xA78($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294964616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x204D58u, 0x204D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D60u;
label_204d60:
    // 0x204d60: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x204d60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_204d64:
    // 0x204d64: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x204d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x204d68: 0x261085b0  addiu       $s0, $s0, -0x7A50
    ctx->pc = 0x204d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935984));
    // 0x204d6c: 0x24060240  addiu       $a2, $zero, 0x240
    ctx->pc = 0x204d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x204d70: 0xc13ae88  jal         func_4EBA20
    ctx->pc = 0x204D70u;
    SET_GPR_U32(ctx, 31, 0x204D78u);
    ctx->pc = 0x204D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D70u;
    // 0x204d74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBA20u, 0x204D70u, 0x204D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D78u;
label_204d78:
    // 0x204d78: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x204d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x204d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d80: 0xc13aea8  jal         func_4EBAA0
    ctx->pc = 0x204D80u;
    SET_GPR_U32(ctx, 31, 0x204D88u);
    ctx->pc = 0x204D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D80u;
    // 0x204d84: 0x24060241  addiu       $a2, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBAA0u, 0x204D80u, 0x204D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D88u;
label_204d88:
    // 0x204d88: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x204d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x204d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d90: 0xc13aec8  jal         func_4EBB20
    ctx->pc = 0x204D90u;
    SET_GPR_U32(ctx, 31, 0x204D98u);
    ctx->pc = 0x204D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D90u;
    // 0x204d94: 0x24060242  addiu       $a2, $zero, 0x242 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBB20u, 0x204D90u, 0x204D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D98u;
label_204d98:
    // 0x204d98: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x204d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x204d9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204da0: 0xc13aee8  jal         func_4EBBA0
    ctx->pc = 0x204DA0u;
    SET_GPR_U32(ctx, 31, 0x204DA8u);
    ctx->pc = 0x204DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DA0u;
    // 0x204da4: 0x24060243  addiu       $a2, $zero, 0x243 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBBA0u, 0x204DA0u, 0x204DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DA8u;
label_204da8:
    // 0x204da8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x204da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x204dac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204db0: 0xc13af08  jal         func_4EBC20
    ctx->pc = 0x204DB0u;
    SET_GPR_U32(ctx, 31, 0x204DB8u);
    ctx->pc = 0x204DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DB0u;
    // 0x204db4: 0x24060244  addiu       $a2, $zero, 0x244 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBC20u, 0x204DB0u, 0x204DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DB8u;
label_204db8:
    // 0x204db8: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x204db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x204dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dc0: 0xc13af28  jal         func_4EBCA0
    ctx->pc = 0x204DC0u;
    SET_GPR_U32(ctx, 31, 0x204DC8u);
    ctx->pc = 0x204DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DC0u;
    // 0x204dc4: 0x24060245  addiu       $a2, $zero, 0x245 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBCA0u, 0x204DC0u, 0x204DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DC8u;
label_204dc8:
    // 0x204dc8: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x204dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x204dcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dd0: 0xc13af48  jal         func_4EBD20
    ctx->pc = 0x204DD0u;
    SET_GPR_U32(ctx, 31, 0x204DD8u);
    ctx->pc = 0x204DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DD0u;
    // 0x204dd4: 0x24060246  addiu       $a2, $zero, 0x246 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBD20u, 0x204DD0u, 0x204DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DD8u;
label_204dd8:
    // 0x204dd8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x204dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x204ddc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204de0: 0xc13af68  jal         func_4EBDA0
    ctx->pc = 0x204DE0u;
    SET_GPR_U32(ctx, 31, 0x204DE8u);
    ctx->pc = 0x204DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DE0u;
    // 0x204de4: 0x24060247  addiu       $a2, $zero, 0x247 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBDA0u, 0x204DE0u, 0x204DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DE8u;
label_204de8:
    // 0x204de8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x204de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x204dec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204df0: 0xc13af88  jal         func_4EBE20
    ctx->pc = 0x204DF0u;
    SET_GPR_U32(ctx, 31, 0x204DF8u);
    ctx->pc = 0x204DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DF0u;
    // 0x204df4: 0x24060248  addiu       $a2, $zero, 0x248 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBE20u, 0x204DF0u, 0x204DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DF8u;
label_204df8:
    // 0x204df8: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x204df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x204dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e00: 0xc13afa8  jal         func_4EBEA0
    ctx->pc = 0x204E00u;
    SET_GPR_U32(ctx, 31, 0x204E08u);
    ctx->pc = 0x204E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E00u;
    // 0x204e04: 0x24060249  addiu       $a2, $zero, 0x249 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBEA0u, 0x204E00u, 0x204E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E08u;
label_204e08:
    // 0x204e08: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x204e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x204e0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e10: 0xc13afc8  jal         func_4EBF20
    ctx->pc = 0x204E10u;
    SET_GPR_U32(ctx, 31, 0x204E18u);
    ctx->pc = 0x204E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E10u;
    // 0x204e14: 0x2406024a  addiu       $a2, $zero, 0x24A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 586));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBF20u, 0x204E10u, 0x204E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E18u;
label_204e18:
    // 0x204e18: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x204e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x204e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e20: 0xc13afe8  jal         func_4EBFA0
    ctx->pc = 0x204E20u;
    SET_GPR_U32(ctx, 31, 0x204E28u);
    ctx->pc = 0x204E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E20u;
    // 0x204e24: 0x2406024b  addiu       $a2, $zero, 0x24B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 587));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBFA0u, 0x204E20u, 0x204E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E28u;
label_204e28:
    // 0x204e28: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x204e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x204e2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e30: 0xc13b008  jal         func_4EC020
    ctx->pc = 0x204E30u;
    SET_GPR_U32(ctx, 31, 0x204E38u);
    ctx->pc = 0x204E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E30u;
    // 0x204e34: 0x2406024c  addiu       $a2, $zero, 0x24C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EC020u, 0x204E30u, 0x204E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E38u;
label_204e38:
    // 0x204e38: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x204e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x204e3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e40: 0xc13b028  jal         func_4EC0A0
    ctx->pc = 0x204E40u;
    SET_GPR_U32(ctx, 31, 0x204E48u);
    ctx->pc = 0x204E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E40u;
    // 0x204e44: 0x2406024d  addiu       $a2, $zero, 0x24D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EC0A0u, 0x204E40u, 0x204E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E48u;
label_204e48:
    // 0x204e48: 0xc072164  jal         func_1C8590
    ctx->pc = 0x204E48u;
    SET_GPR_U32(ctx, 31, 0x204E50u);
    ctx->pc = 0x204E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E48u;
    // 0x204e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8590u, 0x204E48u, 0x204E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E50u;
label_204e50:
    // 0x204e50: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x204e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x204e54: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x204e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_204e58:
    // 0x204e58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x204e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204e5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x204e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204e60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x204e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204e68: 0x3e00008  jr          $ra
    ctx->pc = 0x204E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E68u;
        // 0x204e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204E70u;
}
