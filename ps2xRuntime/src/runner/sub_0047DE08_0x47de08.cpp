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

// Function: sub_0047DE08
// Address: 0x47de08 - 0x47df38
void sub_0047DE08_0x47de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047DE08_0x47de08");
#endif

    switch (ctx->pc) {
        case 0x47de08u: goto label_47de08;
        case 0x47de0cu: goto label_47de0c;
        case 0x47de10u: goto label_47de10;
        case 0x47de14u: goto label_47de14;
        case 0x47de18u: goto label_47de18;
        case 0x47de1cu: goto label_47de1c;
        case 0x47de20u: goto label_47de20;
        case 0x47de24u: goto label_47de24;
        case 0x47de28u: goto label_47de28;
        case 0x47de2cu: goto label_47de2c;
        case 0x47de30u: goto label_47de30;
        case 0x47de34u: goto label_47de34;
        case 0x47de38u: goto label_47de38;
        case 0x47de3cu: goto label_47de3c;
        case 0x47de40u: goto label_47de40;
        case 0x47de44u: goto label_47de44;
        case 0x47de48u: goto label_47de48;
        case 0x47de4cu: goto label_47de4c;
        case 0x47de50u: goto label_47de50;
        case 0x47de54u: goto label_47de54;
        case 0x47de58u: goto label_47de58;
        case 0x47de5cu: goto label_47de5c;
        case 0x47de60u: goto label_47de60;
        case 0x47de64u: goto label_47de64;
        case 0x47de68u: goto label_47de68;
        case 0x47de6cu: goto label_47de6c;
        case 0x47de70u: goto label_47de70;
        case 0x47de74u: goto label_47de74;
        case 0x47de78u: goto label_47de78;
        case 0x47de7cu: goto label_47de7c;
        case 0x47de80u: goto label_47de80;
        case 0x47de84u: goto label_47de84;
        case 0x47de88u: goto label_47de88;
        case 0x47de8cu: goto label_47de8c;
        case 0x47de90u: goto label_47de90;
        case 0x47de94u: goto label_47de94;
        case 0x47de98u: goto label_47de98;
        case 0x47de9cu: goto label_47de9c;
        case 0x47dea0u: goto label_47dea0;
        case 0x47dea4u: goto label_47dea4;
        case 0x47dea8u: goto label_47dea8;
        case 0x47deacu: goto label_47deac;
        case 0x47deb0u: goto label_47deb0;
        case 0x47deb4u: goto label_47deb4;
        case 0x47deb8u: goto label_47deb8;
        case 0x47debcu: goto label_47debc;
        case 0x47dec0u: goto label_47dec0;
        case 0x47dec4u: goto label_47dec4;
        case 0x47dec8u: goto label_47dec8;
        case 0x47deccu: goto label_47decc;
        case 0x47ded0u: goto label_47ded0;
        case 0x47ded4u: goto label_47ded4;
        case 0x47ded8u: goto label_47ded8;
        case 0x47dedcu: goto label_47dedc;
        case 0x47dee0u: goto label_47dee0;
        case 0x47dee4u: goto label_47dee4;
        case 0x47dee8u: goto label_47dee8;
        case 0x47deecu: goto label_47deec;
        case 0x47def0u: goto label_47def0;
        case 0x47def4u: goto label_47def4;
        case 0x47def8u: goto label_47def8;
        case 0x47defcu: goto label_47defc;
        case 0x47df00u: goto label_47df00;
        case 0x47df04u: goto label_47df04;
        case 0x47df08u: goto label_47df08;
        case 0x47df0cu: goto label_47df0c;
        case 0x47df10u: goto label_47df10;
        case 0x47df14u: goto label_47df14;
        case 0x47df18u: goto label_47df18;
        case 0x47df1cu: goto label_47df1c;
        case 0x47df20u: goto label_47df20;
        case 0x47df24u: goto label_47df24;
        case 0x47df28u: goto label_47df28;
        case 0x47df2cu: goto label_47df2c;
        case 0x47df30u: goto label_47df30;
        case 0x47df34u: goto label_47df34;
        default: break;
    }

    ctx->pc = 0x47de08u;

label_47de08:
    // 0x47de08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47de08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_47de0c:
    // 0x47de0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47de10:
    // 0x47de10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47de14:
    // 0x47de14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47de14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47de18:
    // 0x47de18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x47de18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47de1c:
    // 0x47de1c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x47de1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_47de20:
    // 0x47de20: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x47de20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47de24:
    // 0x47de24: 0x10c7003c  beq         $a2, $a3, . + 4 + (0x3C << 2)
label_47de28:
    if (ctx->pc == 0x47DE28u) {
        ctx->pc = 0x47DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DE24u;
        // 0x47de28: 0x8e080008  lw          $t0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DE2Cu;
        goto label_47de2c;
    }
    ctx->pc = 0x47DE24u;
    {
        const bool branch_taken_0x47de24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x47DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DE24u;
        // 0x47de28: 0x8e080008  lw          $t0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47de24) {
            ctx->pc = 0x47DF18u;
            goto label_47df18;
        }
    }
    ctx->pc = 0x47DE2Cu;
label_47de2c:
    // 0x47de2c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_47de30:
    // 0x47de30: 0x25090008  addiu       $t1, $t0, 0x8
    ctx->pc = 0x47de30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_47de34:
    // 0x47de34: 0x244bad18  addiu       $t3, $v0, -0x52E8
    ctx->pc = 0x47de34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47de38:
    // 0x47de38: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x47de38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_47de3c:
    // 0x47de3c: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x47de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_47de40:
    // 0x47de40: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x47de40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_47de44:
    // 0x47de44: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_47de48:
    if (ctx->pc == 0x47DE48u) {
        ctx->pc = 0x47DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DE44u;
        // 0x47de48: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DE4Cu;
        goto label_47de4c;
    }
    ctx->pc = 0x47DE44u;
    {
        const bool branch_taken_0x47de44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47de44) {
            ctx->pc = 0x47DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DE44u;
            // 0x47de48: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DF10u;
            goto label_47df10;
        }
    }
    ctx->pc = 0x47DE4Cu;
label_47de4c:
    // 0x47de4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47de50:
    // 0x47de50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47de54:
    // 0x47de54: 0x436018  mult        $t4, $v0, $v1
    ctx->pc = 0x47de54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_47de58:
    // 0x47de58: 0x1851021  addu        $v0, $t4, $a1
    ctx->pc = 0x47de58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_47de5c:
    // 0x47de5c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x47de5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_47de60:
    // 0x47de60: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_47de64:
    if (ctx->pc == 0x47DE64u) {
        ctx->pc = 0x47DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DE60u;
        // 0x47de64: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DE68u;
        goto label_47de68;
    }
    ctx->pc = 0x47DE60u;
    {
        const bool branch_taken_0x47de60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47de60) {
            ctx->pc = 0x47DE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DE60u;
            // 0x47de64: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DF10u;
            goto label_47df10;
        }
    }
    ctx->pc = 0x47DE68u;
label_47de68:
    // 0x47de68: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x47de68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_47de6c:
    // 0x47de6c: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x47de6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_47de70:
    // 0x47de70: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x47de70u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_47de74:
    // 0x47de74: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_47de78:
    if (ctx->pc == 0x47DE78u) {
        ctx->pc = 0x47DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DE74u;
        // 0x47de78: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DE7Cu;
        goto label_47de7c;
    }
    ctx->pc = 0x47DE74u;
    {
        const bool branch_taken_0x47de74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47de74) {
            ctx->pc = 0x47DE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DE74u;
            // 0x47de78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DE7Cu;
            goto label_47de7c;
        }
    }
    ctx->pc = 0x47DE7Cu;
label_47de7c:
    // 0x47de7c: 0x1012  mflo        $v0
    ctx->pc = 0x47de7cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_47de80:
    // 0x47de80: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x47de80u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_47de84:
    // 0x47de84: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x47de84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_47de88:
    // 0x47de88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x47de88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_47de8c:
    // 0x47de8c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x47de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_47de90:
    // 0x47de90: 0x4a1007  srav        $v0, $t2, $v0
    ctx->pc = 0x47de90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
label_47de94:
    // 0x47de94: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x47de94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_47de98:
    // 0x47de98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47de98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47de9c:
    // 0x47de9c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x47de9cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_47dea0:
    // 0x47dea0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x47dea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_47dea4:
    // 0x47dea4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x47dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_47dea8:
    // 0x47dea8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x47dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_47deac:
    // 0x47deac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x47deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_47deb0:
    // 0x47deb0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_47deb4:
    if (ctx->pc == 0x47DEB4u) {
        ctx->pc = 0x47DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DEB0u;
        // 0x47deb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DEB8u;
        goto label_47deb8;
    }
    ctx->pc = 0x47DEB0u;
    {
        const bool branch_taken_0x47deb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DEB0u;
        // 0x47deb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47deb0) {
            ctx->pc = 0x47DF08u;
            goto label_47df08;
        }
    }
    ctx->pc = 0x47DEB8u;
label_47deb8:
    // 0x47deb8: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_47debc:
    if (ctx->pc == 0x47DEBCu) {
        ctx->pc = 0x47DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DEB8u;
        // 0x47debc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DEC0u;
        goto label_47dec0;
    }
    ctx->pc = 0x47DEB8u;
    {
        const bool branch_taken_0x47deb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DEB8u;
        // 0x47debc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47deb8) {
            ctx->pc = 0x47DEDCu;
            goto label_47dedc;
        }
    }
    ctx->pc = 0x47DEC0u;
label_47dec0:
    // 0x47dec0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x47dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_47dec4:
    // 0x47dec4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x47dec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47dec8:
    // 0x47dec8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x47dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_47decc:
    // 0x47decc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x47deccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_47ded0:
    // 0x47ded0: 0x0  nop
    ctx->pc = 0x47ded0u;
    // NOP
label_47ded4:
    // 0x47ded4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_47ded8:
    if (ctx->pc == 0x47DED8u) {
        ctx->pc = 0x47DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DED4u;
        // 0x47ded8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DEDCu;
        goto label_47dedc;
    }
    ctx->pc = 0x47DED4u;
    {
        const bool branch_taken_0x47ded4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DED4u;
        // 0x47ded8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ded4) {
            ctx->pc = 0x47DEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47dec0;
        }
    }
    ctx->pc = 0x47DEDCu;
label_47dedc:
    // 0x47dedc: 0x5480000f  bnel        $a0, $zero, . + 4 + (0xF << 2)
label_47dee0:
    if (ctx->pc == 0x47DEE0u) {
        ctx->pc = 0x47DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DEDCu;
        // 0x47dee0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DEE4u;
        goto label_47dee4;
    }
    ctx->pc = 0x47DEDCu;
    {
        const bool branch_taken_0x47dedc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x47dedc) {
            ctx->pc = 0x47DEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DEDCu;
            // 0x47dee0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DF1Cu;
            goto label_47df1c;
        }
    }
    ctx->pc = 0x47DEE4u;
label_47dee4:
    // 0x47dee4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x47dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_47dee8:
    // 0x47dee8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x47dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_47deec:
    // 0x47deec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x47deecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_47def0:
    // 0x47def0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x47def0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_47def4:
    // 0x47def4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x47def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_47def8:
    // 0x47def8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x47def8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_47defc:
    // 0x47defc: 0x8d63010c  lw          $v1, 0x10C($t3)
    ctx->pc = 0x47defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 268)));
label_47df00:
    // 0x47df00: 0x60f809  jalr        $v1
label_47df04:
    if (ctx->pc == 0x47DF04u) {
        ctx->pc = 0x47DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF00u;
        // 0x47df04: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DF08u;
        goto label_47df08;
    }
    ctx->pc = 0x47DF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x47DF08u);
        ctx->pc = 0x47DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF00u;
        // 0x47df04: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DF00u, 0x47DF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47DF08u;
label_47df08:
    // 0x47df08: 0x10000004  b           . + 4 + (0x4 << 2)
label_47df0c:
    if (ctx->pc == 0x47DF0Cu) {
        ctx->pc = 0x47DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF08u;
        // 0x47df0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DF10u;
        goto label_47df10;
    }
    ctx->pc = 0x47DF08u;
    {
        const bool branch_taken_0x47df08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF08u;
        // 0x47df0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47df08) {
            ctx->pc = 0x47DF1Cu;
            goto label_47df1c;
        }
    }
    ctx->pc = 0x47DF10u;
label_47df10:
    // 0x47df10: 0x14c7ffcb  bne         $a2, $a3, . + 4 + (-0x35 << 2)
label_47df14:
    if (ctx->pc == 0x47DF14u) {
        ctx->pc = 0x47DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF10u;
        // 0x47df14: 0xc92821  addu        $a1, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DF18u;
        goto label_47df18;
    }
    ctx->pc = 0x47DF10u;
    {
        const bool branch_taken_0x47df10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x47DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF10u;
        // 0x47df14: 0xc92821  addu        $a1, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47df10) {
            ctx->pc = 0x47DE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47de40;
        }
    }
    ctx->pc = 0x47DF18u;
label_47df18:
    // 0x47df18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47df18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47df1c:
    // 0x47df1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47df1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47df20:
    // 0x47df20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47df20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47df24:
    // 0x47df24: 0x3e00008  jr          $ra
label_47df28:
    if (ctx->pc == 0x47DF28u) {
        ctx->pc = 0x47DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF24u;
        // 0x47df28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DF2Cu;
        goto label_47df2c;
    }
    ctx->pc = 0x47DF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DF24u;
        // 0x47df28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47DF2Cu;
label_47df2c:
    // 0x47df2c: 0x0  nop
    ctx->pc = 0x47df2cu;
    // NOP
label_47df30:
    // 0x47df30: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x47df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_47df34:
    // 0x47df34: 0x0  nop
    ctx->pc = 0x47df34u;
    // NOP
    ctx->pc = 0x47df38u;
}
