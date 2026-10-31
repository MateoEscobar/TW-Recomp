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

// Function: sub_001D6B00
// Address: 0x1d6b00 - 0x1d6c10
void sub_001D6B00_0x1d6b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6B00_0x1d6b00");
#endif

    switch (ctx->pc) {
        case 0x1d6b24u: goto label_1d6b24;
        case 0x1d6b30u: goto label_1d6b30;
        case 0x1d6b38u: goto label_1d6b38;
        case 0x1d6b58u: goto label_1d6b58;
        case 0x1d6b68u: goto label_1d6b68;
        case 0x1d6b70u: goto label_1d6b70;
        case 0x1d6b80u: goto label_1d6b80;
        case 0x1d6b8cu: goto label_1d6b8c;
        case 0x1d6b94u: goto label_1d6b94;
        case 0x1d6bb8u: goto label_1d6bb8;
        case 0x1d6bc8u: goto label_1d6bc8;
        case 0x1d6bd0u: goto label_1d6bd0;
        case 0x1d6be0u: goto label_1d6be0;
        case 0x1d6becu: goto label_1d6bec;
        case 0x1d6bf4u: goto label_1d6bf4;
        default: break;
    }

    ctx->pc = 0x1d6b00u;

    // 0x1d6b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d6b04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d6b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d6b08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d6b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d6b0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d6b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d6b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d6b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6b1c: 0xc075988  jal         func_1D6620
    ctx->pc = 0x1D6B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D6B24u);
    ctx->pc = 0x1D6B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B1Cu;
    // 0x1d6b20: 0x263003f0  addiu       $s0, $s1, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6620u, 0x1D6B1Cu, 0x1D6B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B24u;
label_1d6b24:
    // 0x1d6b24: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x1d6b24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1d6b28: 0xc073476  jal         func_1CD1D8
    ctx->pc = 0x1D6B28u;
    SET_GPR_U32(ctx, 31, 0x1D6B30u);
    ctx->pc = 0x1D6B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B28u;
    // 0x1d6b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1D6B28u, 0x1D6B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B30u;
label_1d6b30:
    // 0x1d6b30: 0xc0734a2  jal         func_1CD288
    ctx->pc = 0x1D6B30u;
    SET_GPR_U32(ctx, 31, 0x1D6B38u);
    ctx->pc = 0x1D6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B30u;
    // 0x1d6b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D6B30u, 0x1D6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B38u;
label_1d6b38:
    // 0x1d6b38: 0x8e2304c0  lw          $v1, 0x4C0($s1)
    ctx->pc = 0x1d6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1216)));
    // 0x1d6b3c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D6B3Cu;
    {
        const bool branch_taken_0x1d6b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B3Cu;
        // 0x1d6b40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b3c) {
            ctx->pc = 0x1D6B9Cu;
            goto label_1d6b9c;
        }
    }
    ctx->pc = 0x1D6B44u;
    // 0x1d6b44: 0x26300250  addiu       $s0, $s1, 0x250
    ctx->pc = 0x1d6b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x1d6b48: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1d6b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1d6b4c: 0x24a5d310  addiu       $a1, $a1, -0x2CF0
    ctx->pc = 0x1d6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
    // 0x1d6b50: 0xc073472  jal         func_1CD1C8
    ctx->pc = 0x1D6B50u;
    SET_GPR_U32(ctx, 31, 0x1D6B58u);
    ctx->pc = 0x1D6B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B50u;
    // 0x1d6b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1D6B50u, 0x1D6B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B58u;
label_1d6b58:
    // 0x1d6b58: 0x26310320  addiu       $s1, $s1, 0x320
    ctx->pc = 0x1d6b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x1d6b5c: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x1d6b5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1d6b60: 0xc073476  jal         func_1CD1D8
    ctx->pc = 0x1D6B60u;
    SET_GPR_U32(ctx, 31, 0x1D6B68u);
    ctx->pc = 0x1D6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B60u;
    // 0x1d6b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1D6B60u, 0x1D6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B68u;
label_1d6b68:
    // 0x1d6b68: 0xc0734a2  jal         func_1CD288
    ctx->pc = 0x1D6B68u;
    SET_GPR_U32(ctx, 31, 0x1D6B70u);
    ctx->pc = 0x1D6B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B68u;
    // 0x1d6b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D6B68u, 0x1D6B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B70u;
label_1d6b70:
    // 0x1d6b70: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1d6b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1d6b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b78: 0xc073472  jal         func_1CD1C8
    ctx->pc = 0x1D6B78u;
    SET_GPR_U32(ctx, 31, 0x1D6B80u);
    ctx->pc = 0x1D6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B78u;
    // 0x1d6b7c: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1D6B78u, 0x1D6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B80u;
label_1d6b80:
    // 0x1d6b80: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x1d6b80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1d6b84: 0xc073476  jal         func_1CD1D8
    ctx->pc = 0x1D6B84u;
    SET_GPR_U32(ctx, 31, 0x1D6B8Cu);
    ctx->pc = 0x1D6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B84u;
    // 0x1d6b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1D6B84u, 0x1D6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B8Cu;
label_1d6b8c:
    // 0x1d6b8c: 0xc0734a2  jal         func_1CD288
    ctx->pc = 0x1D6B8Cu;
    SET_GPR_U32(ctx, 31, 0x1D6B94u);
    ctx->pc = 0x1D6B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B8Cu;
    // 0x1d6b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D6B8Cu, 0x1D6B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B94u;
label_1d6b94:
    // 0x1d6b94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D6B94u;
    {
        const bool branch_taken_0x1d6b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B94u;
        // 0x1d6b98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b94) {
            ctx->pc = 0x1D6BF8u;
            goto label_1d6bf8;
        }
    }
    ctx->pc = 0x1D6B9Cu;
label_1d6b9c:
    // 0x1d6b9c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D6B9Cu;
    {
        const bool branch_taken_0x1d6b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B9Cu;
        // 0x1d6ba0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b9c) {
            ctx->pc = 0x1D6BF8u;
            goto label_1d6bf8;
        }
    }
    ctx->pc = 0x1D6BA4u;
    // 0x1d6ba4: 0x26300250  addiu       $s0, $s1, 0x250
    ctx->pc = 0x1d6ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x1d6ba8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1d6ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1d6bac: 0x24a5d320  addiu       $a1, $a1, -0x2CE0
    ctx->pc = 0x1d6bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
    // 0x1d6bb0: 0xc073472  jal         func_1CD1C8
    ctx->pc = 0x1D6BB0u;
    SET_GPR_U32(ctx, 31, 0x1D6BB8u);
    ctx->pc = 0x1D6BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BB0u;
    // 0x1d6bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1D6BB0u, 0x1D6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BB8u;
label_1d6bb8:
    // 0x1d6bb8: 0x26310320  addiu       $s1, $s1, 0x320
    ctx->pc = 0x1d6bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x1d6bbc: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x1d6bbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1d6bc0: 0xc073476  jal         func_1CD1D8
    ctx->pc = 0x1D6BC0u;
    SET_GPR_U32(ctx, 31, 0x1D6BC8u);
    ctx->pc = 0x1D6BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BC0u;
    // 0x1d6bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1D6BC0u, 0x1D6BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BC8u;
label_1d6bc8:
    // 0x1d6bc8: 0xc0734a2  jal         func_1CD288
    ctx->pc = 0x1D6BC8u;
    SET_GPR_U32(ctx, 31, 0x1D6BD0u);
    ctx->pc = 0x1D6BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BC8u;
    // 0x1d6bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D6BC8u, 0x1D6BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BD0u;
label_1d6bd0:
    // 0x1d6bd0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1d6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1d6bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6bd8: 0xc073472  jal         func_1CD1C8
    ctx->pc = 0x1D6BD8u;
    SET_GPR_U32(ctx, 31, 0x1D6BE0u);
    ctx->pc = 0x1D6BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BD8u;
    // 0x1d6bdc: 0x24a5d310  addiu       $a1, $a1, -0x2CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1D6BD8u, 0x1D6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BE0u;
label_1d6be0:
    // 0x1d6be0: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x1d6be0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1d6be4: 0xc073476  jal         func_1CD1D8
    ctx->pc = 0x1D6BE4u;
    SET_GPR_U32(ctx, 31, 0x1D6BECu);
    ctx->pc = 0x1D6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BE4u;
    // 0x1d6be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1D6BE4u, 0x1D6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BECu;
label_1d6bec:
    // 0x1d6bec: 0xc0734a2  jal         func_1CD288
    ctx->pc = 0x1D6BECu;
    SET_GPR_U32(ctx, 31, 0x1D6BF4u);
    ctx->pc = 0x1D6BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BECu;
    // 0x1d6bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D6BECu, 0x1D6BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BF4u;
label_1d6bf4:
    // 0x1d6bf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d6bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d6bf8:
    // 0x1d6bf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d6bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6bfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d6bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C04u;
        // 0x1d6c08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6C0Cu;
    // 0x1d6c0c: 0x0  nop
    ctx->pc = 0x1d6c0cu;
    // NOP
    ctx->pc = 0x1d6c10u;
}
