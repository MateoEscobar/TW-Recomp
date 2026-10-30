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

// Function: sub_001D1AA0
// Address: 0x1d1aa0 - 0x1d1c48
void sub_001D1AA0_0x1d1aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1AA0_0x1d1aa0");
#endif

    switch (ctx->pc) {
        case 0x1d1aa0u: goto label_1d1aa0;
        case 0x1d1aa4u: goto label_1d1aa4;
        case 0x1d1aa8u: goto label_1d1aa8;
        case 0x1d1aacu: goto label_1d1aac;
        case 0x1d1ab0u: goto label_1d1ab0;
        case 0x1d1ab4u: goto label_1d1ab4;
        case 0x1d1ab8u: goto label_1d1ab8;
        case 0x1d1abcu: goto label_1d1abc;
        case 0x1d1ac0u: goto label_1d1ac0;
        case 0x1d1ac4u: goto label_1d1ac4;
        case 0x1d1ac8u: goto label_1d1ac8;
        case 0x1d1accu: goto label_1d1acc;
        case 0x1d1ad0u: goto label_1d1ad0;
        case 0x1d1ad4u: goto label_1d1ad4;
        case 0x1d1ad8u: goto label_1d1ad8;
        case 0x1d1adcu: goto label_1d1adc;
        case 0x1d1ae0u: goto label_1d1ae0;
        case 0x1d1ae4u: goto label_1d1ae4;
        case 0x1d1ae8u: goto label_1d1ae8;
        case 0x1d1aecu: goto label_1d1aec;
        case 0x1d1af0u: goto label_1d1af0;
        case 0x1d1af4u: goto label_1d1af4;
        case 0x1d1af8u: goto label_1d1af8;
        case 0x1d1afcu: goto label_1d1afc;
        case 0x1d1b00u: goto label_1d1b00;
        case 0x1d1b04u: goto label_1d1b04;
        case 0x1d1b08u: goto label_1d1b08;
        case 0x1d1b0cu: goto label_1d1b0c;
        case 0x1d1b10u: goto label_1d1b10;
        case 0x1d1b14u: goto label_1d1b14;
        case 0x1d1b18u: goto label_1d1b18;
        case 0x1d1b1cu: goto label_1d1b1c;
        case 0x1d1b20u: goto label_1d1b20;
        case 0x1d1b24u: goto label_1d1b24;
        case 0x1d1b28u: goto label_1d1b28;
        case 0x1d1b2cu: goto label_1d1b2c;
        case 0x1d1b30u: goto label_1d1b30;
        case 0x1d1b34u: goto label_1d1b34;
        case 0x1d1b38u: goto label_1d1b38;
        case 0x1d1b3cu: goto label_1d1b3c;
        case 0x1d1b40u: goto label_1d1b40;
        case 0x1d1b44u: goto label_1d1b44;
        case 0x1d1b48u: goto label_1d1b48;
        case 0x1d1b4cu: goto label_1d1b4c;
        case 0x1d1b50u: goto label_1d1b50;
        case 0x1d1b54u: goto label_1d1b54;
        case 0x1d1b58u: goto label_1d1b58;
        case 0x1d1b5cu: goto label_1d1b5c;
        case 0x1d1b60u: goto label_1d1b60;
        case 0x1d1b64u: goto label_1d1b64;
        case 0x1d1b68u: goto label_1d1b68;
        case 0x1d1b6cu: goto label_1d1b6c;
        case 0x1d1b70u: goto label_1d1b70;
        case 0x1d1b74u: goto label_1d1b74;
        case 0x1d1b78u: goto label_1d1b78;
        case 0x1d1b7cu: goto label_1d1b7c;
        case 0x1d1b80u: goto label_1d1b80;
        case 0x1d1b84u: goto label_1d1b84;
        case 0x1d1b88u: goto label_1d1b88;
        case 0x1d1b8cu: goto label_1d1b8c;
        case 0x1d1b90u: goto label_1d1b90;
        case 0x1d1b94u: goto label_1d1b94;
        case 0x1d1b98u: goto label_1d1b98;
        case 0x1d1b9cu: goto label_1d1b9c;
        case 0x1d1ba0u: goto label_1d1ba0;
        case 0x1d1ba4u: goto label_1d1ba4;
        case 0x1d1ba8u: goto label_1d1ba8;
        case 0x1d1bacu: goto label_1d1bac;
        case 0x1d1bb0u: goto label_1d1bb0;
        case 0x1d1bb4u: goto label_1d1bb4;
        case 0x1d1bb8u: goto label_1d1bb8;
        case 0x1d1bbcu: goto label_1d1bbc;
        case 0x1d1bc0u: goto label_1d1bc0;
        case 0x1d1bc4u: goto label_1d1bc4;
        case 0x1d1bc8u: goto label_1d1bc8;
        case 0x1d1bccu: goto label_1d1bcc;
        case 0x1d1bd0u: goto label_1d1bd0;
        case 0x1d1bd4u: goto label_1d1bd4;
        case 0x1d1bd8u: goto label_1d1bd8;
        case 0x1d1bdcu: goto label_1d1bdc;
        case 0x1d1be0u: goto label_1d1be0;
        case 0x1d1be4u: goto label_1d1be4;
        case 0x1d1be8u: goto label_1d1be8;
        case 0x1d1becu: goto label_1d1bec;
        case 0x1d1bf0u: goto label_1d1bf0;
        case 0x1d1bf4u: goto label_1d1bf4;
        case 0x1d1bf8u: goto label_1d1bf8;
        case 0x1d1bfcu: goto label_1d1bfc;
        case 0x1d1c00u: goto label_1d1c00;
        case 0x1d1c04u: goto label_1d1c04;
        case 0x1d1c08u: goto label_1d1c08;
        case 0x1d1c0cu: goto label_1d1c0c;
        case 0x1d1c10u: goto label_1d1c10;
        case 0x1d1c14u: goto label_1d1c14;
        case 0x1d1c18u: goto label_1d1c18;
        case 0x1d1c1cu: goto label_1d1c1c;
        case 0x1d1c20u: goto label_1d1c20;
        case 0x1d1c24u: goto label_1d1c24;
        case 0x1d1c28u: goto label_1d1c28;
        case 0x1d1c2cu: goto label_1d1c2c;
        case 0x1d1c30u: goto label_1d1c30;
        case 0x1d1c34u: goto label_1d1c34;
        case 0x1d1c38u: goto label_1d1c38;
        case 0x1d1c3cu: goto label_1d1c3c;
        case 0x1d1c40u: goto label_1d1c40;
        case 0x1d1c44u: goto label_1d1c44;
        default: break;
    }

    ctx->pc = 0x1d1aa0u;

label_1d1aa0:
    // 0x1d1aa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d1aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1d1aa4:
    // 0x1d1aa4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1d1aa8:
    // 0x1d1aa8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d1aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1d1aac:
    // 0x1d1aac: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1d1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1d1ab0:
    // 0x1d1ab0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d1ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1d1ab4:
    // 0x1d1ab4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ab8:
    // 0x1d1ab8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1d1ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1d1abc:
    // 0x1d1abc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d1abcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ac0:
    // 0x1d1ac0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1d1ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1d1ac4:
    // 0x1d1ac4: 0x24553f10  addiu       $s5, $v0, 0x3F10
    ctx->pc = 0x1d1ac4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16144));
label_1d1ac8:
    // 0x1d1ac8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d1ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1d1acc:
    // 0x1d1acc: 0x245615d0  addiu       $s6, $v0, 0x15D0
    ctx->pc = 0x1d1accu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 5584));
label_1d1ad0:
    // 0x1d1ad0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d1ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1d1ad4:
    // 0x1d1ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ad8:
    // 0x1d1ad8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d1ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d1adc:
    // 0x1d1adc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d1adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ae0:
    // 0x1d1ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1ae4:
    // 0x1d1ae4: 0xc06c86a  jal         func_1B21A8
label_1d1ae8:
    if (ctx->pc == 0x1D1AE8u) {
        ctx->pc = 0x1D1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE4u;
        // 0x1d1ae8: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1AECu;
        goto label_1d1aec;
    }
    ctx->pc = 0x1D1AE4u;
    SET_GPR_U32(ctx, 31, 0x1D1AECu);
    ctx->pc = 0x1D1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AE4u;
    // 0x1d1ae8: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B21A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B21A8u, 0x1D1AE4u, 0x1D1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AECu;
label_1d1aec:
    // 0x1d1aec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d1aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1af0:
    // 0x1d1af0: 0xaed00004  sw          $s0, 0x4($s6)
    ctx->pc = 0x1d1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 16));
label_1d1af4:
    // 0x1d1af4: 0x0  nop
    ctx->pc = 0x1d1af4u;
    // NOP
label_1d1af8:
    // 0x1d1af8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d1afc:
    // 0x1d1afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b00:
    // 0x1d1b00: 0xc06c996  jal         func_1B2658
label_1d1b04:
    if (ctx->pc == 0x1D1B04u) {
        ctx->pc = 0x1D1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B00u;
        // 0x1d1b04: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B08u;
        goto label_1d1b08;
    }
    ctx->pc = 0x1D1B00u;
    SET_GPR_U32(ctx, 31, 0x1D1B08u);
    ctx->pc = 0x1D1B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B00u;
    // 0x1d1b04: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1D1B00u, 0x1D1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B08u;
label_1d1b08:
    // 0x1d1b08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d1b0c:
    // 0x1d1b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d1b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b10:
    // 0x1d1b10: 0xc06c996  jal         func_1B2658
label_1d1b14:
    if (ctx->pc == 0x1D1B14u) {
        ctx->pc = 0x1D1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B10u;
        // 0x1d1b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B18u;
        goto label_1d1b18;
    }
    ctx->pc = 0x1D1B10u;
    SET_GPR_U32(ctx, 31, 0x1D1B18u);
    ctx->pc = 0x1D1B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B10u;
    // 0x1d1b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1D1B10u, 0x1D1B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B18u;
label_1d1b18:
    // 0x1d1b18: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1d1b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d1b1c:
    // 0x1d1b1c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_1d1b20:
    if (ctx->pc == 0x1D1B20u) {
        ctx->pc = 0x1D1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B1Cu;
        // 0x1d1b20: 0xaed00004  sw          $s0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B24u;
        goto label_1d1b24;
    }
    ctx->pc = 0x1D1B1Cu;
    {
        const bool branch_taken_0x1d1b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b1c) {
            ctx->pc = 0x1D1B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1B1Cu;
            // 0x1d1b20: 0xaed00004  sw          $s0, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1af8;
        }
    }
    ctx->pc = 0x1D1B24u;
label_1d1b24:
    // 0x1d1b24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d1b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b28:
    // 0x1d1b28: 0x3c140008  lui         $s4, 0x8
    ctx->pc = 0x1d1b28u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)8 << 16));
label_1d1b2c:
    // 0x1d1b2c: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x1d1b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_1d1b30:
    // 0x1d1b30: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x1d1b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_1d1b34:
    // 0x1d1b34: 0xc0e409a  jal         func_390268
label_1d1b38:
    if (ctx->pc == 0x1D1B38u) {
        ctx->pc = 0x1D1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B34u;
        // 0x1d1b38: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B3Cu;
        goto label_1d1b3c;
    }
    ctx->pc = 0x1D1B34u;
    SET_GPR_U32(ctx, 31, 0x1D1B3Cu);
    ctx->pc = 0x1D1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B34u;
    // 0x1d1b38: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1D1B34u, 0x1D1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B3Cu;
label_1d1b3c:
    // 0x1d1b3c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1d1b40:
    if (ctx->pc == 0x1D1B40u) {
        ctx->pc = 0x1D1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B3Cu;
        // 0x1d1b40: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B44u;
        goto label_1d1b44;
    }
    ctx->pc = 0x1D1B3Cu;
    {
        const bool branch_taken_0x1d1b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B3Cu;
        // 0x1d1b40: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b3c) {
            ctx->pc = 0x1D1B7Cu;
            goto label_1d1b7c;
        }
    }
    ctx->pc = 0x1D1B44u;
label_1d1b44:
    // 0x1d1b44: 0xc0e409a  jal         func_390268
label_1d1b48:
    if (ctx->pc == 0x1D1B48u) {
        ctx->pc = 0x1D1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B44u;
        // 0x1d1b48: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B4Cu;
        goto label_1d1b4c;
    }
    ctx->pc = 0x1D1B44u;
    SET_GPR_U32(ctx, 31, 0x1D1B4Cu);
    ctx->pc = 0x1D1B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B44u;
    // 0x1d1b48: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1D1B44u, 0x1D1B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B4Cu;
label_1d1b4c:
    // 0x1d1b4c: 0xdc4300e0  ld          $v1, 0xE0($v0)
    ctx->pc = 0x1d1b4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 224)));
label_1d1b50:
    // 0x1d1b50: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x1d1b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
label_1d1b54:
    // 0x1d1b54: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d1b54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1d1b58:
    // 0x1d1b58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d1b5c:
    // 0x1d1b5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1b5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1d1b60:
    // 0x1d1b60: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1d1b64:
    if (ctx->pc == 0x1D1B64u) {
        ctx->pc = 0x1D1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B60u;
        // 0x1d1b64: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B68u;
        goto label_1d1b68;
    }
    ctx->pc = 0x1D1B60u;
    {
        const bool branch_taken_0x1d1b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B60u;
        // 0x1d1b64: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b60) {
            ctx->pc = 0x1D1B7Cu;
            goto label_1d1b7c;
        }
    }
    ctx->pc = 0x1D1B68u;
label_1d1b68:
    // 0x1d1b68: 0xc0e409a  jal         func_390268
label_1d1b6c:
    if (ctx->pc == 0x1D1B6Cu) {
        ctx->pc = 0x1D1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B68u;
        // 0x1d1b6c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B70u;
        goto label_1d1b70;
    }
    ctx->pc = 0x1D1B68u;
    SET_GPR_U32(ctx, 31, 0x1D1B70u);
    ctx->pc = 0x1D1B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B68u;
    // 0x1d1b6c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1D1B68u, 0x1D1B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B70u;
label_1d1b70:
    // 0x1d1b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b74:
    // 0x1d1b74: 0xc08dbee  jal         func_236FB8
label_1d1b78:
    if (ctx->pc == 0x1D1B78u) {
        ctx->pc = 0x1D1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B74u;
        // 0x1d1b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B7Cu;
        goto label_1d1b7c;
    }
    ctx->pc = 0x1D1B74u;
    SET_GPR_U32(ctx, 31, 0x1D1B7Cu);
    ctx->pc = 0x1D1B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B74u;
    // 0x1d1b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FB8u, 0x1D1B74u, 0x1D1B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B7Cu;
label_1d1b7c:
    // 0x1d1b7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d1b80:
    // 0x1d1b80: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1d1b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d1b84:
    // 0x1d1b84: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1d1b88:
    if (ctx->pc == 0x1D1B88u) {
        ctx->pc = 0x1D1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B84u;
        // 0x1d1b88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B8Cu;
        goto label_1d1b8c;
    }
    ctx->pc = 0x1D1B84u;
    {
        const bool branch_taken_0x1d1b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B84u;
        // 0x1d1b88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b84) {
            ctx->pc = 0x1D1B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b30;
        }
    }
    ctx->pc = 0x1D1B8Cu;
label_1d1b8c:
    // 0x1d1b8c: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x1d1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_1d1b90:
    // 0x1d1b90: 0xc0e409a  jal         func_390268
label_1d1b94:
    if (ctx->pc == 0x1D1B94u) {
        ctx->pc = 0x1D1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B90u;
        // 0x1d1b94: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B98u;
        goto label_1d1b98;
    }
    ctx->pc = 0x1D1B90u;
    SET_GPR_U32(ctx, 31, 0x1D1B98u);
    ctx->pc = 0x1D1B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B90u;
    // 0x1d1b94: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1D1B90u, 0x1D1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B98u;
label_1d1b98:
    // 0x1d1b98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d1b9c:
    if (ctx->pc == 0x1D1B9Cu) {
        ctx->pc = 0x1D1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B98u;
        // 0x1d1b9c: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BA0u;
        goto label_1d1ba0;
    }
    ctx->pc = 0x1D1B98u;
    {
        const bool branch_taken_0x1d1b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B98u;
        // 0x1d1b9c: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b98) {
            ctx->pc = 0x1D1BB4u;
            goto label_1d1bb4;
        }
    }
    ctx->pc = 0x1D1BA0u;
label_1d1ba0:
    // 0x1d1ba0: 0xc0e409a  jal         func_390268
label_1d1ba4:
    if (ctx->pc == 0x1D1BA4u) {
        ctx->pc = 0x1D1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BA0u;
        // 0x1d1ba4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BA8u;
        goto label_1d1ba8;
    }
    ctx->pc = 0x1D1BA0u;
    SET_GPR_U32(ctx, 31, 0x1D1BA8u);
    ctx->pc = 0x1D1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BA0u;
    // 0x1d1ba4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1D1BA0u, 0x1D1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BA8u;
label_1d1ba8:
    // 0x1d1ba8: 0xc0874fa  jal         func_21D3E8
label_1d1bac:
    if (ctx->pc == 0x1D1BACu) {
        ctx->pc = 0x1D1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BA8u;
        // 0x1d1bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BB0u;
        goto label_1d1bb0;
    }
    ctx->pc = 0x1D1BA8u;
    SET_GPR_U32(ctx, 31, 0x1D1BB0u);
    ctx->pc = 0x1D1BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BA8u;
    // 0x1d1bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1D1BA8u, 0x1D1BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BB0u;
label_1d1bb0:
    // 0x1d1bb0: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1d1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_1d1bb4:
    // 0x1d1bb4: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1d1bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1d1bb8:
    // 0x1d1bb8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1d1bbc:
    if (ctx->pc == 0x1D1BBCu) {
        ctx->pc = 0x1D1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB8u;
        // 0x1d1bbc: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BC0u;
        goto label_1d1bc0;
    }
    ctx->pc = 0x1D1BB8u;
    {
        const bool branch_taken_0x1d1bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1bb8) {
            ctx->pc = 0x1D1BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1BB8u;
            // 0x1d1bbc: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1BCCu;
            goto label_1d1bcc;
        }
    }
    ctx->pc = 0x1D1BC0u;
label_1d1bc0:
    // 0x1d1bc0: 0xc051800  jal         func_146000
label_1d1bc4:
    if (ctx->pc == 0x1D1BC4u) {
        ctx->pc = 0x1D1BC8u;
        goto label_1d1bc8;
    }
    ctx->pc = 0x1D1BC0u;
    SET_GPR_U32(ctx, 31, 0x1D1BC8u);
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1D1BC0u, 0x1D1BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BC8u;
label_1d1bc8:
    // 0x1d1bc8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1d1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1d1bcc:
    // 0x1d1bcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d1bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1bd0:
    // 0x1d1bd0: 0xa060001b  sb          $zero, 0x1B($v1)
    ctx->pc = 0x1d1bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27), (uint8_t)GPR_U32(ctx, 0));
label_1d1bd4:
    // 0x1d1bd4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d1bd8:
    // 0x1d1bd8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1d1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1d1bdc:
    // 0x1d1bdc: 0xa044001e  sb          $a0, 0x1E($v0)
    ctx->pc = 0x1d1bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 30), (uint8_t)GPR_U32(ctx, 4));
label_1d1be0:
    // 0x1d1be0: 0x8c66b8b8  lw          $a2, -0x4748($v1)
    ctx->pc = 0x1d1be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1d1be4:
    // 0x1d1be4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1d1be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d1be8:
    // 0x1d1be8: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1d1be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1d1bec:
    // 0x1d1bec: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1d1becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1d1bf0:
    // 0x1d1bf0: 0x40f809  jalr        $v0
label_1d1bf4:
    if (ctx->pc == 0x1D1BF4u) {
        ctx->pc = 0x1D1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF0u;
        // 0x1d1bf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BF8u;
        goto label_1d1bf8;
    }
    ctx->pc = 0x1D1BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1BF8u);
        ctx->pc = 0x1D1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF0u;
        // 0x1d1bf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BF0u, 0x1D1BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1BF8u;
label_1d1bf8:
    // 0x1d1bf8: 0xae220704  sw          $v0, 0x704($s1)
    ctx->pc = 0x1d1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1796), GPR_U32(ctx, 2));
label_1d1bfc:
    // 0x1d1bfc: 0xae220700  sw          $v0, 0x700($s1)
    ctx->pc = 0x1d1bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 2));
label_1d1c00:
    // 0x1d1c00: 0xae200708  sw          $zero, 0x708($s1)
    ctx->pc = 0x1d1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1800), GPR_U32(ctx, 0));
label_1d1c04:
    // 0x1d1c04: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x1d1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_1d1c08:
    // 0x1d1c08: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x1d1c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_1d1c0c:
    // 0x1d1c0c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d1c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d1c10:
    // 0x1d1c10: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x1d1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_1d1c14:
    // 0x1d1c14: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1d1c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1d1c18:
    // 0x1d1c18: 0xae23078c  sw          $v1, 0x78C($s1)
    ctx->pc = 0x1d1c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1932), GPR_U32(ctx, 3));
label_1d1c1c:
    // 0x1d1c1c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1d1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_1d1c20:
    // 0x1d1c20: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d1c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d1c24:
    // 0x1d1c24: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d1c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1c28:
    // 0x1d1c28: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d1c28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1c2c:
    // 0x1d1c2c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d1c2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1c30:
    // 0x1d1c30: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1d1c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1c34:
    // 0x1d1c34: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1d1c34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1c38:
    // 0x1d1c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1c3c:
    // 0x1d1c3c: 0x3e00008  jr          $ra
label_1d1c40:
    if (ctx->pc == 0x1D1C40u) {
        ctx->pc = 0x1D1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C3Cu;
        // 0x1d1c40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C44u;
        goto label_1d1c44;
    }
    ctx->pc = 0x1D1C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C3Cu;
        // 0x1d1c40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1C44u;
label_1d1c44:
    // 0x1d1c44: 0x0  nop
    ctx->pc = 0x1d1c44u;
    // NOP
    ctx->pc = 0x1d1c48u;
}
