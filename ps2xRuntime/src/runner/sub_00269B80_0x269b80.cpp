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

// Function: sub_00269B80
// Address: 0x269b80 - 0x269dc8
void sub_00269B80_0x269b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269B80_0x269b80");
#endif

    switch (ctx->pc) {
        case 0x269b80u: goto label_269b80;
        case 0x269b84u: goto label_269b84;
        case 0x269b88u: goto label_269b88;
        case 0x269b8cu: goto label_269b8c;
        case 0x269b90u: goto label_269b90;
        case 0x269b94u: goto label_269b94;
        case 0x269b98u: goto label_269b98;
        case 0x269b9cu: goto label_269b9c;
        case 0x269ba0u: goto label_269ba0;
        case 0x269ba4u: goto label_269ba4;
        case 0x269ba8u: goto label_269ba8;
        case 0x269bacu: goto label_269bac;
        case 0x269bb0u: goto label_269bb0;
        case 0x269bb4u: goto label_269bb4;
        case 0x269bb8u: goto label_269bb8;
        case 0x269bbcu: goto label_269bbc;
        case 0x269bc0u: goto label_269bc0;
        case 0x269bc4u: goto label_269bc4;
        case 0x269bc8u: goto label_269bc8;
        case 0x269bccu: goto label_269bcc;
        case 0x269bd0u: goto label_269bd0;
        case 0x269bd4u: goto label_269bd4;
        case 0x269bd8u: goto label_269bd8;
        case 0x269bdcu: goto label_269bdc;
        case 0x269be0u: goto label_269be0;
        case 0x269be4u: goto label_269be4;
        case 0x269be8u: goto label_269be8;
        case 0x269becu: goto label_269bec;
        case 0x269bf0u: goto label_269bf0;
        case 0x269bf4u: goto label_269bf4;
        case 0x269bf8u: goto label_269bf8;
        case 0x269bfcu: goto label_269bfc;
        case 0x269c00u: goto label_269c00;
        case 0x269c04u: goto label_269c04;
        case 0x269c08u: goto label_269c08;
        case 0x269c0cu: goto label_269c0c;
        case 0x269c10u: goto label_269c10;
        case 0x269c14u: goto label_269c14;
        case 0x269c18u: goto label_269c18;
        case 0x269c1cu: goto label_269c1c;
        case 0x269c20u: goto label_269c20;
        case 0x269c24u: goto label_269c24;
        case 0x269c28u: goto label_269c28;
        case 0x269c2cu: goto label_269c2c;
        case 0x269c30u: goto label_269c30;
        case 0x269c34u: goto label_269c34;
        case 0x269c38u: goto label_269c38;
        case 0x269c3cu: goto label_269c3c;
        case 0x269c40u: goto label_269c40;
        case 0x269c44u: goto label_269c44;
        case 0x269c48u: goto label_269c48;
        case 0x269c4cu: goto label_269c4c;
        case 0x269c50u: goto label_269c50;
        case 0x269c54u: goto label_269c54;
        case 0x269c58u: goto label_269c58;
        case 0x269c5cu: goto label_269c5c;
        case 0x269c60u: goto label_269c60;
        case 0x269c64u: goto label_269c64;
        case 0x269c68u: goto label_269c68;
        case 0x269c6cu: goto label_269c6c;
        case 0x269c70u: goto label_269c70;
        case 0x269c74u: goto label_269c74;
        case 0x269c78u: goto label_269c78;
        case 0x269c7cu: goto label_269c7c;
        case 0x269c80u: goto label_269c80;
        case 0x269c84u: goto label_269c84;
        case 0x269c88u: goto label_269c88;
        case 0x269c8cu: goto label_269c8c;
        case 0x269c90u: goto label_269c90;
        case 0x269c94u: goto label_269c94;
        case 0x269c98u: goto label_269c98;
        case 0x269c9cu: goto label_269c9c;
        case 0x269ca0u: goto label_269ca0;
        case 0x269ca4u: goto label_269ca4;
        case 0x269ca8u: goto label_269ca8;
        case 0x269cacu: goto label_269cac;
        case 0x269cb0u: goto label_269cb0;
        case 0x269cb4u: goto label_269cb4;
        case 0x269cb8u: goto label_269cb8;
        case 0x269cbcu: goto label_269cbc;
        case 0x269cc0u: goto label_269cc0;
        case 0x269cc4u: goto label_269cc4;
        case 0x269cc8u: goto label_269cc8;
        case 0x269cccu: goto label_269ccc;
        case 0x269cd0u: goto label_269cd0;
        case 0x269cd4u: goto label_269cd4;
        case 0x269cd8u: goto label_269cd8;
        case 0x269cdcu: goto label_269cdc;
        case 0x269ce0u: goto label_269ce0;
        case 0x269ce4u: goto label_269ce4;
        case 0x269ce8u: goto label_269ce8;
        case 0x269cecu: goto label_269cec;
        case 0x269cf0u: goto label_269cf0;
        case 0x269cf4u: goto label_269cf4;
        case 0x269cf8u: goto label_269cf8;
        case 0x269cfcu: goto label_269cfc;
        case 0x269d00u: goto label_269d00;
        case 0x269d04u: goto label_269d04;
        case 0x269d08u: goto label_269d08;
        case 0x269d0cu: goto label_269d0c;
        case 0x269d10u: goto label_269d10;
        case 0x269d14u: goto label_269d14;
        case 0x269d18u: goto label_269d18;
        case 0x269d1cu: goto label_269d1c;
        case 0x269d20u: goto label_269d20;
        case 0x269d24u: goto label_269d24;
        case 0x269d28u: goto label_269d28;
        case 0x269d2cu: goto label_269d2c;
        case 0x269d30u: goto label_269d30;
        case 0x269d34u: goto label_269d34;
        case 0x269d38u: goto label_269d38;
        case 0x269d3cu: goto label_269d3c;
        case 0x269d40u: goto label_269d40;
        case 0x269d44u: goto label_269d44;
        case 0x269d48u: goto label_269d48;
        case 0x269d4cu: goto label_269d4c;
        case 0x269d50u: goto label_269d50;
        case 0x269d54u: goto label_269d54;
        case 0x269d58u: goto label_269d58;
        case 0x269d5cu: goto label_269d5c;
        case 0x269d60u: goto label_269d60;
        case 0x269d64u: goto label_269d64;
        case 0x269d68u: goto label_269d68;
        case 0x269d6cu: goto label_269d6c;
        case 0x269d70u: goto label_269d70;
        case 0x269d74u: goto label_269d74;
        case 0x269d78u: goto label_269d78;
        case 0x269d7cu: goto label_269d7c;
        case 0x269d80u: goto label_269d80;
        case 0x269d84u: goto label_269d84;
        case 0x269d88u: goto label_269d88;
        case 0x269d8cu: goto label_269d8c;
        case 0x269d90u: goto label_269d90;
        case 0x269d94u: goto label_269d94;
        case 0x269d98u: goto label_269d98;
        case 0x269d9cu: goto label_269d9c;
        case 0x269da0u: goto label_269da0;
        case 0x269da4u: goto label_269da4;
        case 0x269da8u: goto label_269da8;
        case 0x269dacu: goto label_269dac;
        case 0x269db0u: goto label_269db0;
        case 0x269db4u: goto label_269db4;
        case 0x269db8u: goto label_269db8;
        case 0x269dbcu: goto label_269dbc;
        case 0x269dc0u: goto label_269dc0;
        case 0x269dc4u: goto label_269dc4;
        default: break;
    }

    ctx->pc = 0x269b80u;

label_269b80:
    // 0x269b80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x269b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_269b84:
    // 0x269b84: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x269b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_269b88:
    // 0x269b88: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x269b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_269b8c:
    // 0x269b8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x269b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_269b90:
    // 0x269b90: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x269b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_269b94:
    // 0x269b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x269b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269b98:
    // 0x269b98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x269b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_269b9c:
    // 0x269b9c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x269b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_269ba0:
    // 0x269ba0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x269ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269ba4:
    // 0x269ba4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x269ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_269ba8:
    // 0x269ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_269bac:
    // 0x269bac: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x269bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_269bb0:
    // 0x269bb0: 0xc089988  jal         func_226620
label_269bb4:
    if (ctx->pc == 0x269BB4u) {
        ctx->pc = 0x269BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BB0u;
        // 0x269bb4: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269BB8u;
        goto label_269bb8;
    }
    ctx->pc = 0x269BB0u;
    SET_GPR_U32(ctx, 31, 0x269BB8u);
    ctx->pc = 0x269BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269BB0u;
    // 0x269bb4: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x269BB0u, 0x269BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269BB8u;
label_269bb8:
    // 0x269bb8: 0xc088ee6  jal         func_223B98
label_269bbc:
    if (ctx->pc == 0x269BBCu) {
        ctx->pc = 0x269BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BB8u;
        // 0x269bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269BC0u;
        goto label_269bc0;
    }
    ctx->pc = 0x269BB8u;
    SET_GPR_U32(ctx, 31, 0x269BC0u);
    ctx->pc = 0x269BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269BB8u;
    // 0x269bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x269BB8u, 0x269BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269BC0u;
label_269bc0:
    // 0x269bc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_269bc4:
    if (ctx->pc == 0x269BC4u) {
        ctx->pc = 0x269BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BC0u;
        // 0x269bc4: 0x241400c3  addiu       $s4, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269BC8u;
        goto label_269bc8;
    }
    ctx->pc = 0x269BC0u;
    {
        const bool branch_taken_0x269bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BC0u;
        // 0x269bc4: 0x241400c3  addiu       $s4, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bc0) {
            ctx->pc = 0x269BDCu;
            goto label_269bdc;
        }
    }
    ctx->pc = 0x269BC8u;
label_269bc8:
    // 0x269bc8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x269bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_269bcc:
    // 0x269bcc: 0x946200be  lhu         $v0, 0xBE($v1)
    ctx->pc = 0x269bccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 190)));
label_269bd0:
    // 0x269bd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x269bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_269bd4:
    // 0x269bd4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_269bd8:
    if (ctx->pc == 0x269BD8u) {
        ctx->pc = 0x269BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BD4u;
        // 0x269bd8: 0xa46200be  sh          $v0, 0xBE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269BDCu;
        goto label_269bdc;
    }
    ctx->pc = 0x269BD4u;
    {
        const bool branch_taken_0x269bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BD4u;
        // 0x269bd8: 0xa46200be  sh          $v0, 0xBE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bd4) {
            ctx->pc = 0x269C8Cu;
            goto label_269c8c;
        }
    }
    ctx->pc = 0x269BDCu;
label_269bdc:
    // 0x269bdc: 0xc088edc  jal         func_223B70
label_269be0:
    if (ctx->pc == 0x269BE0u) {
        ctx->pc = 0x269BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BDCu;
        // 0x269be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269BE4u;
        goto label_269be4;
    }
    ctx->pc = 0x269BDCu;
    SET_GPR_U32(ctx, 31, 0x269BE4u);
    ctx->pc = 0x269BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269BDCu;
    // 0x269be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x269BDCu, 0x269BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269BE4u;
label_269be4:
    // 0x269be4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_269be8:
    if (ctx->pc == 0x269BE8u) {
        ctx->pc = 0x269BECu;
        goto label_269bec;
    }
    ctx->pc = 0x269BE4u;
    {
        const bool branch_taken_0x269be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269be4) {
            ctx->pc = 0x269C44u;
            goto label_269c44;
        }
    }
    ctx->pc = 0x269BECu;
label_269bec:
    // 0x269bec: 0xc08a200  jal         func_228800
label_269bf0:
    if (ctx->pc == 0x269BF0u) {
        ctx->pc = 0x269BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BECu;
        // 0x269bf0: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269BF4u;
        goto label_269bf4;
    }
    ctx->pc = 0x269BECu;
    SET_GPR_U32(ctx, 31, 0x269BF4u);
    ctx->pc = 0x269BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269BECu;
    // 0x269bf0: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x269BECu, 0x269BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269BF4u;
label_269bf4:
    // 0x269bf4: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x269bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_269bf8:
    // 0x269bf8: 0x38620006  xori        $v0, $v1, 0x6
    ctx->pc = 0x269bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_269bfc:
    // 0x269bfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_269c00:
    if (ctx->pc == 0x269C00u) {
        ctx->pc = 0x269C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BFCu;
        // 0x269c00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269C04u;
        goto label_269c04;
    }
    ctx->pc = 0x269BFCu;
    {
        const bool branch_taken_0x269bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BFCu;
        // 0x269c00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bfc) {
            ctx->pc = 0x269C0Cu;
            goto label_269c0c;
        }
    }
    ctx->pc = 0x269C04u;
label_269c04:
    // 0x269c04: 0x38620007  xori        $v0, $v1, 0x7
    ctx->pc = 0x269c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_269c08:
    // 0x269c08: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x269c08u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_269c0c:
    // 0x269c0c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_269c10:
    if (ctx->pc == 0x269C10u) {
        ctx->pc = 0x269C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C0Cu;
        // 0x269c10: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269C14u;
        goto label_269c14;
    }
    ctx->pc = 0x269C0Cu;
    {
        const bool branch_taken_0x269c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C0Cu;
        // 0x269c10: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c0c) {
            ctx->pc = 0x269C3Cu;
            goto label_269c3c;
        }
    }
    ctx->pc = 0x269C14u;
label_269c14:
    // 0x269c14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x269c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_269c18:
    // 0x269c18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269c1c:
    // 0x269c1c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x269c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269c20:
    // 0x269c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269c24:
    // 0x269c24: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x269c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_269c28:
    // 0x269c28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x269c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269c2c:
    // 0x269c2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x269c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269c30:
    // 0x269c30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x269c30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269c34:
    // 0x269c34: 0xc088178  jal         func_2205E0
label_269c38:
    if (ctx->pc == 0x269C38u) {
        ctx->pc = 0x269C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C34u;
        // 0x269c38: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269C3Cu;
        goto label_269c3c;
    }
    ctx->pc = 0x269C34u;
    SET_GPR_U32(ctx, 31, 0x269C3Cu);
    ctx->pc = 0x269C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269C34u;
    // 0x269c38: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x269C34u, 0x269C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C3Cu;
label_269c3c:
    // 0x269c3c: 0x10000013  b           . + 4 + (0x13 << 2)
label_269c40:
    if (ctx->pc == 0x269C40u) {
        ctx->pc = 0x269C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C3Cu;
        // 0x269c40: 0x24140141  addiu       $s4, $zero, 0x141 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269C44u;
        goto label_269c44;
    }
    ctx->pc = 0x269C3Cu;
    {
        const bool branch_taken_0x269c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C3Cu;
        // 0x269c40: 0x24140141  addiu       $s4, $zero, 0x141 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c3c) {
            ctx->pc = 0x269C8Cu;
            goto label_269c8c;
        }
    }
    ctx->pc = 0x269C44u;
label_269c44:
    // 0x269c44: 0xc089f66  jal         func_227D98
label_269c48:
    if (ctx->pc == 0x269C48u) {
        ctx->pc = 0x269C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C44u;
        // 0x269c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269C4Cu;
        goto label_269c4c;
    }
    ctx->pc = 0x269C44u;
    SET_GPR_U32(ctx, 31, 0x269C4Cu);
    ctx->pc = 0x269C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269C44u;
    // 0x269c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x269C44u, 0x269C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C4Cu;
label_269c4c:
    // 0x269c4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_269c50:
    if (ctx->pc == 0x269C50u) {
        ctx->pc = 0x269C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C4Cu;
        // 0x269c50: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269C54u;
        goto label_269c54;
    }
    ctx->pc = 0x269C4Cu;
    {
        const bool branch_taken_0x269c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C4Cu;
        // 0x269c50: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c4c) {
            ctx->pc = 0x269C5Cu;
            goto label_269c5c;
        }
    }
    ctx->pc = 0x269C54u;
label_269c54:
    // 0x269c54: 0x10000052  b           . + 4 + (0x52 << 2)
label_269c58:
    if (ctx->pc == 0x269C58u) {
        ctx->pc = 0x269C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C54u;
        // 0x269c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269C5Cu;
        goto label_269c5c;
    }
    ctx->pc = 0x269C54u;
    {
        const bool branch_taken_0x269c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C54u;
        // 0x269c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c54) {
            ctx->pc = 0x269DA0u;
            goto label_269da0;
        }
    }
    ctx->pc = 0x269C5Cu;
label_269c5c:
    // 0x269c5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x269c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_269c60:
    // 0x269c60: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x269c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_269c64:
    // 0x269c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269c68:
    // 0x269c68: 0x8c660794  lw          $a2, 0x794($v1)
    ctx->pc = 0x269c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1940)));
label_269c6c:
    // 0x269c6c: 0x241400ca  addiu       $s4, $zero, 0xCA
    ctx->pc = 0x269c6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_269c70:
    // 0x269c70: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x269c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_269c74:
    // 0x269c74: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x269c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_269c78:
    // 0x269c78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x269c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_269c7c:
    // 0x269c7c: 0xc089bfc  jal         func_226FF0
label_269c80:
    if (ctx->pc == 0x269C80u) {
        ctx->pc = 0x269C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C7Cu;
        // 0x269c80: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269C84u;
        goto label_269c84;
    }
    ctx->pc = 0x269C7Cu;
    SET_GPR_U32(ctx, 31, 0x269C84u);
    ctx->pc = 0x269C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269C7Cu;
    // 0x269c80: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x269C7Cu, 0x269C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C84u;
label_269c84:
    // 0x269c84: 0x240300cb  addiu       $v1, $zero, 0xCB
    ctx->pc = 0x269c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_269c88:
    // 0x269c88: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x269c88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_269c8c:
    // 0x269c8c: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x269c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_269c90:
    // 0x269c90: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x269c90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_269c94:
    // 0x269c94: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x269c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_269c98:
    // 0x269c98: 0xc041532  jal         func_1054C8
label_269c9c:
    if (ctx->pc == 0x269C9Cu) {
        ctx->pc = 0x269C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C98u;
        // 0x269c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269CA0u;
        goto label_269ca0;
    }
    ctx->pc = 0x269C98u;
    SET_GPR_U32(ctx, 31, 0x269CA0u);
    ctx->pc = 0x269C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269C98u;
    // 0x269c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269C98u, 0x269CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269CA0u;
label_269ca0:
    // 0x269ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269ca4:
    // 0x269ca4: 0xc041532  jal         func_1054C8
label_269ca8:
    if (ctx->pc == 0x269CA8u) {
        ctx->pc = 0x269CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CA4u;
        // 0x269ca8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269CACu;
        goto label_269cac;
    }
    ctx->pc = 0x269CA4u;
    SET_GPR_U32(ctx, 31, 0x269CACu);
    ctx->pc = 0x269CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269CA4u;
    // 0x269ca8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269CA4u, 0x269CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269CACu;
label_269cac:
    // 0x269cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269cb0:
    // 0x269cb0: 0xc041532  jal         func_1054C8
label_269cb4:
    if (ctx->pc == 0x269CB4u) {
        ctx->pc = 0x269CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CB0u;
        // 0x269cb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269CB8u;
        goto label_269cb8;
    }
    ctx->pc = 0x269CB0u;
    SET_GPR_U32(ctx, 31, 0x269CB8u);
    ctx->pc = 0x269CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269CB0u;
    // 0x269cb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269CB0u, 0x269CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269CB8u;
label_269cb8:
    // 0x269cb8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_269cbc:
    if (ctx->pc == 0x269CBCu) {
        ctx->pc = 0x269CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CB8u;
        // 0x269cbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269CC0u;
        goto label_269cc0;
    }
    ctx->pc = 0x269CB8u;
    {
        const bool branch_taken_0x269cb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CB8u;
        // 0x269cbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cb8) {
            ctx->pc = 0x269CE0u;
            goto label_269ce0;
        }
    }
    ctx->pc = 0x269CC0u;
label_269cc0:
    // 0x269cc0: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x269cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_269cc4:
    // 0x269cc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x269cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_269cc8:
    // 0x269cc8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x269cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269ccc:
    // 0x269ccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269cd0:
    // 0x269cd0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x269cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_269cd4:
    // 0x269cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x269cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269cd8:
    // 0x269cd8: 0xc04159e  jal         func_105678
label_269cdc:
    if (ctx->pc == 0x269CDCu) {
        ctx->pc = 0x269CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CD8u;
        // 0x269cdc: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269CE0u;
        goto label_269ce0;
    }
    ctx->pc = 0x269CD8u;
    SET_GPR_U32(ctx, 31, 0x269CE0u);
    ctx->pc = 0x269CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269CD8u;
    // 0x269cdc: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x269CD8u, 0x269CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269CE0u;
label_269ce0:
    // 0x269ce0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x269ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_269ce4:
    // 0x269ce4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_269ce8:
    if (ctx->pc == 0x269CE8u) {
        ctx->pc = 0x269CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CE4u;
        // 0x269ce8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269CECu;
        goto label_269cec;
    }
    ctx->pc = 0x269CE4u;
    {
        const bool branch_taken_0x269ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CE4u;
        // 0x269ce8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ce4) {
            ctx->pc = 0x269D28u;
            goto label_269d28;
        }
    }
    ctx->pc = 0x269CECu;
label_269cec:
    // 0x269cec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x269cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_269cf0:
    // 0x269cf0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x269cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_269cf4:
    // 0x269cf4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x269cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_269cf8:
    // 0x269cf8: 0x40f809  jalr        $v0
label_269cfc:
    if (ctx->pc == 0x269CFCu) {
        ctx->pc = 0x269CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CF8u;
        // 0x269cfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D00u;
        goto label_269d00;
    }
    ctx->pc = 0x269CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269D00u);
        ctx->pc = 0x269CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CF8u;
        // 0x269cfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269CF8u, 0x269D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269D00u;
label_269d00:
    // 0x269d00: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x269d00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_269d04:
    // 0x269d04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x269d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269d08:
    // 0x269d08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x269d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269d0c:
    // 0x269d0c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x269d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269d10:
    // 0x269d10: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x269d10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269d14:
    // 0x269d14: 0x254aa1f0  addiu       $t2, $t2, -0x5E10
    ctx->pc = 0x269d14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943216));
label_269d18:
    // 0x269d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269d1c:
    // 0x269d1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x269d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_269d20:
    // 0x269d20: 0xc041664  jal         func_105990
label_269d24:
    if (ctx->pc == 0x269D24u) {
        ctx->pc = 0x269D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D20u;
        // 0x269d24: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D28u;
        goto label_269d28;
    }
    ctx->pc = 0x269D20u;
    SET_GPR_U32(ctx, 31, 0x269D28u);
    ctx->pc = 0x269D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D20u;
    // 0x269d24: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x269D20u, 0x269D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D28u;
label_269d28:
    // 0x269d28: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_269d2c:
    if (ctx->pc == 0x269D2Cu) {
        ctx->pc = 0x269D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D28u;
        // 0x269d2c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D30u;
        goto label_269d30;
    }
    ctx->pc = 0x269D28u;
    {
        const bool branch_taken_0x269d28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D28u;
        // 0x269d2c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d28) {
            ctx->pc = 0x269D50u;
            goto label_269d50;
        }
    }
    ctx->pc = 0x269D30u;
label_269d30:
    // 0x269d30: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x269d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_269d34:
    // 0x269d34: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x269d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269d38:
    // 0x269d38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x269d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_269d3c:
    // 0x269d3c: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x269d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_269d40:
    // 0x269d40: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x269d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_269d44:
    // 0x269d44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269d48:
    // 0x269d48: 0xc041b20  jal         func_106C80
label_269d4c:
    if (ctx->pc == 0x269D4Cu) {
        ctx->pc = 0x269D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D48u;
        // 0x269d4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D50u;
        goto label_269d50;
    }
    ctx->pc = 0x269D48u;
    SET_GPR_U32(ctx, 31, 0x269D50u);
    ctx->pc = 0x269D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D48u;
    // 0x269d4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x269D48u, 0x269D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D50u;
label_269d50:
    // 0x269d50: 0xc05d484  jal         func_175210
label_269d54:
    if (ctx->pc == 0x269D54u) {
        ctx->pc = 0x269D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D50u;
        // 0x269d54: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D58u;
        goto label_269d58;
    }
    ctx->pc = 0x269D50u;
    SET_GPR_U32(ctx, 31, 0x269D58u);
    ctx->pc = 0x269D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D50u;
    // 0x269d54: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x269D50u, 0x269D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D58u;
label_269d58:
    // 0x269d58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x269d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_269d5c:
    // 0x269d5c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x269d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_269d60:
    // 0x269d60: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x269d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_269d64:
    // 0x269d64: 0xa0f809  jalr        $a1
label_269d68:
    if (ctx->pc == 0x269D68u) {
        ctx->pc = 0x269D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D64u;
        // 0x269d68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D6Cu;
        goto label_269d6c;
    }
    ctx->pc = 0x269D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x269D6Cu);
        ctx->pc = 0x269D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D64u;
        // 0x269d68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269D64u, 0x269D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269D6Cu;
label_269d6c:
    // 0x269d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269d70:
    // 0x269d70: 0xc087016  jal         func_21C058
label_269d74:
    if (ctx->pc == 0x269D74u) {
        ctx->pc = 0x269D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D70u;
        // 0x269d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D78u;
        goto label_269d78;
    }
    ctx->pc = 0x269D70u;
    SET_GPR_U32(ctx, 31, 0x269D78u);
    ctx->pc = 0x269D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D70u;
    // 0x269d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x269D70u, 0x269D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D78u;
label_269d78:
    // 0x269d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x269d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269d7c:
    // 0x269d7c: 0xc05d53a  jal         func_1754E8
label_269d80:
    if (ctx->pc == 0x269D80u) {
        ctx->pc = 0x269D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D7Cu;
        // 0x269d80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D84u;
        goto label_269d84;
    }
    ctx->pc = 0x269D7Cu;
    SET_GPR_U32(ctx, 31, 0x269D84u);
    ctx->pc = 0x269D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D7Cu;
    // 0x269d80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x269D7Cu, 0x269D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D84u;
label_269d84:
    // 0x269d84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x269d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_269d88:
    // 0x269d88: 0xc05d4f6  jal         func_1753D8
label_269d8c:
    if (ctx->pc == 0x269D8Cu) {
        ctx->pc = 0x269D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D88u;
        // 0x269d8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D90u;
        goto label_269d90;
    }
    ctx->pc = 0x269D88u;
    SET_GPR_U32(ctx, 31, 0x269D90u);
    ctx->pc = 0x269D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D88u;
    // 0x269d8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x269D88u, 0x269D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D90u;
label_269d90:
    // 0x269d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269d94:
    // 0x269d94: 0xc089990  jal         func_226640
label_269d98:
    if (ctx->pc == 0x269D98u) {
        ctx->pc = 0x269D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D94u;
        // 0x269d98: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D9Cu;
        goto label_269d9c;
    }
    ctx->pc = 0x269D94u;
    SET_GPR_U32(ctx, 31, 0x269D9Cu);
    ctx->pc = 0x269D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D94u;
    // 0x269d98: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x269D94u, 0x269D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D9Cu;
label_269d9c:
    // 0x269d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269da0:
    // 0x269da0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x269da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_269da4:
    // 0x269da4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x269da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_269da8:
    // 0x269da8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x269da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_269dac:
    // 0x269dac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x269dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_269db0:
    // 0x269db0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x269db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_269db4:
    // 0x269db4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x269db4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_269db8:
    // 0x269db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269dbc:
    // 0x269dbc: 0x3e00008  jr          $ra
label_269dc0:
    if (ctx->pc == 0x269DC0u) {
        ctx->pc = 0x269DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DBCu;
        // 0x269dc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269DC4u;
        goto label_269dc4;
    }
    ctx->pc = 0x269DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DBCu;
        // 0x269dc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269DC4u;
label_269dc4:
    // 0x269dc4: 0x0  nop
    ctx->pc = 0x269dc4u;
    // NOP
    ctx->pc = 0x269dc8u;
}
