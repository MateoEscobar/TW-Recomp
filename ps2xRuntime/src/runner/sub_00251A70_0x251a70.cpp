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

// Function: sub_00251A70
// Address: 0x251a70 - 0x251d28
void sub_00251A70_0x251a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251A70_0x251a70");
#endif

    switch (ctx->pc) {
        case 0x251ab8u: goto label_251ab8;
        case 0x251ac0u: goto label_251ac0;
        case 0x251ac8u: goto label_251ac8;
        case 0x251ad8u: goto label_251ad8;
        case 0x251b08u: goto label_251b08;
        case 0x251b18u: goto label_251b18;
        case 0x251b20u: goto label_251b20;
        case 0x251b40u: goto label_251b40;
        case 0x251b80u: goto label_251b80;
        case 0x251bc0u: goto label_251bc0;
        case 0x251bd8u: goto label_251bd8;
        case 0x251c14u: goto label_251c14;
        case 0x251c40u: goto label_251c40;
        case 0x251c78u: goto label_251c78;
        case 0x251ca4u: goto label_251ca4;
        case 0x251cc0u: goto label_251cc0;
        case 0x251cdcu: goto label_251cdc;
        case 0x251cf0u: goto label_251cf0;
        default: break;
    }

    ctx->pc = 0x251a70u;

    // 0x251a70: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x251a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x251a74: 0x7fb70230  sq          $s7, 0x230($sp)
    ctx->pc = 0x251a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 23));
    // 0x251a78: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x251a78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a7c: 0xafa40200  sw          $a0, 0x200($sp)
    ctx->pc = 0x251a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 4));
    // 0x251a80: 0x7fb002a0  sq          $s0, 0x2A0($sp)
    ctx->pc = 0x251a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 16));
    // 0x251a84: 0x7fb10290  sq          $s1, 0x290($sp)
    ctx->pc = 0x251a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 17));
    // 0x251a88: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x251a88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x251a8c: 0x7fb20280  sq          $s2, 0x280($sp)
    ctx->pc = 0x251a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 18));
    // 0x251a90: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x251a90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x251a94: 0xafa60204  sw          $a2, 0x204($sp)
    ctx->pc = 0x251a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 6));
    // 0x251a98: 0x7fb30270  sq          $s3, 0x270($sp)
    ctx->pc = 0x251a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 19));
    // 0x251a9c: 0x7fb40260  sq          $s4, 0x260($sp)
    ctx->pc = 0x251a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 20));
    // 0x251aa0: 0x7fb50250  sq          $s5, 0x250($sp)
    ctx->pc = 0x251aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 21));
    // 0x251aa4: 0x7fb60240  sq          $s6, 0x240($sp)
    ctx->pc = 0x251aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 22));
    // 0x251aa8: 0x7fbe0220  sq          $fp, 0x220($sp)
    ctx->pc = 0x251aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 30));
    // 0x251aac: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x251aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x251ab0: 0xc0945da  jal         func_251768
    ctx->pc = 0x251AB0u;
    SET_GPR_U32(ctx, 31, 0x251AB8u);
    ctx->pc = 0x251AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AB0u;
    // 0x251ab4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251768u, 0x251AB0u, 0x251AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AB8u;
label_251ab8:
    // 0x251ab8: 0xc094c6e  jal         func_2531B8
    ctx->pc = 0x251AB8u;
    SET_GPR_U32(ctx, 31, 0x251AC0u);
    ctx->pc = 0x251ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AB8u;
    // 0x251abc: 0x8e0405a8  lw          $a0, 0x5A8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2531B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2531B8u, 0x251AB8u, 0x251AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AC0u;
label_251ac0:
    // 0x251ac0: 0xc094d30  jal         func_2534C0
    ctx->pc = 0x251AC0u;
    SET_GPR_U32(ctx, 31, 0x251AC8u);
    ctx->pc = 0x251AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AC0u;
    // 0x251ac4: 0x8e4405ac  lw          $a0, 0x5AC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2534C0u, 0x251AC0u, 0x251AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AC8u;
label_251ac8:
    // 0x251ac8: 0xa6e00018  sh          $zero, 0x18($s7)
    ctx->pc = 0x251ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x251acc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x251accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ad0: 0xc0945ec  jal         func_2517B0
    ctx->pc = 0x251AD0u;
    SET_GPR_U32(ctx, 31, 0x251AD8u);
    ctx->pc = 0x251AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AD0u;
    // 0x251ad4: 0x8fa50200  lw          $a1, 0x200($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2517B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2517B0u, 0x251AD0u, 0x251AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AD8u;
label_251ad8:
    // 0x251ad8: 0x8e25a21c  lw          $a1, -0x5DE4($s1)
    ctx->pc = 0x251ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943260)));
    // 0x251adc: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x251adcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251ae0: 0x96e30018  lhu         $v1, 0x18($s7)
    ctx->pc = 0x251ae0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x251ae4: 0x2e52823  subu        $a1, $s7, $a1
    ctx->pc = 0x251ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x251ae8: 0x8e0405a8  lw          $a0, 0x5A8($s0)
    ctx->pc = 0x251ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
    // 0x251aec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251af0: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x251af0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x251af4: 0xa6e30016  sh          $v1, 0x16($s7)
    ctx->pc = 0x251af4u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x251af8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x251af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x251afc: 0xa6e6001c  sh          $a2, 0x1C($s7)
    ctx->pc = 0x251afcu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x251b00: 0xc094c70  jal         func_2531C0
    ctx->pc = 0x251B00u;
    SET_GPR_U32(ctx, 31, 0x251B08u);
    ctx->pc = 0x251B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251B00u;
    // 0x251b04: 0xa6e2001a  sh          $v0, 0x1A($s7) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 23), 26), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2531C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2531C0u, 0x251B00u, 0x251B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B08u;
label_251b08:
    // 0x251b08: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x251b08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251b0c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x251B0Cu;
    {
        const bool branch_taken_0x251b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B0Cu;
        // 0x251b10: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b0c) {
            ctx->pc = 0x251CD4u;
            goto label_251cd4;
        }
    }
    ctx->pc = 0x251B14u;
    // 0x251b14: 0x0  nop
    ctx->pc = 0x251b14u;
    // NOP
label_251b18:
    // 0x251b18: 0xc094c9a  jal         func_253268
    ctx->pc = 0x251B18u;
    SET_GPR_U32(ctx, 31, 0x251B20u);
    ctx->pc = 0x251B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251B18u;
    // 0x251b1c: 0x8ea405a8  lw          $a0, 0x5A8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253268u, 0x251B18u, 0x251B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B20u;
label_251b20:
    // 0x251b20: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x251b24: 0x8ec3a21c  lw          $v1, -0x5DE4($s6)
    ctx->pc = 0x251b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943260)));
    // 0x251b28: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x251b28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x251b2c: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x251b2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
    // 0x251b30: 0x8cc405ac  lw          $a0, 0x5AC($a2)
    ctx->pc = 0x251b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1452)));
    // 0x251b34: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x251b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251b38: 0xc094d34  jal         func_2534D0
    ctx->pc = 0x251B38u;
    SET_GPR_U32(ctx, 31, 0x251B40u);
    ctx->pc = 0x251B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251B38u;
    // 0x251b3c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2534D0u, 0x251B38u, 0x251B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B40u;
label_251b40:
    // 0x251b40: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x251B40u;
    {
        const bool branch_taken_0x251b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B40u;
        // 0x251b44: 0x3402fabc  ori         $v0, $zero, 0xFABC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64188);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b40) {
            ctx->pc = 0x251CE8u;
            goto label_251ce8;
        }
    }
    ctx->pc = 0x251B48u;
    // 0x251b48: 0x963e0018  lhu         $fp, 0x18($s1)
    ctx->pc = 0x251b48u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x251b4c: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x251b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x251b50: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x251b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x251b54: 0x5622001c  bnel        $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x251B54u;
    {
        const bool branch_taken_0x251b54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x251b54) {
            ctx->pc = 0x251B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251B54u;
            // 0x251b58: 0x86220014  lh          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251BC8u;
            goto label_251bc8;
        }
    }
    ctx->pc = 0x251B5Cu;
    // 0x251b5c: 0x9623001c  lhu         $v1, 0x1C($s1)
    ctx->pc = 0x251b5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x251b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x251b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251b64: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251b68: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x251B68u;
    {
        const bool branch_taken_0x251b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B68u;
        // 0x251b6c: 0xa63e0018  sh          $fp, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b68) {
            ctx->pc = 0x251BA8u;
            goto label_251ba8;
        }
    }
    ctx->pc = 0x251B70u;
    // 0x251b70: 0x8ec6a21c  lw          $a2, -0x5DE4($s6)
    ctx->pc = 0x251b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943260)));
    // 0x251b74: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x251b74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251b78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x251b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251b7c: 0x0  nop
    ctx->pc = 0x251b7cu;
    // NOP
label_251b80:
    // 0x251b80: 0x2ca20080  sltiu       $v0, $a1, 0x80
    ctx->pc = 0x251b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x251b84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x251B84u;
    {
        const bool branch_taken_0x251b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251b84) {
            ctx->pc = 0x251B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251B84u;
            // 0x251b88: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251B8Cu;
            goto label_251b8c;
        }
    }
    ctx->pc = 0x251B8Cu;
label_251b8c:
    // 0x251b8c: 0x9623001c  lhu         $v1, 0x1C($s1)
    ctx->pc = 0x251b8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x251b90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x251b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x251b94: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x251b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x251b98: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x251b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x251b9c: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x251b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x251ba0: 0x1447fff7  bne         $v0, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x251BA0u;
    {
        const bool branch_taken_0x251ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x251BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BA0u;
        // 0x251ba4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ba0) {
            ctx->pc = 0x251B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251b80;
        }
    }
    ctx->pc = 0x251BA8u;
label_251ba8:
    // 0x251ba8: 0x2ca20080  sltiu       $v0, $a1, 0x80
    ctx->pc = 0x251ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x251bac: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x251BACu;
    {
        const bool branch_taken_0x251bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BACu;
        // 0x251bb0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bac) {
            ctx->pc = 0x251CE8u;
            goto label_251ce8;
        }
    }
    ctx->pc = 0x251BB4u;
    // 0x251bb4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x251bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x251bb8: 0xc094680  jal         func_251A00
    ctx->pc = 0x251BB8u;
    SET_GPR_U32(ctx, 31, 0x251BC0u);
    ctx->pc = 0x251BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251BB8u;
    // 0x251bbc: 0xac770000  sw          $s7, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251A00u, 0x251BB8u, 0x251BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251BC0u;
label_251bc0:
    // 0x251bc0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x251BC0u;
    {
        const bool branch_taken_0x251bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BC0u;
        // 0x251bc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bc0) {
            ctx->pc = 0x251CF4u;
            goto label_251cf4;
        }
    }
    ctx->pc = 0x251BC8u;
label_251bc8:
    // 0x251bc8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x251bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251bcc: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x251BCCu;
    {
        const bool branch_taken_0x251bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BCCu;
        // 0x251bd0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bcc) {
            ctx->pc = 0x251CD4u;
            goto label_251cd4;
        }
    }
    ctx->pc = 0x251BD4u;
    // 0x251bd4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x251bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_251bd8:
    // 0x251bd8: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x251bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x251bdc: 0x3404fabc  ori         $a0, $zero, 0xFABC
    ctx->pc = 0x251bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64188);
    // 0x251be0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x251be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x251be4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x251be4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251be8: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x251be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x251bec: 0x10440034  beq         $v0, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x251BECu;
    {
        const bool branch_taken_0x251bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x251BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BECu;
        // 0x251bf0: 0x8fa60204  lw          $a2, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bec) {
            ctx->pc = 0x251CC0u;
            goto label_251cc0;
        }
    }
    ctx->pc = 0x251BF4u;
    // 0x251bf4: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x251bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x251bf8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x251bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x251bfc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x251BFCu;
    {
        const bool branch_taken_0x251bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BFCu;
        // 0x251c00: 0x8fa70204  lw          $a3, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bfc) {
            ctx->pc = 0x251CC0u;
            goto label_251cc0;
        }
    }
    ctx->pc = 0x251C04u;
    // 0x251c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x251c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x251c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c0c: 0xc094624  jal         func_251890
    ctx->pc = 0x251C0Cu;
    SET_GPR_U32(ctx, 31, 0x251C14u);
    ctx->pc = 0x251C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C0Cu;
    // 0x251c10: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251890u, 0x251C0Cu, 0x251C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C14u;
label_251c14:
    // 0x251c14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x251c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c18: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x251c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x251c1c: 0x946205a4  lhu         $v0, 0x5A4($v1)
    ctx->pc = 0x251c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5105A4u));
    // 0x251c20: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x251c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x251c24: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x251C24u;
    {
        const bool branch_taken_0x251c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C24u;
        // 0x251c28: 0x8ea405a8  lw          $a0, 0x5A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c24) {
            ctx->pc = 0x251CC0u;
            goto label_251cc0;
        }
    }
    ctx->pc = 0x251C2Cu;
    // 0x251c2c: 0x8ec5a21c  lw          $a1, -0x5DE4($s6)
    ctx->pc = 0x251c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943260)));
    // 0x251c30: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x251c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x251c34: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x251c34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x251c38: 0xc094cd4  jal         func_253350
    ctx->pc = 0x251C38u;
    SET_GPR_U32(ctx, 31, 0x251C40u);
    ctx->pc = 0x251C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C38u;
    // 0x251c3c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x253350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253350u, 0x251C38u, 0x251C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C40u;
label_251c40:
    // 0x251c40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x251c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c44: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x251C44u;
    {
        const bool branch_taken_0x251c44 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x251C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C44u;
        // 0x251c48: 0x8ec2a21c  lw          $v0, -0x5DE4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c44) {
            ctx->pc = 0x251C5Cu;
            goto label_251c5c;
        }
    }
    ctx->pc = 0x251C4Cu;
    // 0x251c4c: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x251c4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x251c50: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x251c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x251c54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x251C54u;
    {
        const bool branch_taken_0x251c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C54u;
        // 0x251c58: 0x8ec2a21c  lw          $v0, -0x5DE4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c54) {
            ctx->pc = 0x251CC0u;
            goto label_251cc0;
        }
    }
    ctx->pc = 0x251C5Cu;
label_251c5c:
    // 0x251c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251c60: 0xa6120018  sh          $s2, 0x18($s0)
    ctx->pc = 0x251c60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 18));
    // 0x251c64: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x251c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x251c68: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x251c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x251c6c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x251c6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x251c70: 0xc0945ec  jal         func_2517B0
    ctx->pc = 0x251C70u;
    SET_GPR_U32(ctx, 31, 0x251C78u);
    ctx->pc = 0x251C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C70u;
    // 0x251c74: 0xa602001c  sh          $v0, 0x1C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2517B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2517B0u, 0x251C70u, 0x251C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C78u;
label_251c78:
    // 0x251c78: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x251c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x251c7c: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x251c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x251c80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251c84: 0x661000b  bgez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x251C84u;
    {
        const bool branch_taken_0x251c84 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x251C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C84u;
        // 0x251c88: 0xa6030016  sh          $v1, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c84) {
            ctx->pc = 0x251CB4u;
            goto label_251cb4;
        }
    }
    ctx->pc = 0x251C8Cu;
    // 0x251c8c: 0x8ec5a21c  lw          $a1, -0x5DE4($s6)
    ctx->pc = 0x251c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943260)));
    // 0x251c90: 0x8ea405a8  lw          $a0, 0x5A8($s5)
    ctx->pc = 0x251c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
    // 0x251c94: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x251c94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x251c98: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x251c98u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x251c9c: 0xc094c70  jal         func_2531C0
    ctx->pc = 0x251C9Cu;
    SET_GPR_U32(ctx, 31, 0x251CA4u);
    ctx->pc = 0x251CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C9Cu;
    // 0x251ca0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2531C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2531C0u, 0x251C9Cu, 0x251CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251CA4u;
label_251ca4:
    // 0x251ca4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x251CA4u;
    {
        const bool branch_taken_0x251ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251ca4) {
            ctx->pc = 0x251CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251CA4u;
            // 0x251ca8: 0x86220014  lh          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251CC4u;
            goto label_251cc4;
        }
    }
    ctx->pc = 0x251CACu;
    // 0x251cac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x251CACu;
    {
        const bool branch_taken_0x251cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251cac) {
            ctx->pc = 0x251CE8u;
            goto label_251ce8;
        }
    }
    ctx->pc = 0x251CB4u;
label_251cb4:
    // 0x251cb4: 0x8ea405a8  lw          $a0, 0x5A8($s5)
    ctx->pc = 0x251cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
    // 0x251cb8: 0xc094cee  jal         func_2533B8
    ctx->pc = 0x251CB8u;
    SET_GPR_U32(ctx, 31, 0x251CC0u);
    ctx->pc = 0x251CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251CB8u;
    // 0x251cbc: 0x3265ffff  andi        $a1, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2533B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2533B8u, 0x251CB8u, 0x251CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251CC0u;
label_251cc0:
    // 0x251cc0: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x251cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_251cc4:
    // 0x251cc4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x251cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x251cc8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x251cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251ccc: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x251CCCu;
    {
        const bool branch_taken_0x251ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251ccc) {
            ctx->pc = 0x251CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251CCCu;
            // 0x251cd0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251bd8;
        }
    }
    ctx->pc = 0x251CD4u;
label_251cd4:
    // 0x251cd4: 0xc094ce6  jal         func_253398
    ctx->pc = 0x251CD4u;
    SET_GPR_U32(ctx, 31, 0x251CDCu);
    ctx->pc = 0x251CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251CD4u;
    // 0x251cd8: 0x8ea405a8  lw          $a0, 0x5A8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253398u, 0x251CD4u, 0x251CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251CDCu;
label_251cdc:
    // 0x251cdc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x251cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ce0: 0x1260ff8d  beqz        $s3, . + 4 + (-0x73 << 2)
    ctx->pc = 0x251CE0u;
    {
        const bool branch_taken_0x251ce0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ce0) {
            ctx->pc = 0x251B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251b18;
        }
    }
    ctx->pc = 0x251CE8u;
label_251ce8:
    // 0x251ce8: 0xc094680  jal         func_251A00
    ctx->pc = 0x251CE8u;
    SET_GPR_U32(ctx, 31, 0x251CF0u);
    ctx->pc = 0x251A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251A00u, 0x251CE8u, 0x251CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251CF0u;
label_251cf0:
    // 0x251cf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x251cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251cf4:
    // 0x251cf4: 0x7bb002a0  lq          $s0, 0x2A0($sp)
    ctx->pc = 0x251cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x251cf8: 0x7bb10290  lq          $s1, 0x290($sp)
    ctx->pc = 0x251cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x251cfc: 0x7bb20280  lq          $s2, 0x280($sp)
    ctx->pc = 0x251cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x251d00: 0x7bb30270  lq          $s3, 0x270($sp)
    ctx->pc = 0x251d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x251d04: 0x7bb40260  lq          $s4, 0x260($sp)
    ctx->pc = 0x251d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x251d08: 0x7bb50250  lq          $s5, 0x250($sp)
    ctx->pc = 0x251d08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x251d0c: 0x7bb60240  lq          $s6, 0x240($sp)
    ctx->pc = 0x251d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x251d10: 0x7bb70230  lq          $s7, 0x230($sp)
    ctx->pc = 0x251d10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x251d14: 0x7bbe0220  lq          $fp, 0x220($sp)
    ctx->pc = 0x251d14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x251d18: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x251d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x251d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x251D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D1Cu;
        // 0x251d20: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251D24u;
    // 0x251d24: 0x0  nop
    ctx->pc = 0x251d24u;
    // NOP
    ctx->pc = 0x251d28u;
}
