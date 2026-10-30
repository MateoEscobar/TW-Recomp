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

// Function: sub_00177B80
// Address: 0x177b80 - 0x177d50
void sub_00177B80_0x177b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177B80_0x177b80");
#endif

    switch (ctx->pc) {
        case 0x177b80u: goto label_177b80;
        case 0x177b84u: goto label_177b84;
        case 0x177b88u: goto label_177b88;
        case 0x177b8cu: goto label_177b8c;
        case 0x177b90u: goto label_177b90;
        case 0x177b94u: goto label_177b94;
        case 0x177b98u: goto label_177b98;
        case 0x177b9cu: goto label_177b9c;
        case 0x177ba0u: goto label_177ba0;
        case 0x177ba4u: goto label_177ba4;
        case 0x177ba8u: goto label_177ba8;
        case 0x177bacu: goto label_177bac;
        case 0x177bb0u: goto label_177bb0;
        case 0x177bb4u: goto label_177bb4;
        case 0x177bb8u: goto label_177bb8;
        case 0x177bbcu: goto label_177bbc;
        case 0x177bc0u: goto label_177bc0;
        case 0x177bc4u: goto label_177bc4;
        case 0x177bc8u: goto label_177bc8;
        case 0x177bccu: goto label_177bcc;
        case 0x177bd0u: goto label_177bd0;
        case 0x177bd4u: goto label_177bd4;
        case 0x177bd8u: goto label_177bd8;
        case 0x177bdcu: goto label_177bdc;
        case 0x177be0u: goto label_177be0;
        case 0x177be4u: goto label_177be4;
        case 0x177be8u: goto label_177be8;
        case 0x177becu: goto label_177bec;
        case 0x177bf0u: goto label_177bf0;
        case 0x177bf4u: goto label_177bf4;
        case 0x177bf8u: goto label_177bf8;
        case 0x177bfcu: goto label_177bfc;
        case 0x177c00u: goto label_177c00;
        case 0x177c04u: goto label_177c04;
        case 0x177c08u: goto label_177c08;
        case 0x177c0cu: goto label_177c0c;
        case 0x177c10u: goto label_177c10;
        case 0x177c14u: goto label_177c14;
        case 0x177c18u: goto label_177c18;
        case 0x177c1cu: goto label_177c1c;
        case 0x177c20u: goto label_177c20;
        case 0x177c24u: goto label_177c24;
        case 0x177c28u: goto label_177c28;
        case 0x177c2cu: goto label_177c2c;
        case 0x177c30u: goto label_177c30;
        case 0x177c34u: goto label_177c34;
        case 0x177c38u: goto label_177c38;
        case 0x177c3cu: goto label_177c3c;
        case 0x177c40u: goto label_177c40;
        case 0x177c44u: goto label_177c44;
        case 0x177c48u: goto label_177c48;
        case 0x177c4cu: goto label_177c4c;
        case 0x177c50u: goto label_177c50;
        case 0x177c54u: goto label_177c54;
        case 0x177c58u: goto label_177c58;
        case 0x177c5cu: goto label_177c5c;
        case 0x177c60u: goto label_177c60;
        case 0x177c64u: goto label_177c64;
        case 0x177c68u: goto label_177c68;
        case 0x177c6cu: goto label_177c6c;
        case 0x177c70u: goto label_177c70;
        case 0x177c74u: goto label_177c74;
        case 0x177c78u: goto label_177c78;
        case 0x177c7cu: goto label_177c7c;
        case 0x177c80u: goto label_177c80;
        case 0x177c84u: goto label_177c84;
        case 0x177c88u: goto label_177c88;
        case 0x177c8cu: goto label_177c8c;
        case 0x177c90u: goto label_177c90;
        case 0x177c94u: goto label_177c94;
        case 0x177c98u: goto label_177c98;
        case 0x177c9cu: goto label_177c9c;
        case 0x177ca0u: goto label_177ca0;
        case 0x177ca4u: goto label_177ca4;
        case 0x177ca8u: goto label_177ca8;
        case 0x177cacu: goto label_177cac;
        case 0x177cb0u: goto label_177cb0;
        case 0x177cb4u: goto label_177cb4;
        case 0x177cb8u: goto label_177cb8;
        case 0x177cbcu: goto label_177cbc;
        case 0x177cc0u: goto label_177cc0;
        case 0x177cc4u: goto label_177cc4;
        case 0x177cc8u: goto label_177cc8;
        case 0x177cccu: goto label_177ccc;
        case 0x177cd0u: goto label_177cd0;
        case 0x177cd4u: goto label_177cd4;
        case 0x177cd8u: goto label_177cd8;
        case 0x177cdcu: goto label_177cdc;
        case 0x177ce0u: goto label_177ce0;
        case 0x177ce4u: goto label_177ce4;
        case 0x177ce8u: goto label_177ce8;
        case 0x177cecu: goto label_177cec;
        case 0x177cf0u: goto label_177cf0;
        case 0x177cf4u: goto label_177cf4;
        case 0x177cf8u: goto label_177cf8;
        case 0x177cfcu: goto label_177cfc;
        case 0x177d00u: goto label_177d00;
        case 0x177d04u: goto label_177d04;
        case 0x177d08u: goto label_177d08;
        case 0x177d0cu: goto label_177d0c;
        case 0x177d10u: goto label_177d10;
        case 0x177d14u: goto label_177d14;
        case 0x177d18u: goto label_177d18;
        case 0x177d1cu: goto label_177d1c;
        case 0x177d20u: goto label_177d20;
        case 0x177d24u: goto label_177d24;
        case 0x177d28u: goto label_177d28;
        case 0x177d2cu: goto label_177d2c;
        case 0x177d30u: goto label_177d30;
        case 0x177d34u: goto label_177d34;
        case 0x177d38u: goto label_177d38;
        case 0x177d3cu: goto label_177d3c;
        case 0x177d40u: goto label_177d40;
        case 0x177d44u: goto label_177d44;
        case 0x177d48u: goto label_177d48;
        case 0x177d4cu: goto label_177d4c;
        default: break;
    }

    ctx->pc = 0x177b80u;

label_177b80:
    // 0x177b80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x177b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_177b84:
    // 0x177b84: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x177b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_177b88:
    // 0x177b88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x177b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_177b8c:
    // 0x177b8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x177b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_177b90:
    // 0x177b90: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x177b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_177b94:
    // 0x177b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x177b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177b98:
    // 0x177b98: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x177b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_177b9c:
    // 0x177b9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x177b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_177ba0:
    // 0x177ba0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x177ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_177ba4:
    // 0x177ba4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x177ba4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177ba8:
    // 0x177ba8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x177ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_177bac:
    // 0x177bac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x177bacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177bb0:
    // 0x177bb0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x177bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_177bb4:
    // 0x177bb4: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_177bb8:
    if (ctx->pc == 0x177BB8u) {
        ctx->pc = 0x177BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BB4u;
        // 0x177bb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177BBCu;
        goto label_177bbc;
    }
    ctx->pc = 0x177BB4u;
    {
        const bool branch_taken_0x177bb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BB4u;
        // 0x177bb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bb4) {
            ctx->pc = 0x177BD4u;
            goto label_177bd4;
        }
    }
    ctx->pc = 0x177BBCu;
label_177bbc:
    // 0x177bbc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x177bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_177bc0:
    // 0x177bc0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x177bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_177bc4:
    // 0x177bc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x177bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177bc8:
    // 0x177bc8: 0xc05e0f4  jal         func_1783D0
label_177bcc:
    if (ctx->pc == 0x177BCCu) {
        ctx->pc = 0x177BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BC8u;
        // 0x177bcc: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177BD0u;
        goto label_177bd0;
    }
    ctx->pc = 0x177BC8u;
    SET_GPR_U32(ctx, 31, 0x177BD0u);
    ctx->pc = 0x177BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BC8u;
    // 0x177bcc: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1783D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1783D0u, 0x177BC8u, 0x177BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BD0u;
label_177bd0:
    // 0x177bd0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x177bd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177bd4:
    // 0x177bd4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x177bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_177bd8:
    // 0x177bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_177bdc:
    // 0x177bdc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x177bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_177be0:
    // 0x177be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x177be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177be4:
    // 0x177be4: 0xc05ba3c  jal         func_16E8F0
label_177be8:
    if (ctx->pc == 0x177BE8u) {
        ctx->pc = 0x177BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BE4u;
        // 0x177be8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177BECu;
        goto label_177bec;
    }
    ctx->pc = 0x177BE4u;
    SET_GPR_U32(ctx, 31, 0x177BECu);
    ctx->pc = 0x177BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BE4u;
    // 0x177be8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E8F0u, 0x177BE4u, 0x177BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BECu;
label_177bec:
    // 0x177bec: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_177bf0:
    if (ctx->pc == 0x177BF0u) {
        ctx->pc = 0x177BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BECu;
        // 0x177bf0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177BF4u;
        goto label_177bf4;
    }
    ctx->pc = 0x177BECu;
    {
        const bool branch_taken_0x177bec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BECu;
        // 0x177bf0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bec) {
            ctx->pc = 0x177C10u;
            goto label_177c10;
        }
    }
    ctx->pc = 0x177BF4u;
label_177bf4:
    // 0x177bf4: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x177bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_177bf8:
    // 0x177bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_177bfc:
    // 0x177bfc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x177bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_177c00:
    // 0x177c00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x177c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177c04:
    // 0x177c04: 0xc063a78  jal         func_18E9E0
label_177c08:
    if (ctx->pc == 0x177C08u) {
        ctx->pc = 0x177C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C04u;
        // 0x177c08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177C0Cu;
        goto label_177c0c;
    }
    ctx->pc = 0x177C04u;
    SET_GPR_U32(ctx, 31, 0x177C0Cu);
    ctx->pc = 0x177C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C04u;
    // 0x177c08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9E0u, 0x177C04u, 0x177C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C0Cu;
label_177c0c:
    // 0x177c0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x177c0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177c10:
    // 0x177c10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x177c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_177c14:
    // 0x177c14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x177c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_177c18:
    // 0x177c18: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x177c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_177c1c:
    // 0x177c1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177c20:
    // 0x177c20: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x177c20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_177c24:
    // 0x177c24: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x177c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_177c28:
    // 0x177c28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x177c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_177c2c:
    // 0x177c2c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x177c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_177c30:
    // 0x177c30: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x177c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_177c34:
    // 0x177c34: 0x60f809  jalr        $v1
label_177c38:
    if (ctx->pc == 0x177C38u) {
        ctx->pc = 0x177C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C34u;
        // 0x177c38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177C3Cu;
        goto label_177c3c;
    }
    ctx->pc = 0x177C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177C3Cu);
        ctx->pc = 0x177C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C34u;
        // 0x177c38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177C34u, 0x177C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177C3Cu;
label_177c3c:
    // 0x177c3c: 0x16400018  bnez        $s2, . + 4 + (0x18 << 2)
label_177c40:
    if (ctx->pc == 0x177C40u) {
        ctx->pc = 0x177C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C3Cu;
        // 0x177c40: 0x8e2b27e4  lw          $t3, 0x27E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177C44u;
        goto label_177c44;
    }
    ctx->pc = 0x177C3Cu;
    {
        const bool branch_taken_0x177c3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x177C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C3Cu;
        // 0x177c40: 0x8e2b27e4  lw          $t3, 0x27E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c3c) {
            ctx->pc = 0x177CA0u;
            goto label_177ca0;
        }
    }
    ctx->pc = 0x177C44u;
label_177c44:
    // 0x177c44: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x177c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_177c48:
    // 0x177c48: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x177c48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_177c4c:
    // 0x177c4c: 0x24a51d80  addiu       $a1, $a1, 0x1D80
    ctx->pc = 0x177c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7552));
label_177c50:
    // 0x177c50: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_177c54:
    // 0x177c54: 0x25081d40  addiu       $t0, $t0, 0x1D40
    ctx->pc = 0x177c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7488));
label_177c58:
    // 0x177c58: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
label_177c5c:
    // 0x177c5c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x177c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_177c60:
    // 0x177c60: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x177c60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_177c64:
    // 0x177c64: 0x240907c9  addiu       $t1, $zero, 0x7C9
    ctx->pc = 0x177c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1993));
label_177c68:
    // 0x177c68: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x177c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_177c6c:
    // 0x177c6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x177c6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177c70:
    // 0x177c70: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_177c74:
    // 0x177c74: 0x40f809  jalr        $v0
label_177c78:
    if (ctx->pc == 0x177C78u) {
        ctx->pc = 0x177C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C74u;
        // 0x177c78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177C7Cu;
        goto label_177c7c;
    }
    ctx->pc = 0x177C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177C7Cu);
        ctx->pc = 0x177C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C74u;
        // 0x177c78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177C74u, 0x177C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177C7Cu;
label_177c7c:
    // 0x177c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177c80:
    // 0x177c80: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_177c84:
    if (ctx->pc == 0x177C84u) {
        ctx->pc = 0x177C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C80u;
        // 0x177c84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177C88u;
        goto label_177c88;
    }
    ctx->pc = 0x177C80u;
    {
        const bool branch_taken_0x177c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C80u;
        // 0x177c84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c80) {
            ctx->pc = 0x177CF4u;
            goto label_177cf4;
        }
    }
    ctx->pc = 0x177C88u;
label_177c88:
    // 0x177c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177c8c:
    // 0x177c8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x177c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_177c90:
    // 0x177c90: 0xc05d340  jal         func_174D00
label_177c94:
    if (ctx->pc == 0x177C94u) {
        ctx->pc = 0x177C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C90u;
        // 0x177c94: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177C98u;
        goto label_177c98;
    }
    ctx->pc = 0x177C90u;
    SET_GPR_U32(ctx, 31, 0x177C98u);
    ctx->pc = 0x177C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C90u;
    // 0x177c94: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174D00u, 0x177C90u, 0x177C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C98u;
label_177c98:
    // 0x177c98: 0x10000016  b           . + 4 + (0x16 << 2)
label_177c9c:
    if (ctx->pc == 0x177C9Cu) {
        ctx->pc = 0x177C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C98u;
        // 0x177c9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177CA0u;
        goto label_177ca0;
    }
    ctx->pc = 0x177C98u;
    {
        const bool branch_taken_0x177c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C98u;
        // 0x177c9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c98) {
            ctx->pc = 0x177CF4u;
            goto label_177cf4;
        }
    }
    ctx->pc = 0x177CA0u;
label_177ca0:
    // 0x177ca0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x177ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_177ca4:
    // 0x177ca4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x177ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_177ca8:
    // 0x177ca8: 0x24a51d80  addiu       $a1, $a1, 0x1D80
    ctx->pc = 0x177ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7552));
label_177cac:
    // 0x177cac: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x177cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_177cb0:
    // 0x177cb0: 0x25081d40  addiu       $t0, $t0, 0x1D40
    ctx->pc = 0x177cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7488));
label_177cb4:
    // 0x177cb4: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x177cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
label_177cb8:
    // 0x177cb8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x177cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_177cbc:
    // 0x177cbc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x177cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_177cc0:
    // 0x177cc0: 0x240907cd  addiu       $t1, $zero, 0x7CD
    ctx->pc = 0x177cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1997));
label_177cc4:
    // 0x177cc4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x177cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_177cc8:
    // 0x177cc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x177cc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177ccc:
    // 0x177ccc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x177cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_177cd0:
    // 0x177cd0: 0x40f809  jalr        $v0
label_177cd4:
    if (ctx->pc == 0x177CD4u) {
        ctx->pc = 0x177CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CD0u;
        // 0x177cd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177CD8u;
        goto label_177cd8;
    }
    ctx->pc = 0x177CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177CD8u);
        ctx->pc = 0x177CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CD0u;
        // 0x177cd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177CD0u, 0x177CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177CD8u;
label_177cd8:
    // 0x177cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177cdc:
    // 0x177cdc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_177ce0:
    if (ctx->pc == 0x177CE0u) {
        ctx->pc = 0x177CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CDCu;
        // 0x177ce0: 0x8e2627e4  lw          $a2, 0x27E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177CE4u;
        goto label_177ce4;
    }
    ctx->pc = 0x177CDCu;
    {
        const bool branch_taken_0x177cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CDCu;
        // 0x177ce0: 0x8e2627e4  lw          $a2, 0x27E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cdc) {
            ctx->pc = 0x177CF8u;
            goto label_177cf8;
        }
    }
    ctx->pc = 0x177CE4u;
label_177ce4:
    // 0x177ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177ce8:
    // 0x177ce8: 0xc05d39c  jal         func_174E70
label_177cec:
    if (ctx->pc == 0x177CECu) {
        ctx->pc = 0x177CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CE8u;
        // 0x177cec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177CF0u;
        goto label_177cf0;
    }
    ctx->pc = 0x177CE8u;
    SET_GPR_U32(ctx, 31, 0x177CF0u);
    ctx->pc = 0x177CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CE8u;
    // 0x177cec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E70u, 0x177CE8u, 0x177CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CF0u;
label_177cf0:
    // 0x177cf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177cf4:
    // 0x177cf4: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x177cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_177cf8:
    // 0x177cf8: 0x8ec5b9b8  lw          $a1, -0x4648($s6)
    ctx->pc = 0x177cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949304)));
label_177cfc:
    // 0x177cfc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x177cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_177d00:
    // 0x177d00: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x177d00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_177d04:
    // 0x177d04: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x177d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_177d08:
    // 0x177d08: 0x60f809  jalr        $v1
label_177d0c:
    if (ctx->pc == 0x177D0Cu) {
        ctx->pc = 0x177D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D08u;
        // 0x177d0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177D10u;
        goto label_177d10;
    }
    ctx->pc = 0x177D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177D10u);
        ctx->pc = 0x177D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D08u;
        // 0x177d0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177D08u, 0x177D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177D10u;
label_177d10:
    // 0x177d10: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x177d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_177d14:
    // 0x177d14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x177d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177d18:
    // 0x177d18: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x177d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_177d1c:
    // 0x177d1c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x177d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_177d20:
    // 0x177d20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x177d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_177d24:
    // 0x177d24: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x177d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_177d28:
    // 0x177d28: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x177d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_177d2c:
    // 0x177d2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x177d2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_177d30:
    // 0x177d30: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x177d30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177d34:
    // 0x177d34: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x177d34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177d38:
    // 0x177d38: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x177d38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177d3c:
    // 0x177d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177d40:
    // 0x177d40: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x177d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_177d44:
    // 0x177d44: 0x3e00008  jr          $ra
label_177d48:
    if (ctx->pc == 0x177D48u) {
        ctx->pc = 0x177D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D44u;
        // 0x177d48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177D4Cu;
        goto label_177d4c;
    }
    ctx->pc = 0x177D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D44u;
        // 0x177d48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177D4Cu;
label_177d4c:
    // 0x177d4c: 0x0  nop
    ctx->pc = 0x177d4cu;
    // NOP
    ctx->pc = 0x177d50u;
}
