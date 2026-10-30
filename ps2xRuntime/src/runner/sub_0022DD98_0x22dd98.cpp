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

// Function: sub_0022DD98
// Address: 0x22dd98 - 0x22df88
void sub_0022DD98_0x22dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DD98_0x22dd98");
#endif

    switch (ctx->pc) {
        case 0x22dd98u: goto label_22dd98;
        case 0x22dd9cu: goto label_22dd9c;
        case 0x22dda0u: goto label_22dda0;
        case 0x22dda4u: goto label_22dda4;
        case 0x22dda8u: goto label_22dda8;
        case 0x22ddacu: goto label_22ddac;
        case 0x22ddb0u: goto label_22ddb0;
        case 0x22ddb4u: goto label_22ddb4;
        case 0x22ddb8u: goto label_22ddb8;
        case 0x22ddbcu: goto label_22ddbc;
        case 0x22ddc0u: goto label_22ddc0;
        case 0x22ddc4u: goto label_22ddc4;
        case 0x22ddc8u: goto label_22ddc8;
        case 0x22ddccu: goto label_22ddcc;
        case 0x22ddd0u: goto label_22ddd0;
        case 0x22ddd4u: goto label_22ddd4;
        case 0x22ddd8u: goto label_22ddd8;
        case 0x22dddcu: goto label_22dddc;
        case 0x22dde0u: goto label_22dde0;
        case 0x22dde4u: goto label_22dde4;
        case 0x22dde8u: goto label_22dde8;
        case 0x22ddecu: goto label_22ddec;
        case 0x22ddf0u: goto label_22ddf0;
        case 0x22ddf4u: goto label_22ddf4;
        case 0x22ddf8u: goto label_22ddf8;
        case 0x22ddfcu: goto label_22ddfc;
        case 0x22de00u: goto label_22de00;
        case 0x22de04u: goto label_22de04;
        case 0x22de08u: goto label_22de08;
        case 0x22de0cu: goto label_22de0c;
        case 0x22de10u: goto label_22de10;
        case 0x22de14u: goto label_22de14;
        case 0x22de18u: goto label_22de18;
        case 0x22de1cu: goto label_22de1c;
        case 0x22de20u: goto label_22de20;
        case 0x22de24u: goto label_22de24;
        case 0x22de28u: goto label_22de28;
        case 0x22de2cu: goto label_22de2c;
        case 0x22de30u: goto label_22de30;
        case 0x22de34u: goto label_22de34;
        case 0x22de38u: goto label_22de38;
        case 0x22de3cu: goto label_22de3c;
        case 0x22de40u: goto label_22de40;
        case 0x22de44u: goto label_22de44;
        case 0x22de48u: goto label_22de48;
        case 0x22de4cu: goto label_22de4c;
        case 0x22de50u: goto label_22de50;
        case 0x22de54u: goto label_22de54;
        case 0x22de58u: goto label_22de58;
        case 0x22de5cu: goto label_22de5c;
        case 0x22de60u: goto label_22de60;
        case 0x22de64u: goto label_22de64;
        case 0x22de68u: goto label_22de68;
        case 0x22de6cu: goto label_22de6c;
        case 0x22de70u: goto label_22de70;
        case 0x22de74u: goto label_22de74;
        case 0x22de78u: goto label_22de78;
        case 0x22de7cu: goto label_22de7c;
        case 0x22de80u: goto label_22de80;
        case 0x22de84u: goto label_22de84;
        case 0x22de88u: goto label_22de88;
        case 0x22de8cu: goto label_22de8c;
        case 0x22de90u: goto label_22de90;
        case 0x22de94u: goto label_22de94;
        case 0x22de98u: goto label_22de98;
        case 0x22de9cu: goto label_22de9c;
        case 0x22dea0u: goto label_22dea0;
        case 0x22dea4u: goto label_22dea4;
        case 0x22dea8u: goto label_22dea8;
        case 0x22deacu: goto label_22deac;
        case 0x22deb0u: goto label_22deb0;
        case 0x22deb4u: goto label_22deb4;
        case 0x22deb8u: goto label_22deb8;
        case 0x22debcu: goto label_22debc;
        case 0x22dec0u: goto label_22dec0;
        case 0x22dec4u: goto label_22dec4;
        case 0x22dec8u: goto label_22dec8;
        case 0x22deccu: goto label_22decc;
        case 0x22ded0u: goto label_22ded0;
        case 0x22ded4u: goto label_22ded4;
        case 0x22ded8u: goto label_22ded8;
        case 0x22dedcu: goto label_22dedc;
        case 0x22dee0u: goto label_22dee0;
        case 0x22dee4u: goto label_22dee4;
        case 0x22dee8u: goto label_22dee8;
        case 0x22deecu: goto label_22deec;
        case 0x22def0u: goto label_22def0;
        case 0x22def4u: goto label_22def4;
        case 0x22def8u: goto label_22def8;
        case 0x22defcu: goto label_22defc;
        case 0x22df00u: goto label_22df00;
        case 0x22df04u: goto label_22df04;
        case 0x22df08u: goto label_22df08;
        case 0x22df0cu: goto label_22df0c;
        case 0x22df10u: goto label_22df10;
        case 0x22df14u: goto label_22df14;
        case 0x22df18u: goto label_22df18;
        case 0x22df1cu: goto label_22df1c;
        case 0x22df20u: goto label_22df20;
        case 0x22df24u: goto label_22df24;
        case 0x22df28u: goto label_22df28;
        case 0x22df2cu: goto label_22df2c;
        case 0x22df30u: goto label_22df30;
        case 0x22df34u: goto label_22df34;
        case 0x22df38u: goto label_22df38;
        case 0x22df3cu: goto label_22df3c;
        case 0x22df40u: goto label_22df40;
        case 0x22df44u: goto label_22df44;
        case 0x22df48u: goto label_22df48;
        case 0x22df4cu: goto label_22df4c;
        case 0x22df50u: goto label_22df50;
        case 0x22df54u: goto label_22df54;
        case 0x22df58u: goto label_22df58;
        case 0x22df5cu: goto label_22df5c;
        case 0x22df60u: goto label_22df60;
        case 0x22df64u: goto label_22df64;
        case 0x22df68u: goto label_22df68;
        case 0x22df6cu: goto label_22df6c;
        case 0x22df70u: goto label_22df70;
        case 0x22df74u: goto label_22df74;
        case 0x22df78u: goto label_22df78;
        case 0x22df7cu: goto label_22df7c;
        case 0x22df80u: goto label_22df80;
        case 0x22df84u: goto label_22df84;
        default: break;
    }

    ctx->pc = 0x22dd98u;

label_22dd98:
    // 0x22dd98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22dd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22dd9c:
    // 0x22dd9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22dda0:
    // 0x22dda0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22dda0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22dda4:
    // 0x22dda4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22dda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22dda8:
    // 0x22dda8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22dda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22ddac:
    // 0x22ddac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_22ddb0:
    // 0x22ddb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22ddb4:
    // 0x22ddb4: 0xc088ac6  jal         func_222B18
label_22ddb8:
    if (ctx->pc == 0x22DDB8u) {
        ctx->pc = 0x22DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDB4u;
        // 0x22ddb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DDBCu;
        goto label_22ddbc;
    }
    ctx->pc = 0x22DDB4u;
    SET_GPR_U32(ctx, 31, 0x22DDBCu);
    ctx->pc = 0x22DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DDB4u;
    // 0x22ddb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DDB4u, 0x22DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDBCu;
label_22ddbc:
    // 0x22ddbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22ddc0:
    // 0x22ddc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ddc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22ddc4:
    // 0x22ddc4: 0xc088ac6  jal         func_222B18
label_22ddc8:
    if (ctx->pc == 0x22DDC8u) {
        ctx->pc = 0x22DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDC4u;
        // 0x22ddc8: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DDCCu;
        goto label_22ddcc;
    }
    ctx->pc = 0x22DDC4u;
    SET_GPR_U32(ctx, 31, 0x22DDCCu);
    ctx->pc = 0x22DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DDC4u;
    // 0x22ddc8: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DDC4u, 0x22DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDCCu;
label_22ddcc:
    // 0x22ddcc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x22ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_22ddd0:
    // 0x22ddd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ddd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22ddd4:
    // 0x22ddd4: 0x8ca302c0  lw          $v1, 0x2C0($a1)
    ctx->pc = 0x22ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 704)));
label_22ddd8:
    // 0x22ddd8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x22ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_22dddc:
    // 0x22dddc: 0xc088ac6  jal         func_222B18
label_22dde0:
    if (ctx->pc == 0x22DDE0u) {
        ctx->pc = 0x22DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDDCu;
        // 0x22dde0: 0xa4430040  sh          $v1, 0x40($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DDE4u;
        goto label_22dde4;
    }
    ctx->pc = 0x22DDDCu;
    SET_GPR_U32(ctx, 31, 0x22DDE4u);
    ctx->pc = 0x22DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DDDCu;
    // 0x22dde0: 0xa4430040  sh          $v1, 0x40($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DDDCu, 0x22DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDE4u;
label_22dde4:
    // 0x22dde4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22dde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22dde8:
    // 0x22dde8: 0xc088ac6  jal         func_222B18
label_22ddec:
    if (ctx->pc == 0x22DDECu) {
        ctx->pc = 0x22DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDE8u;
        // 0x22ddec: 0xa040004c  sb          $zero, 0x4C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DDF0u;
        goto label_22ddf0;
    }
    ctx->pc = 0x22DDE8u;
    SET_GPR_U32(ctx, 31, 0x22DDF0u);
    ctx->pc = 0x22DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DDE8u;
    // 0x22ddec: 0xa040004c  sb          $zero, 0x4C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DDE8u, 0x22DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDF0u;
label_22ddf0:
    // 0x22ddf0: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x22ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_22ddf4:
    // 0x22ddf4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22ddf8:
    // 0x22ddf8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22ddf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22ddfc:
    // 0x22ddfc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22ddfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22de00:
    // 0x22de00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22de00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22de04:
    // 0x22de04: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x22de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22de08:
    // 0x22de08: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x22de08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
label_22de0c:
    // 0x22de0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22de10:
    // 0x22de10: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22de10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22de14:
    // 0x22de14: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22de18:
    // 0x22de18: 0x40f809  jalr        $v0
label_22de1c:
    if (ctx->pc == 0x22DE1Cu) {
        ctx->pc = 0x22DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE18u;
        // 0x22de1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE20u;
        goto label_22de20;
    }
    ctx->pc = 0x22DE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22DE20u);
        ctx->pc = 0x22DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE18u;
        // 0x22de1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DE18u, 0x22DE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22DE20u;
label_22de20:
    // 0x22de20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22de20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22de24:
    // 0x22de24: 0xc089988  jal         func_226620
label_22de28:
    if (ctx->pc == 0x22DE28u) {
        ctx->pc = 0x22DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE24u;
        // 0x22de28: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE2Cu;
        goto label_22de2c;
    }
    ctx->pc = 0x22DE24u;
    SET_GPR_U32(ctx, 31, 0x22DE2Cu);
    ctx->pc = 0x22DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE24u;
    // 0x22de28: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22DE24u, 0x22DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE2Cu;
label_22de2c:
    // 0x22de2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22de30:
    // 0x22de30: 0xc089974  jal         func_2265D0
label_22de34:
    if (ctx->pc == 0x22DE34u) {
        ctx->pc = 0x22DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE30u;
        // 0x22de34: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE38u;
        goto label_22de38;
    }
    ctx->pc = 0x22DE30u;
    SET_GPR_U32(ctx, 31, 0x22DE38u);
    ctx->pc = 0x22DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE30u;
    // 0x22de34: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22DE30u, 0x22DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE38u;
label_22de38:
    // 0x22de38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22de38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22de3c:
    // 0x22de3c: 0xc089c20  jal         func_227080
label_22de40:
    if (ctx->pc == 0x22DE40u) {
        ctx->pc = 0x22DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE3Cu;
        // 0x22de40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE44u;
        goto label_22de44;
    }
    ctx->pc = 0x22DE3Cu;
    SET_GPR_U32(ctx, 31, 0x22DE44u);
    ctx->pc = 0x22DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE3Cu;
    // 0x22de40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22DE3Cu, 0x22DE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE44u;
label_22de44:
    // 0x22de44: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x22de44u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_22de48:
    // 0x22de48: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x22de48u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_22de4c:
    // 0x22de4c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_22de50:
    if (ctx->pc == 0x22DE50u) {
        ctx->pc = 0x22DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE4Cu;
        // 0x22de50: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE54u;
        goto label_22de54;
    }
    ctx->pc = 0x22DE4Cu;
    {
        const bool branch_taken_0x22de4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de4c) {
            ctx->pc = 0x22DE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE4Cu;
            // 0x22de50: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DEBCu;
            goto label_22debc;
        }
    }
    ctx->pc = 0x22DE54u;
label_22de54:
    // 0x22de54: 0xc047f9a  jal         func_11FE68
label_22de58:
    if (ctx->pc == 0x22DE58u) {
        ctx->pc = 0x22DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE54u;
        // 0x22de58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE5Cu;
        goto label_22de5c;
    }
    ctx->pc = 0x22DE54u;
    SET_GPR_U32(ctx, 31, 0x22DE5Cu);
    ctx->pc = 0x22DE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE54u;
    // 0x22de58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE68u, 0x22DE54u, 0x22DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE5Cu;
label_22de5c:
    // 0x22de5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22de5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22de60:
    // 0x22de60: 0x52600016  beql        $s3, $zero, . + 4 + (0x16 << 2)
label_22de64:
    if (ctx->pc == 0x22DE64u) {
        ctx->pc = 0x22DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE60u;
        // 0x22de64: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE68u;
        goto label_22de68;
    }
    ctx->pc = 0x22DE60u;
    {
        const bool branch_taken_0x22de60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de60) {
            ctx->pc = 0x22DE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE60u;
            // 0x22de64: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DEBCu;
            goto label_22debc;
        }
    }
    ctx->pc = 0x22DE68u;
label_22de68:
    // 0x22de68: 0xc047e72  jal         func_11F9C8
label_22de6c:
    if (ctx->pc == 0x22DE6Cu) {
        ctx->pc = 0x22DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE68u;
        // 0x22de6c: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE70u;
        goto label_22de70;
    }
    ctx->pc = 0x22DE68u;
    SET_GPR_U32(ctx, 31, 0x22DE70u);
    ctx->pc = 0x22DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE68u;
    // 0x22de6c: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22DE68u, 0x22DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE70u;
label_22de70:
    // 0x22de70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22de74:
    // 0x22de74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22de74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22de78:
    // 0x22de78: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22de78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22de7c:
    // 0x22de7c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22de80:
    // 0x22de80: 0x40f809  jalr        $v0
label_22de84:
    if (ctx->pc == 0x22DE84u) {
        ctx->pc = 0x22DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE80u;
        // 0x22de84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE88u;
        goto label_22de88;
    }
    ctx->pc = 0x22DE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22DE88u);
        ctx->pc = 0x22DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE80u;
        // 0x22de84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DE80u, 0x22DE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22DE88u;
label_22de88:
    // 0x22de88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22de8c:
    // 0x22de8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22de8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22de90:
    // 0x22de90: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22de90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22de94:
    // 0x22de94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22de98:
    // 0x22de98: 0x40f809  jalr        $v0
label_22de9c:
    if (ctx->pc == 0x22DE9Cu) {
        ctx->pc = 0x22DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE98u;
        // 0x22de9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEA0u;
        goto label_22dea0;
    }
    ctx->pc = 0x22DE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22DEA0u);
        ctx->pc = 0x22DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE98u;
        // 0x22de9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DE98u, 0x22DEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22DEA0u;
label_22dea0:
    // 0x22dea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22dea4:
    // 0x22dea4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22dea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22dea8:
    // 0x22dea8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22dea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22deac:
    // 0x22deac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22deacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22deb0:
    // 0x22deb0: 0xc04d86a  jal         func_1361A8
label_22deb4:
    if (ctx->pc == 0x22DEB4u) {
        ctx->pc = 0x22DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEB0u;
        // 0x22deb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEB8u;
        goto label_22deb8;
    }
    ctx->pc = 0x22DEB0u;
    SET_GPR_U32(ctx, 31, 0x22DEB8u);
    ctx->pc = 0x22DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEB0u;
    // 0x22deb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A8u, 0x22DEB0u, 0x22DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEB8u;
label_22deb8:
    // 0x22deb8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x22deb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_22debc:
    // 0x22debc: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x22debcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_22dec0:
    // 0x22dec0: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22dec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22dec4:
    // 0x22dec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22dec8:
    if (ctx->pc == 0x22DEC8u) {
        ctx->pc = 0x22DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEC4u;
        // 0x22dec8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DECCu;
        goto label_22decc;
    }
    ctx->pc = 0x22DEC4u;
    {
        const bool branch_taken_0x22dec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEC4u;
        // 0x22dec8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dec4) {
            ctx->pc = 0x22DED8u;
            goto label_22ded8;
        }
    }
    ctx->pc = 0x22DECCu;
label_22decc:
    // 0x22decc: 0xc107444  jal         func_41D110
label_22ded0:
    if (ctx->pc == 0x22DED0u) {
        ctx->pc = 0x22DED4u;
        goto label_22ded4;
    }
    ctx->pc = 0x22DECCu;
    SET_GPR_U32(ctx, 31, 0x22DED4u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22DECCu, 0x22DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DED4u;
label_22ded4:
    // 0x22ded4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22ded4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22ded8:
    // 0x22ded8: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_22dedc:
    if (ctx->pc == 0x22DEDCu) {
        ctx->pc = 0x22DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DED8u;
        // 0x22dedc: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEE0u;
        goto label_22dee0;
    }
    ctx->pc = 0x22DED8u;
    {
        const bool branch_taken_0x22ded8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ded8) {
            ctx->pc = 0x22DEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DED8u;
            // 0x22dedc: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DF50u;
            goto label_22df50;
        }
    }
    ctx->pc = 0x22DEE0u;
label_22dee0:
    // 0x22dee0: 0xc073a8e  jal         func_1CEA38
label_22dee4:
    if (ctx->pc == 0x22DEE4u) {
        ctx->pc = 0x22DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEE0u;
        // 0x22dee4: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEE8u;
        goto label_22dee8;
    }
    ctx->pc = 0x22DEE0u;
    SET_GPR_U32(ctx, 31, 0x22DEE8u);
    ctx->pc = 0x22DEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEE0u;
    // 0x22dee4: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22DEE0u, 0x22DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEE8u;
label_22dee8:
    // 0x22dee8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_22deec:
    if (ctx->pc == 0x22DEECu) {
        ctx->pc = 0x22DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEE8u;
        // 0x22deec: 0x8e11489c  lw          $s1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEF0u;
        goto label_22def0;
    }
    ctx->pc = 0x22DEE8u;
    {
        const bool branch_taken_0x22dee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEE8u;
        // 0x22deec: 0x8e11489c  lw          $s1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dee8) {
            ctx->pc = 0x22DF4Cu;
            goto label_22df4c;
        }
    }
    ctx->pc = 0x22DEF0u;
label_22def0:
    // 0x22def0: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x22def0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_22def4:
    // 0x22def4: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x22def4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
label_22def8:
    // 0x22def8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22def8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22defc:
    // 0x22defc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22defcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22df00:
    // 0x22df00: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22df00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22df04:
    // 0x22df04: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_22df08:
    if (ctx->pc == 0x22DF08u) {
        ctx->pc = 0x22DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF04u;
        // 0x22df08: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF0Cu;
        goto label_22df0c;
    }
    ctx->pc = 0x22DF04u;
    {
        const bool branch_taken_0x22df04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF04u;
        // 0x22df08: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df04) {
            ctx->pc = 0x22DF40u;
            goto label_22df40;
        }
    }
    ctx->pc = 0x22DF0Cu;
label_22df0c:
    // 0x22df0c: 0xc136ad6  jal         func_4DAB58
label_22df10:
    if (ctx->pc == 0x22DF10u) {
        ctx->pc = 0x22DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF0Cu;
        // 0x22df10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF14u;
        goto label_22df14;
    }
    ctx->pc = 0x22DF0Cu;
    SET_GPR_U32(ctx, 31, 0x22DF14u);
    ctx->pc = 0x22DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF0Cu;
    // 0x22df10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x22DF0Cu, 0x22DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF14u;
label_22df14:
    // 0x22df14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22df14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22df18:
    // 0x22df18: 0xc136ad4  jal         func_4DAB50
label_22df1c:
    if (ctx->pc == 0x22DF1Cu) {
        ctx->pc = 0x22DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF18u;
        // 0x22df1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF20u;
        goto label_22df20;
    }
    ctx->pc = 0x22DF18u;
    SET_GPR_U32(ctx, 31, 0x22DF20u);
    ctx->pc = 0x22DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF18u;
    // 0x22df1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x22DF18u, 0x22DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF20u;
label_22df20:
    // 0x22df20: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x22df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_22df24:
    // 0x22df24: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x22df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_22df28:
    // 0x22df28: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22df28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22df2c:
    // 0x22df2c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22df2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22df30:
    // 0x22df30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22df34:
    // 0x22df34: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
label_22df38:
    if (ctx->pc == 0x22DF38u) {
        ctx->pc = 0x22DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF34u;
        // 0x22df38: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF3Cu;
        goto label_22df3c;
    }
    ctx->pc = 0x22DF34u;
    {
        const bool branch_taken_0x22df34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x22df34) {
            ctx->pc = 0x22DF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DF34u;
            // 0x22df38: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DF50u;
            goto label_22df50;
        }
    }
    ctx->pc = 0x22DF3Cu;
label_22df3c:
    // 0x22df3c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x22df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_22df40:
    // 0x22df40: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x22df40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22df44:
    // 0x22df44: 0xc07387a  jal         func_1CE1E8
label_22df48:
    if (ctx->pc == 0x22DF48u) {
        ctx->pc = 0x22DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF44u;
        // 0x22df48: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF4Cu;
        goto label_22df4c;
    }
    ctx->pc = 0x22DF44u;
    SET_GPR_U32(ctx, 31, 0x22DF4Cu);
    ctx->pc = 0x22DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF44u;
    // 0x22df48: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x22DF44u, 0x22DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF4Cu;
label_22df4c:
    // 0x22df4c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x22df4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_22df50:
    // 0x22df50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22df50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22df54:
    // 0x22df54: 0xc08b742  jal         func_22DD08
label_22df58:
    if (ctx->pc == 0x22DF58u) {
        ctx->pc = 0x22DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF54u;
        // 0x22df58: 0x26100840  addiu       $s0, $s0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF5Cu;
        goto label_22df5c;
    }
    ctx->pc = 0x22DF54u;
    SET_GPR_U32(ctx, 31, 0x22DF5Cu);
    ctx->pc = 0x22DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF54u;
    // 0x22df58: 0x26100840  addiu       $s0, $s0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DD08u, 0x22DF54u, 0x22DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF5Cu;
label_22df5c:
    // 0x22df5c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x22df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_22df60:
    // 0x22df60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22df64:
    // 0x22df64: 0xc06cf00  jal         func_1B3C00
label_22df68:
    if (ctx->pc == 0x22DF68u) {
        ctx->pc = 0x22DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF64u;
        // 0x22df68: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF6Cu;
        goto label_22df6c;
    }
    ctx->pc = 0x22DF64u;
    SET_GPR_U32(ctx, 31, 0x22DF6Cu);
    ctx->pc = 0x22DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF64u;
    // 0x22df68: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C00u, 0x22DF64u, 0x22DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF6Cu;
label_22df6c:
    // 0x22df6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22df6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22df70:
    // 0x22df70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22df70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22df74:
    // 0x22df74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22df74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22df78:
    // 0x22df78: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22df78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22df7c:
    // 0x22df7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22df7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22df80:
    // 0x22df80: 0x3e00008  jr          $ra
label_22df84:
    if (ctx->pc == 0x22DF84u) {
        ctx->pc = 0x22DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF80u;
        // 0x22df84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF88u;
        goto label_fallthrough_0x22df80;
    }
    ctx->pc = 0x22DF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF80u;
        // 0x22df84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22df80:
    ctx->pc = 0x22DF88u;
}
