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

// Function: sub_00239B80
// Address: 0x239b80 - 0x239e08
void sub_00239B80_0x239b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239B80_0x239b80");
#endif

    switch (ctx->pc) {
        case 0x239bccu: goto label_239bcc;
        case 0x239bdcu: goto label_239bdc;
        case 0x239becu: goto label_239bec;
        case 0x239c18u: goto label_239c18;
        case 0x239c40u: goto label_239c40;
        case 0x239c4cu: goto label_239c4c;
        case 0x239c58u: goto label_239c58;
        case 0x239c70u: goto label_239c70;
        case 0x239c88u: goto label_239c88;
        case 0x239c94u: goto label_239c94;
        case 0x239ca4u: goto label_239ca4;
        case 0x239cd8u: goto label_239cd8;
        case 0x239ce0u: goto label_239ce0;
        case 0x239cecu: goto label_239cec;
        case 0x239d08u: goto label_239d08;
        case 0x239d1cu: goto label_239d1c;
        case 0x239d28u: goto label_239d28;
        case 0x239d3cu: goto label_239d3c;
        case 0x239d68u: goto label_239d68;
        case 0x239d70u: goto label_239d70;
        case 0x239d8cu: goto label_239d8c;
        case 0x239d9cu: goto label_239d9c;
        case 0x239db0u: goto label_239db0;
        default: break;
    }

    ctx->pc = 0x239b80u;

    // 0x239b80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x239b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x239b84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x239b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x239b88: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x239b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x239b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b90: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x239b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x239b94: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x239b94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x239b98: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x239b98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b9c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x239b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x239ba0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x239ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x239ba4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x239ba4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ba8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x239ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x239bac: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x239bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x239bb0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x239bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x239bb4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x239bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x239bb8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x239bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x239bbc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x239bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x239bc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239bc4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x239BC4u;
    SET_GPR_U32(ctx, 31, 0x239BCCu);
    ctx->pc = 0x239BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BC4u;
    // 0x239bc8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x239BC4u, 0x239BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BCCu;
label_239bcc:
    // 0x239bcc: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x239bccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x239bd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bd4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x239BD4u;
    SET_GPR_U32(ctx, 31, 0x239BDCu);
    ctx->pc = 0x239BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BD4u;
    // 0x239bd8: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x239BD4u, 0x239BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BDCu;
label_239bdc:
    // 0x239bdc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x239BDCu;
    {
        const bool branch_taken_0x239bdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x239BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BDCu;
        // 0x239be0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239bdc) {
            ctx->pc = 0x239BF8u;
            goto label_239bf8;
        }
    }
    ctx->pc = 0x239BE4u;
    // 0x239be4: 0xc087502  jal         func_21D408
    ctx->pc = 0x239BE4u;
    SET_GPR_U32(ctx, 31, 0x239BECu);
    ctx->pc = 0x239BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BE4u;
    // 0x239be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x239BE4u, 0x239BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BECu;
label_239bec:
    // 0x239bec: 0x8c55020c  lw          $s5, 0x20C($v0)
    ctx->pc = 0x239becu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x239bf0: 0x12b60079  beq         $s5, $s6, . + 4 + (0x79 << 2)
    ctx->pc = 0x239BF0u;
    {
        const bool branch_taken_0x239bf0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x239BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BF0u;
        // 0x239bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239bf0) {
            ctx->pc = 0x239DD8u;
            goto label_239dd8;
        }
    }
    ctx->pc = 0x239BF8u;
label_239bf8:
    // 0x239bf8: 0x8ee3489c  lw          $v1, 0x489C($s7)
    ctx->pc = 0x239bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
    // 0x239bfc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x239bfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239c08: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x239c08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x239c0c: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x239c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x239c10: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x239c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239c14: 0x0  nop
    ctx->pc = 0x239c14u;
    // NOP
label_239c18:
    // 0x239c18: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x239c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x239c1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x239c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x239c20: 0x0  nop
    ctx->pc = 0x239c20u;
    // NOP
    // 0x239c24: 0x0  nop
    ctx->pc = 0x239c24u;
    // NOP
    // 0x239c28: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x239C28u;
    {
        const bool branch_taken_0x239c28 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x239C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C28u;
        // 0x239c2c: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c28) {
            ctx->pc = 0x239C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239c18;
        }
    }
    ctx->pc = 0x239C30u;
    // 0x239c30: 0x620001f  bltz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x239C30u;
    {
        const bool branch_taken_0x239c30 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x239C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C30u;
        // 0x239c34: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c30) {
            ctx->pc = 0x239CB0u;
            goto label_239cb0;
        }
    }
    ctx->pc = 0x239C38u;
    // 0x239c38: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x239c38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c3c: 0x24520228  addiu       $s2, $v0, 0x228
    ctx->pc = 0x239c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
label_239c40:
    // 0x239c40: 0x8ee4489c  lw          $a0, 0x489C($s7)
    ctx->pc = 0x239c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
    // 0x239c44: 0xc0e409a  jal         func_390268
    ctx->pc = 0x239C44u;
    SET_GPR_U32(ctx, 31, 0x239C4Cu);
    ctx->pc = 0x239C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C44u;
    // 0x239c48: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x239C44u, 0x239C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C4Cu;
label_239c4c:
    // 0x239c4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c50: 0xc087502  jal         func_21D408
    ctx->pc = 0x239C50u;
    SET_GPR_U32(ctx, 31, 0x239C58u);
    ctx->pc = 0x239C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C50u;
    // 0x239c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x239C50u, 0x239C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C58u;
label_239c58:
    // 0x239c58: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x239c5c: 0x54750012  bnel        $v1, $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x239C5Cu;
    {
        const bool branch_taken_0x239c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x239c5c) {
            ctx->pc = 0x239C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239C5Cu;
            // 0x239c60: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239CA8u;
            goto label_239ca8;
        }
    }
    ctx->pc = 0x239C64u;
    // 0x239c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c68: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x239C68u;
    SET_GPR_U32(ctx, 31, 0x239C70u);
    ctx->pc = 0x239C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C68u;
    // 0x239c6c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x239C68u, 0x239C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C70u;
label_239c70:
    // 0x239c70: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x239c70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x239c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x239c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239c80: 0xc08a8aa  jal         func_22A2A8
    ctx->pc = 0x239C80u;
    SET_GPR_U32(ctx, 31, 0x239C88u);
    ctx->pc = 0x239C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C80u;
    // 0x239c84: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2A8u, 0x239C80u, 0x239C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C88u;
label_239c88:
    // 0x239c88: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x239c88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x239c8c: 0xc048892  jal         func_122248
    ctx->pc = 0x239C8Cu;
    SET_GPR_U32(ctx, 31, 0x239C94u);
    ctx->pc = 0x239C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C8Cu;
    // 0x239c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x239C8Cu, 0x239C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C94u;
label_239c94:
    // 0x239c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239C94u;
    {
        const bool branch_taken_0x239c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C94u;
        // 0x239c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c94) {
            ctx->pc = 0x239CA4u;
            goto label_239ca4;
        }
    }
    ctx->pc = 0x239C9Cu;
    // 0x239c9c: 0xc04890e  jal         func_122438
    ctx->pc = 0x239C9Cu;
    SET_GPR_U32(ctx, 31, 0x239CA4u);
    ctx->pc = 0x239CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C9Cu;
    // 0x239ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x239C9Cu, 0x239CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CA4u;
label_239ca4:
    // 0x239ca4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x239ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_239ca8:
    // 0x239ca8: 0x621ffe5  bgez        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x239CA8u;
    {
        const bool branch_taken_0x239ca8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x239CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CA8u;
        // 0x239cac: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ca8) {
            ctx->pc = 0x239C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239c40;
        }
    }
    ctx->pc = 0x239CB0u;
label_239cb0:
    // 0x239cb0: 0x8ee3489c  lw          $v1, 0x489C($s7)
    ctx->pc = 0x239cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
    // 0x239cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239cb8: 0x54a00a  movz        $s4, $v0, $s4
    ctx->pc = 0x239cb8u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x239cbc: 0x84730224  lh          $s3, 0x224($v1)
    ctx->pc = 0x239cbcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x239cc0: 0x1a600025  blez        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x239CC0u;
    {
        const bool branch_taken_0x239cc0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x239CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC0u;
        // 0x239cc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cc0) {
            ctx->pc = 0x239D58u;
            goto label_239d58;
        }
    }
    ctx->pc = 0x239CC8u;
    // 0x239cc8: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x239CC8u;
    {
        const bool branch_taken_0x239cc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC8u;
        // 0x239ccc: 0x8ee4489c  lw          $a0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cc8) {
            ctx->pc = 0x239D58u;
            goto label_239d58;
        }
    }
    ctx->pc = 0x239CD0u;
    // 0x239cd0: 0x24150228  addiu       $s5, $zero, 0x228
    ctx->pc = 0x239cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x239cd4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x239cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_239cd8:
    // 0x239cd8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x239CD8u;
    SET_GPR_U32(ctx, 31, 0x239CE0u);
    ctx->pc = 0x239CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CD8u;
    // 0x239cdc: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x239CD8u, 0x239CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CE0u;
label_239ce0:
    // 0x239ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ce4: 0xc087502  jal         func_21D408
    ctx->pc = 0x239CE4u;
    SET_GPR_U32(ctx, 31, 0x239CECu);
    ctx->pc = 0x239CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CE4u;
    // 0x239ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x239CE4u, 0x239CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CECu;
label_239cec:
    // 0x239cec: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x239cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x239cf0: 0x54760014  bnel        $v1, $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x239CF0u;
    {
        const bool branch_taken_0x239cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x239cf0) {
            ctx->pc = 0x239CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239CF0u;
            // 0x239cf4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D44u;
            goto label_239d44;
        }
    }
    ctx->pc = 0x239CF8u;
    // 0x239cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239cfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x239cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239d00: 0xc08a8aa  jal         func_22A2A8
    ctx->pc = 0x239D00u;
    SET_GPR_U32(ctx, 31, 0x239D08u);
    ctx->pc = 0x239D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D00u;
    // 0x239d04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2A8u, 0x239D00u, 0x239D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D08u;
label_239d08:
    // 0x239d08: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x239d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x239d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x239d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239d14: 0xc08a710  jal         func_229C40
    ctx->pc = 0x239D14u;
    SET_GPR_U32(ctx, 31, 0x239D1Cu);
    ctx->pc = 0x239D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D14u;
    // 0x239d18: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C40u, 0x239D14u, 0x239D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D1Cu;
label_239d1c:
    // 0x239d1c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x239d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x239d20: 0xc048892  jal         func_122248
    ctx->pc = 0x239D20u;
    SET_GPR_U32(ctx, 31, 0x239D28u);
    ctx->pc = 0x239D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D20u;
    // 0x239d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x239D20u, 0x239D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D28u;
label_239d28:
    // 0x239d28: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x239D28u;
    {
        const bool branch_taken_0x239d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d28) {
            ctx->pc = 0x239D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D28u;
            // 0x239d2c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D40u;
            goto label_239d40;
        }
    }
    ctx->pc = 0x239D30u;
    // 0x239d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d34: 0xc0488ac  jal         func_1222B0
    ctx->pc = 0x239D34u;
    SET_GPR_U32(ctx, 31, 0x239D3Cu);
    ctx->pc = 0x239D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D34u;
    // 0x239d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x239D34u, 0x239D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D3Cu;
label_239d3c:
    // 0x239d3c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x239d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_239d40:
    // 0x239d40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x239d40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_239d44:
    // 0x239d44: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x239d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x239d48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239D48u;
    {
        const bool branch_taken_0x239d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D48u;
        // 0x239d4c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d48) {
            ctx->pc = 0x239D58u;
            goto label_239d58;
        }
    }
    ctx->pc = 0x239D50u;
    // 0x239d50: 0x1680ffe1  bnez        $s4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x239D50u;
    {
        const bool branch_taken_0x239d50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x239D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D50u;
        // 0x239d54: 0x8ee4489c  lw          $a0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d50) {
            ctx->pc = 0x239CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239cd8;
        }
    }
    ctx->pc = 0x239D58u;
label_239d58:
    // 0x239d58: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x239D58u;
    {
        const bool branch_taken_0x239d58 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x239D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D58u;
        // 0x239d5c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d58) {
            ctx->pc = 0x239DBCu;
            goto label_239dbc;
        }
    }
    ctx->pc = 0x239D60u;
    // 0x239d60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x239d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d64: 0x0  nop
    ctx->pc = 0x239d64u;
    // NOP
label_239d68:
    // 0x239d68: 0xc08a9dc  jal         func_22A770
    ctx->pc = 0x239D68u;
    SET_GPR_U32(ctx, 31, 0x239D70u);
    ctx->pc = 0x239D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D68u;
    // 0x239d6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A770u, 0x239D68u, 0x239D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D70u;
label_239d70:
    // 0x239d70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d74: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x239D74u;
    {
        const bool branch_taken_0x239d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D74u;
        // 0x239d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d74) {
            ctx->pc = 0x239DB0u;
            goto label_239db0;
        }
    }
    ctx->pc = 0x239D7Cu;
    // 0x239d7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239d80: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x239d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239d84: 0xc08a710  jal         func_229C40
    ctx->pc = 0x239D84u;
    SET_GPR_U32(ctx, 31, 0x239D8Cu);
    ctx->pc = 0x239D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D84u;
    // 0x239d88: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C40u, 0x239D84u, 0x239D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D8Cu;
label_239d8c:
    // 0x239d8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x239D8Cu;
    {
        const bool branch_taken_0x239d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d8c) {
            ctx->pc = 0x239D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D8Cu;
            // 0x239d90: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239DB4u;
            goto label_239db4;
        }
    }
    ctx->pc = 0x239D94u;
    // 0x239d94: 0xc048892  jal         func_122248
    ctx->pc = 0x239D94u;
    SET_GPR_U32(ctx, 31, 0x239D9Cu);
    ctx->pc = 0x239D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D94u;
    // 0x239d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x239D94u, 0x239D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D9Cu;
label_239d9c:
    // 0x239d9c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x239D9Cu;
    {
        const bool branch_taken_0x239d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d9c) {
            ctx->pc = 0x239DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D9Cu;
            // 0x239da0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239DB4u;
            goto label_239db4;
        }
    }
    ctx->pc = 0x239DA4u;
    // 0x239da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239da8: 0xc0488ac  jal         func_1222B0
    ctx->pc = 0x239DA8u;
    SET_GPR_U32(ctx, 31, 0x239DB0u);
    ctx->pc = 0x239DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239DA8u;
    // 0x239dac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x239DA8u, 0x239DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239DB0u;
label_239db0:
    // 0x239db0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x239db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_239db4:
    // 0x239db4: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x239DB4u;
    {
        const bool branch_taken_0x239db4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x239DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DB4u;
        // 0x239db8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239db4) {
            ctx->pc = 0x239D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239d68;
        }
    }
    ctx->pc = 0x239DBCu;
label_239dbc:
    // 0x239dbc: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x239DBCu;
    {
        const bool branch_taken_0x239dbc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DBCu;
        // 0x239dc0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dbc) {
            ctx->pc = 0x239DD4u;
            goto label_239dd4;
        }
    }
    ctx->pc = 0x239DC4u;
    // 0x239dc4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x239dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x239dc8: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x239dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x239dcc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x239dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x239dd0: 0xaca3054c  sw          $v1, 0x54C($a1)
    ctx->pc = 0x239dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x51054Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51054Cu, _value); } while (0);
label_239dd4:
    // 0x239dd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239dd8:
    // 0x239dd8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x239dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x239ddc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x239ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x239de0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x239de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x239de4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x239de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x239de8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x239de8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x239dec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x239decu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239df0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x239df0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239df4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x239df4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239df8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x239df8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239e00: 0x3e00008  jr          $ra
    ctx->pc = 0x239E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E00u;
        // 0x239e04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239E08u;
}
