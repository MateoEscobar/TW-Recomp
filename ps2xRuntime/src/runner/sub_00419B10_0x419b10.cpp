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

// Function: sub_00419B10
// Address: 0x419b10 - 0x419c68
void sub_00419B10_0x419b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419B10_0x419b10");
#endif

    switch (ctx->pc) {
        case 0x419b10u: goto label_419b10;
        case 0x419b14u: goto label_419b14;
        case 0x419b18u: goto label_419b18;
        case 0x419b1cu: goto label_419b1c;
        case 0x419b20u: goto label_419b20;
        case 0x419b24u: goto label_419b24;
        case 0x419b28u: goto label_419b28;
        case 0x419b2cu: goto label_419b2c;
        case 0x419b30u: goto label_419b30;
        case 0x419b34u: goto label_419b34;
        case 0x419b38u: goto label_419b38;
        case 0x419b3cu: goto label_419b3c;
        case 0x419b40u: goto label_419b40;
        case 0x419b44u: goto label_419b44;
        case 0x419b48u: goto label_419b48;
        case 0x419b4cu: goto label_419b4c;
        case 0x419b50u: goto label_419b50;
        case 0x419b54u: goto label_419b54;
        case 0x419b58u: goto label_419b58;
        case 0x419b5cu: goto label_419b5c;
        case 0x419b60u: goto label_419b60;
        case 0x419b64u: goto label_419b64;
        case 0x419b68u: goto label_419b68;
        case 0x419b6cu: goto label_419b6c;
        case 0x419b70u: goto label_419b70;
        case 0x419b74u: goto label_419b74;
        case 0x419b78u: goto label_419b78;
        case 0x419b7cu: goto label_419b7c;
        case 0x419b80u: goto label_419b80;
        case 0x419b84u: goto label_419b84;
        case 0x419b88u: goto label_419b88;
        case 0x419b8cu: goto label_419b8c;
        case 0x419b90u: goto label_419b90;
        case 0x419b94u: goto label_419b94;
        case 0x419b98u: goto label_419b98;
        case 0x419b9cu: goto label_419b9c;
        case 0x419ba0u: goto label_419ba0;
        case 0x419ba4u: goto label_419ba4;
        case 0x419ba8u: goto label_419ba8;
        case 0x419bacu: goto label_419bac;
        case 0x419bb0u: goto label_419bb0;
        case 0x419bb4u: goto label_419bb4;
        case 0x419bb8u: goto label_419bb8;
        case 0x419bbcu: goto label_419bbc;
        case 0x419bc0u: goto label_419bc0;
        case 0x419bc4u: goto label_419bc4;
        case 0x419bc8u: goto label_419bc8;
        case 0x419bccu: goto label_419bcc;
        case 0x419bd0u: goto label_419bd0;
        case 0x419bd4u: goto label_419bd4;
        case 0x419bd8u: goto label_419bd8;
        case 0x419bdcu: goto label_419bdc;
        case 0x419be0u: goto label_419be0;
        case 0x419be4u: goto label_419be4;
        case 0x419be8u: goto label_419be8;
        case 0x419becu: goto label_419bec;
        case 0x419bf0u: goto label_419bf0;
        case 0x419bf4u: goto label_419bf4;
        case 0x419bf8u: goto label_419bf8;
        case 0x419bfcu: goto label_419bfc;
        case 0x419c00u: goto label_419c00;
        case 0x419c04u: goto label_419c04;
        case 0x419c08u: goto label_419c08;
        case 0x419c0cu: goto label_419c0c;
        case 0x419c10u: goto label_419c10;
        case 0x419c14u: goto label_419c14;
        case 0x419c18u: goto label_419c18;
        case 0x419c1cu: goto label_419c1c;
        case 0x419c20u: goto label_419c20;
        case 0x419c24u: goto label_419c24;
        case 0x419c28u: goto label_419c28;
        case 0x419c2cu: goto label_419c2c;
        case 0x419c30u: goto label_419c30;
        case 0x419c34u: goto label_419c34;
        case 0x419c38u: goto label_419c38;
        case 0x419c3cu: goto label_419c3c;
        case 0x419c40u: goto label_419c40;
        case 0x419c44u: goto label_419c44;
        case 0x419c48u: goto label_419c48;
        case 0x419c4cu: goto label_419c4c;
        case 0x419c50u: goto label_419c50;
        case 0x419c54u: goto label_419c54;
        case 0x419c58u: goto label_419c58;
        case 0x419c5cu: goto label_419c5c;
        case 0x419c60u: goto label_419c60;
        case 0x419c64u: goto label_419c64;
        default: break;
    }

    ctx->pc = 0x419b10u;

label_419b10:
    // 0x419b10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x419b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_419b14:
    // 0x419b14: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x419b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_419b18:
    // 0x419b18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x419b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_419b1c:
    // 0x419b1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x419b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_419b20:
    // 0x419b20: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x419b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_419b24:
    // 0x419b24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x419b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_419b28:
    // 0x419b28: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x419b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_419b2c:
    // 0x419b2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x419b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_419b30:
    // 0x419b30: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x419b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_419b34:
    // 0x419b34: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x419b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_419b38:
    // 0x419b38: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x419b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_419b3c:
    // 0x419b3c: 0x1280003f  beqz        $s4, . + 4 + (0x3F << 2)
label_419b40:
    if (ctx->pc == 0x419B40u) {
        ctx->pc = 0x419B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B3Cu;
        // 0x419b40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B44u;
        goto label_419b44;
    }
    ctx->pc = 0x419B3Cu;
    {
        const bool branch_taken_0x419b3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x419B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B3Cu;
        // 0x419b40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419b3c) {
            ctx->pc = 0x419C3Cu;
            goto label_419c3c;
        }
    }
    ctx->pc = 0x419B44u;
label_419b44:
    // 0x419b44: 0x86500224  lh          $s0, 0x224($s2)
    ctx->pc = 0x419b44u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_419b48:
    // 0x419b48: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x419b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_419b4c:
    // 0x419b4c: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_419b50:
    if (ctx->pc == 0x419B50u) {
        ctx->pc = 0x419B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B4Cu;
        // 0x419b50: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B54u;
        goto label_419b54;
    }
    ctx->pc = 0x419B4Cu;
    {
        const bool branch_taken_0x419b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x419b4c) {
            ctx->pc = 0x419B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419B4Cu;
            // 0x419b50: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419C40u;
            goto label_419c40;
        }
    }
    ctx->pc = 0x419B54u;
label_419b54:
    // 0x419b54: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
label_419b58:
    if (ctx->pc == 0x419B58u) {
        ctx->pc = 0x419B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B54u;
        // 0x419b58: 0x270102a  slt         $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B5Cu;
        goto label_419b5c;
    }
    ctx->pc = 0x419B54u;
    {
        const bool branch_taken_0x419b54 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x419B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B54u;
        // 0x419b58: 0x270102a  slt         $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x419b54) {
            ctx->pc = 0x419B64u;
            goto label_419b64;
        }
    }
    ctx->pc = 0x419B5Cu;
label_419b5c:
    // 0x419b5c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_419b60:
    if (ctx->pc == 0x419B60u) {
        ctx->pc = 0x419B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B5Cu;
        // 0x419b60: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B64u;
        goto label_419b64;
    }
    ctx->pc = 0x419B5Cu;
    {
        const bool branch_taken_0x419b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x419B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B5Cu;
        // 0x419b60: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419b5c) {
            ctx->pc = 0x419BA0u;
            goto label_419ba0;
        }
    }
    ctx->pc = 0x419B64u;
label_419b64:
    // 0x419b64: 0xa29001b0  sb          $s0, 0x1B0($s4)
    ctx->pc = 0x419b64u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 432), (uint8_t)GPR_U32(ctx, 16));
label_419b68:
    // 0x419b68: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x419b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_419b6c:
    // 0x419b6c: 0x86500224  lh          $s0, 0x224($s2)
    ctx->pc = 0x419b6cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_419b70:
    // 0x419b70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x419b70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_419b74:
    // 0x419b74: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x419b74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_419b78:
    // 0x419b78: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x419b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_419b7c:
    // 0x419b7c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x419b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_419b80:
    // 0x419b80: 0x40f809  jalr        $v0
label_419b84:
    if (ctx->pc == 0x419B84u) {
        ctx->pc = 0x419B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B80u;
        // 0x419b84: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B88u;
        goto label_419b88;
    }
    ctx->pc = 0x419B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x419B88u);
        ctx->pc = 0x419B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B80u;
        // 0x419b84: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419B80u, 0x419B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x419B88u;
label_419b88:
    // 0x419b88: 0xae020228  sw          $v0, 0x228($s0)
    ctx->pc = 0x419b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
label_419b8c:
    // 0x419b8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x419b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_419b90:
    // 0x419b90: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x419b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_419b94:
    // 0x419b94: 0x86440224  lh          $a0, 0x224($s2)
    ctx->pc = 0x419b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_419b98:
    // 0x419b98: 0x10000022  b           . + 4 + (0x22 << 2)
label_419b9c:
    if (ctx->pc == 0x419B9Cu) {
        ctx->pc = 0x419B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B98u;
        // 0x419b9c: 0x822018  mult        $a0, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x419BA0u;
        goto label_419ba0;
    }
    ctx->pc = 0x419B98u;
    {
        const bool branch_taken_0x419b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B98u;
        // 0x419b9c: 0x822018  mult        $a0, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x419b98) {
            ctx->pc = 0x419C24u;
            goto label_419c24;
        }
    }
    ctx->pc = 0x419BA0u;
label_419ba0:
    // 0x419ba0: 0x13a880  sll         $s5, $s3, 2
    ctx->pc = 0x419ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_419ba4:
    // 0x419ba4: 0x24160030  addiu       $s6, $zero, 0x30
    ctx->pc = 0x419ba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_419ba8:
    // 0x419ba8: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x419ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_419bac:
    // 0x419bac: 0x0  nop
    ctx->pc = 0x419bacu;
    // NOP
label_419bb0:
    // 0x419bb0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x419bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_419bb4:
    // 0x419bb4: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x419bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_419bb8:
    // 0x419bb8: 0xc0e409a  jal         func_390268
label_419bbc:
    if (ctx->pc == 0x419BBCu) {
        ctx->pc = 0x419BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419BB8u;
        // 0x419bbc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419BC0u;
        goto label_419bc0;
    }
    ctx->pc = 0x419BB8u;
    SET_GPR_U32(ctx, 31, 0x419BC0u);
    ctx->pc = 0x419BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419BB8u;
    // 0x419bbc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x419BB8u, 0x419BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419BC0u;
label_419bc0:
    // 0x419bc0: 0x2362018  mult        $a0, $s1, $s6
    ctx->pc = 0x419bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_419bc4:
    // 0x419bc4: 0xa05101b0  sb          $s1, 0x1B0($v0)
    ctx->pc = 0x419bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 432), (uint8_t)GPR_U32(ctx, 17));
label_419bc8:
    // 0x419bc8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x419bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_419bcc:
    // 0x419bcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x419bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419bd0:
    // 0x419bd0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x419bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_419bd4:
    // 0x419bd4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x419bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419bd8:
    // 0x419bd8: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x419bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_419bdc:
    // 0x419bdc: 0x24845740  addiu       $a0, $a0, 0x5740
    ctx->pc = 0x419bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22336));
label_419be0:
    // 0x419be0: 0xac620228  sw          $v0, 0x228($v1)
    ctx->pc = 0x419be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 2));
label_419be4:
    // 0x419be4: 0xc063dec  jal         func_18F7B0
label_419be8:
    if (ctx->pc == 0x419BE8u) {
        ctx->pc = 0x419BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419BE4u;
        // 0x419be8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419BECu;
        goto label_419bec;
    }
    ctx->pc = 0x419BE4u;
    SET_GPR_U32(ctx, 31, 0x419BECu);
    ctx->pc = 0x419BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419BE4u;
    // 0x419be8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F7B0u, 0x419BE4u, 0x419BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419BECu;
label_419bec:
    // 0x419bec: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x419becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_419bf0:
    // 0x419bf0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_419bf4:
    if (ctx->pc == 0x419BF4u) {
        ctx->pc = 0x419BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419BF0u;
        // 0x419bf4: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419BF8u;
        goto label_419bf8;
    }
    ctx->pc = 0x419BF0u;
    {
        const bool branch_taken_0x419bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x419BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419BF0u;
        // 0x419bf4: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419bf0) {
            ctx->pc = 0x419BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419bb0;
        }
    }
    ctx->pc = 0x419BF8u;
label_419bf8:
    // 0x419bf8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x419bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_419bfc:
    // 0x419bfc: 0x2b28021  addu        $s0, $s5, $s2
    ctx->pc = 0x419bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_419c00:
    // 0x419c00: 0xa29301b0  sb          $s3, 0x1B0($s4)
    ctx->pc = 0x419c00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 432), (uint8_t)GPR_U32(ctx, 19));
label_419c04:
    // 0x419c04: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x419c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_419c08:
    // 0x419c08: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x419c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_419c0c:
    // 0x419c0c: 0x40f809  jalr        $v0
label_419c10:
    if (ctx->pc == 0x419C10u) {
        ctx->pc = 0x419C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419C0Cu;
        // 0x419c10: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419C14u;
        goto label_419c14;
    }
    ctx->pc = 0x419C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x419C14u);
        ctx->pc = 0x419C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419C0Cu;
        // 0x419c10: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419C0Cu, 0x419C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x419C14u;
label_419c14:
    // 0x419c14: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x419c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_419c18:
    // 0x419c18: 0xae020228  sw          $v0, 0x228($s0)
    ctx->pc = 0x419c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
label_419c1c:
    // 0x419c1c: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x419c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_419c20:
    // 0x419c20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x419c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_419c24:
    // 0x419c24: 0x24845740  addiu       $a0, $a0, 0x5740
    ctx->pc = 0x419c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22336));
label_419c28:
    // 0x419c28: 0xc063dec  jal         func_18F7B0
label_419c2c:
    if (ctx->pc == 0x419C2Cu) {
        ctx->pc = 0x419C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419C28u;
        // 0x419c2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419C30u;
        goto label_419c30;
    }
    ctx->pc = 0x419C28u;
    SET_GPR_U32(ctx, 31, 0x419C30u);
    ctx->pc = 0x419C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419C28u;
    // 0x419c2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F7B0u, 0x419C28u, 0x419C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419C30u;
label_419c30:
    // 0x419c30: 0x96420224  lhu         $v0, 0x224($s2)
    ctx->pc = 0x419c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_419c34:
    // 0x419c34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x419c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_419c38:
    // 0x419c38: 0xa6420224  sh          $v0, 0x224($s2)
    ctx->pc = 0x419c38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 2));
label_419c3c:
    // 0x419c3c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x419c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_419c40:
    // 0x419c40: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x419c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_419c44:
    // 0x419c44: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x419c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_419c48:
    // 0x419c48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x419c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_419c4c:
    // 0x419c4c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x419c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_419c50:
    // 0x419c50: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x419c50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_419c54:
    // 0x419c54: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x419c54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_419c58:
    // 0x419c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_419c5c:
    // 0x419c5c: 0x3e00008  jr          $ra
label_419c60:
    if (ctx->pc == 0x419C60u) {
        ctx->pc = 0x419C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419C5Cu;
        // 0x419c60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419C64u;
        goto label_419c64;
    }
    ctx->pc = 0x419C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419C5Cu;
        // 0x419c60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419C64u;
label_419c64:
    // 0x419c64: 0x0  nop
    ctx->pc = 0x419c64u;
    // NOP
    ctx->pc = 0x419c68u;
}
