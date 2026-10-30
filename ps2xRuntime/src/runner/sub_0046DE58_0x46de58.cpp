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

// Function: sub_0046DE58
// Address: 0x46de58 - 0x46e038
void sub_0046DE58_0x46de58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DE58_0x46de58");
#endif

    switch (ctx->pc) {
        case 0x46de58u: goto label_46de58;
        case 0x46de5cu: goto label_46de5c;
        case 0x46de60u: goto label_46de60;
        case 0x46de64u: goto label_46de64;
        case 0x46de68u: goto label_46de68;
        case 0x46de6cu: goto label_46de6c;
        case 0x46de70u: goto label_46de70;
        case 0x46de74u: goto label_46de74;
        case 0x46de78u: goto label_46de78;
        case 0x46de7cu: goto label_46de7c;
        case 0x46de80u: goto label_46de80;
        case 0x46de84u: goto label_46de84;
        case 0x46de88u: goto label_46de88;
        case 0x46de8cu: goto label_46de8c;
        case 0x46de90u: goto label_46de90;
        case 0x46de94u: goto label_46de94;
        case 0x46de98u: goto label_46de98;
        case 0x46de9cu: goto label_46de9c;
        case 0x46dea0u: goto label_46dea0;
        case 0x46dea4u: goto label_46dea4;
        case 0x46dea8u: goto label_46dea8;
        case 0x46deacu: goto label_46deac;
        case 0x46deb0u: goto label_46deb0;
        case 0x46deb4u: goto label_46deb4;
        case 0x46deb8u: goto label_46deb8;
        case 0x46debcu: goto label_46debc;
        case 0x46dec0u: goto label_46dec0;
        case 0x46dec4u: goto label_46dec4;
        case 0x46dec8u: goto label_46dec8;
        case 0x46deccu: goto label_46decc;
        case 0x46ded0u: goto label_46ded0;
        case 0x46ded4u: goto label_46ded4;
        case 0x46ded8u: goto label_46ded8;
        case 0x46dedcu: goto label_46dedc;
        case 0x46dee0u: goto label_46dee0;
        case 0x46dee4u: goto label_46dee4;
        case 0x46dee8u: goto label_46dee8;
        case 0x46deecu: goto label_46deec;
        case 0x46def0u: goto label_46def0;
        case 0x46def4u: goto label_46def4;
        case 0x46def8u: goto label_46def8;
        case 0x46defcu: goto label_46defc;
        case 0x46df00u: goto label_46df00;
        case 0x46df04u: goto label_46df04;
        case 0x46df08u: goto label_46df08;
        case 0x46df0cu: goto label_46df0c;
        case 0x46df10u: goto label_46df10;
        case 0x46df14u: goto label_46df14;
        case 0x46df18u: goto label_46df18;
        case 0x46df1cu: goto label_46df1c;
        case 0x46df20u: goto label_46df20;
        case 0x46df24u: goto label_46df24;
        case 0x46df28u: goto label_46df28;
        case 0x46df2cu: goto label_46df2c;
        case 0x46df30u: goto label_46df30;
        case 0x46df34u: goto label_46df34;
        case 0x46df38u: goto label_46df38;
        case 0x46df3cu: goto label_46df3c;
        case 0x46df40u: goto label_46df40;
        case 0x46df44u: goto label_46df44;
        case 0x46df48u: goto label_46df48;
        case 0x46df4cu: goto label_46df4c;
        case 0x46df50u: goto label_46df50;
        case 0x46df54u: goto label_46df54;
        case 0x46df58u: goto label_46df58;
        case 0x46df5cu: goto label_46df5c;
        case 0x46df60u: goto label_46df60;
        case 0x46df64u: goto label_46df64;
        case 0x46df68u: goto label_46df68;
        case 0x46df6cu: goto label_46df6c;
        case 0x46df70u: goto label_46df70;
        case 0x46df74u: goto label_46df74;
        case 0x46df78u: goto label_46df78;
        case 0x46df7cu: goto label_46df7c;
        case 0x46df80u: goto label_46df80;
        case 0x46df84u: goto label_46df84;
        case 0x46df88u: goto label_46df88;
        case 0x46df8cu: goto label_46df8c;
        case 0x46df90u: goto label_46df90;
        case 0x46df94u: goto label_46df94;
        case 0x46df98u: goto label_46df98;
        case 0x46df9cu: goto label_46df9c;
        case 0x46dfa0u: goto label_46dfa0;
        case 0x46dfa4u: goto label_46dfa4;
        case 0x46dfa8u: goto label_46dfa8;
        case 0x46dfacu: goto label_46dfac;
        case 0x46dfb0u: goto label_46dfb0;
        case 0x46dfb4u: goto label_46dfb4;
        case 0x46dfb8u: goto label_46dfb8;
        case 0x46dfbcu: goto label_46dfbc;
        case 0x46dfc0u: goto label_46dfc0;
        case 0x46dfc4u: goto label_46dfc4;
        case 0x46dfc8u: goto label_46dfc8;
        case 0x46dfccu: goto label_46dfcc;
        case 0x46dfd0u: goto label_46dfd0;
        case 0x46dfd4u: goto label_46dfd4;
        case 0x46dfd8u: goto label_46dfd8;
        case 0x46dfdcu: goto label_46dfdc;
        case 0x46dfe0u: goto label_46dfe0;
        case 0x46dfe4u: goto label_46dfe4;
        case 0x46dfe8u: goto label_46dfe8;
        case 0x46dfecu: goto label_46dfec;
        case 0x46dff0u: goto label_46dff0;
        case 0x46dff4u: goto label_46dff4;
        case 0x46dff8u: goto label_46dff8;
        case 0x46dffcu: goto label_46dffc;
        case 0x46e000u: goto label_46e000;
        case 0x46e004u: goto label_46e004;
        case 0x46e008u: goto label_46e008;
        case 0x46e00cu: goto label_46e00c;
        case 0x46e010u: goto label_46e010;
        case 0x46e014u: goto label_46e014;
        case 0x46e018u: goto label_46e018;
        case 0x46e01cu: goto label_46e01c;
        case 0x46e020u: goto label_46e020;
        case 0x46e024u: goto label_46e024;
        case 0x46e028u: goto label_46e028;
        case 0x46e02cu: goto label_46e02c;
        case 0x46e030u: goto label_46e030;
        case 0x46e034u: goto label_46e034;
        default: break;
    }

    ctx->pc = 0x46de58u;

label_46de58:
    // 0x46de58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x46de58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_46de5c:
    // 0x46de5c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x46de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_46de60:
    // 0x46de60: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x46de60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_46de64:
    // 0x46de64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46de64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46de68:
    // 0x46de68: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x46de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_46de6c:
    // 0x46de6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x46de6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46de70:
    // 0x46de70: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x46de70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_46de74:
    // 0x46de74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x46de74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46de78:
    // 0x46de78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x46de78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_46de7c:
    // 0x46de7c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x46de7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_46de80:
    // 0x46de80: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x46de80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_46de84:
    // 0x46de84: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x46de84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_46de88:
    // 0x46de88: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x46de88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_46de8c:
    // 0x46de8c: 0x3136ffff  andi        $s6, $t1, 0xFFFF
    ctx->pc = 0x46de8cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_46de90:
    // 0x46de90: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x46de90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_46de94:
    // 0x46de94: 0x3157ffff  andi        $s7, $t2, 0xFFFF
    ctx->pc = 0x46de94u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_46de98:
    // 0x46de98: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x46de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_46de9c:
    // 0x46de9c: 0x317effff  andi        $fp, $t3, 0xFFFF
    ctx->pc = 0x46de9cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_46dea0:
    // 0x46dea0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46dea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46dea4:
    // 0x46dea4: 0x97a300c0  lhu         $v1, 0xC0($sp)
    ctx->pc = 0x46dea4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_46dea8:
    // 0x46dea8: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x46dea8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46deac:
    // 0x46deac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x46deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46deb0:
    // 0x46deb0: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x46deb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46deb4:
    // 0x46deb4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_46deb8:
    if (ctx->pc == 0x46DEB8u) {
        ctx->pc = 0x46DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DEB4u;
        // 0x46deb8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DEBCu;
        goto label_46debc;
    }
    ctx->pc = 0x46DEB4u;
    {
        const bool branch_taken_0x46deb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DEB4u;
        // 0x46deb8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46deb4) {
            ctx->pc = 0x46DF4Cu;
            goto label_46df4c;
        }
    }
    ctx->pc = 0x46DEBCu;
label_46debc:
    // 0x46debc: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x46debcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_46dec0:
    // 0x46dec0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x46dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46dec4:
    // 0x46dec4: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
label_46dec8:
    if (ctx->pc == 0x46DEC8u) {
        ctx->pc = 0x46DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DEC4u;
        // 0x46dec8: 0x628818  mult        $s1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DECCu;
        goto label_46decc;
    }
    ctx->pc = 0x46DEC4u;
    {
        const bool branch_taken_0x46dec4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DEC4u;
        // 0x46dec8: 0x628818  mult        $s1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dec4) {
            ctx->pc = 0x46DEF0u;
            goto label_46def0;
        }
    }
    ctx->pc = 0x46DECCu;
label_46decc:
    // 0x46decc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46deccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46ded0:
    // 0x46ded0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x46ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46ded4:
    // 0x46ded4: 0x8c62ae28  lw          $v0, -0x51D8($v1)
    ctx->pc = 0x46ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946344)));
label_46ded8:
    // 0x46ded8: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x46ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_46dedc:
    // 0x46dedc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46dedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46dee0:
    // 0x46dee0: 0x40f809  jalr        $v0
label_46dee4:
    if (ctx->pc == 0x46DEE4u) {
        ctx->pc = 0x46DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DEE0u;
        // 0x46dee4: 0x34c60502  ori         $a2, $a2, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DEE8u;
        goto label_46dee8;
    }
    ctx->pc = 0x46DEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DEE8u);
        ctx->pc = 0x46DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DEE0u;
        // 0x46dee4: 0x34c60502  ori         $a2, $a2, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DEE0u, 0x46DEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DEE8u;
label_46dee8:
    // 0x46dee8: 0x10000008  b           . + 4 + (0x8 << 2)
label_46deec:
    if (ctx->pc == 0x46DEECu) {
        ctx->pc = 0x46DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DEE8u;
        // 0x46deec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DEF0u;
        goto label_46def0;
    }
    ctx->pc = 0x46DEE8u;
    {
        const bool branch_taken_0x46dee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DEE8u;
        // 0x46deec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dee8) {
            ctx->pc = 0x46DF0Cu;
            goto label_46df0c;
        }
    }
    ctx->pc = 0x46DEF0u;
label_46def0:
    // 0x46def0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46def0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46def4:
    // 0x46def4: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x46def4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_46def8:
    // 0x46def8: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x46def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_46defc:
    // 0x46defc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46defcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46df00:
    // 0x46df00: 0x40f809  jalr        $v0
label_46df04:
    if (ctx->pc == 0x46DF04u) {
        ctx->pc = 0x46DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DF00u;
        // 0x46df04: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DF08u;
        goto label_46df08;
    }
    ctx->pc = 0x46DF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DF08u);
        ctx->pc = 0x46DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DF00u;
        // 0x46df04: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DF00u, 0x46DF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DF08u;
label_46df08:
    // 0x46df08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x46df08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46df0c:
    // 0x46df0c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_46df10:
    if (ctx->pc == 0x46DF10u) {
        ctx->pc = 0x46DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DF0Cu;
        // 0x46df10: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DF14u;
        goto label_46df14;
    }
    ctx->pc = 0x46DF0Cu;
    {
        const bool branch_taken_0x46df0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46df0c) {
            ctx->pc = 0x46DF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46DF0Cu;
            // 0x46df10: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46DF40u;
            goto label_46df40;
        }
    }
    ctx->pc = 0x46DF14u;
label_46df14:
    // 0x46df14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46df14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46df18:
    // 0x46df18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46df18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46df1c:
    // 0x46df1c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x46df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_46df20:
    // 0x46df20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46df20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46df24:
    // 0x46df24: 0xc11eff2  jal         func_47BFC8
label_46df28:
    if (ctx->pc == 0x46DF28u) {
        ctx->pc = 0x46DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DF24u;
        // 0x46df28: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DF2Cu;
        goto label_46df2c;
    }
    ctx->pc = 0x46DF24u;
    SET_GPR_U32(ctx, 31, 0x46DF2Cu);
    ctx->pc = 0x46DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46DF24u;
    // 0x46df28: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46DF24u, 0x46DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DF2Cu;
label_46df2c:
    // 0x46df2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46df2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46df30:
    // 0x46df30: 0xc11f024  jal         func_47C090
label_46df34:
    if (ctx->pc == 0x46DF34u) {
        ctx->pc = 0x46DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DF30u;
        // 0x46df34: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DF38u;
        goto label_46df38;
    }
    ctx->pc = 0x46DF30u;
    SET_GPR_U32(ctx, 31, 0x46DF38u);
    ctx->pc = 0x46DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46DF30u;
    // 0x46df34: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46DF30u, 0x46DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DF38u;
label_46df38:
    // 0x46df38: 0x10000032  b           . + 4 + (0x32 << 2)
label_46df3c:
    if (ctx->pc == 0x46DF3Cu) {
        ctx->pc = 0x46DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DF38u;
        // 0x46df3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DF40u;
        goto label_46df40;
    }
    ctx->pc = 0x46DF38u;
    {
        const bool branch_taken_0x46df38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DF38u;
        // 0x46df3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46df38) {
            ctx->pc = 0x46E004u;
            goto label_46e004;
        }
    }
    ctx->pc = 0x46DF40u;
label_46df40:
    // 0x46df40: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x46df40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_46df44:
    // 0x46df44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46df44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46df48:
    // 0x46df48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x46df48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_46df4c:
    // 0x46df4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x46df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46df50:
    // 0x46df50: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x46df50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46df54:
    // 0x46df54: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x46df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46df58:
    // 0x46df58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46df58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46df5c:
    // 0x46df5c: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x46df5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_46df60:
    // 0x46df60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46df60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46df64:
    // 0x46df64: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x46df64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
label_46df68:
    // 0x46df68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46df68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46df6c:
    // 0x46df6c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x46df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46df70:
    // 0x46df70: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x46df70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_46df74:
    // 0x46df74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46df74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46df78:
    // 0x46df78: 0xa4730000  sh          $s3, 0x0($v1)
    ctx->pc = 0x46df78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 19));
label_46df7c:
    // 0x46df7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x46df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46df80:
    // 0x46df80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x46df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46df84:
    // 0x46df84: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x46df84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_46df88:
    // 0x46df88: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46df8c:
    // 0x46df8c: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x46df8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
label_46df90:
    // 0x46df90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46df90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46df94:
    // 0x46df94: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x46df94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46df98:
    // 0x46df98: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x46df98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_46df9c:
    // 0x46df9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46dfa0:
    // 0x46dfa0: 0xa4750004  sh          $s5, 0x4($v1)
    ctx->pc = 0x46dfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 21));
label_46dfa4:
    // 0x46dfa4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x46dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46dfa8:
    // 0x46dfa8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x46dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46dfac:
    // 0x46dfac: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x46dfacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_46dfb0:
    // 0x46dfb0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46dfb4:
    // 0x46dfb4: 0xa496000c  sh          $s6, 0xC($a0)
    ctx->pc = 0x46dfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 22));
label_46dfb8:
    // 0x46dfb8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46dfbc:
    // 0x46dfbc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x46dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46dfc0:
    // 0x46dfc0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x46dfc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_46dfc4:
    // 0x46dfc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46dfc8:
    // 0x46dfc8: 0xa477000e  sh          $s7, 0xE($v1)
    ctx->pc = 0x46dfc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 23));
label_46dfcc:
    // 0x46dfcc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x46dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46dfd0:
    // 0x46dfd0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x46dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46dfd4:
    // 0x46dfd4: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x46dfd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_46dfd8:
    // 0x46dfd8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46dfdc:
    // 0x46dfdc: 0xa49e0010  sh          $fp, 0x10($a0)
    ctx->pc = 0x46dfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 30));
label_46dfe0:
    // 0x46dfe0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x46dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46dfe4:
    // 0x46dfe4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x46dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46dfe8:
    // 0x46dfe8: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x46dfe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_46dfec:
    // 0x46dfec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x46dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_46dff0:
    // 0x46dff0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_46dff4:
    // 0x46dff4: 0xa4a30012  sh          $v1, 0x12($a1)
    ctx->pc = 0x46dff4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
label_46dff8:
    // 0x46dff8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46dffc:
    // 0x46dffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46e000:
    // 0x46e000: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x46e000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_46e004:
    // 0x46e004: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x46e004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_46e008:
    // 0x46e008: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x46e008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46e00c:
    // 0x46e00c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x46e00cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46e010:
    // 0x46e010: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x46e010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46e014:
    // 0x46e014: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x46e014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46e018:
    // 0x46e018: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x46e018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46e01c:
    // 0x46e01c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x46e01cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46e020:
    // 0x46e020: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x46e020u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46e024:
    // 0x46e024: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x46e024u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46e028:
    // 0x46e028: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46e028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46e02c:
    // 0x46e02c: 0x3e00008  jr          $ra
label_46e030:
    if (ctx->pc == 0x46E030u) {
        ctx->pc = 0x46E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E02Cu;
        // 0x46e030: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E034u;
        goto label_46e034;
    }
    ctx->pc = 0x46E02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E02Cu;
        // 0x46e030: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46E034u;
label_46e034:
    // 0x46e034: 0x0  nop
    ctx->pc = 0x46e034u;
    // NOP
    ctx->pc = 0x46e038u;
}
