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

// Function: sub_003DBCF0
// Address: 0x3dbcf0 - 0x3dc018
void sub_003DBCF0_0x3dbcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBCF0_0x3dbcf0");
#endif

    switch (ctx->pc) {
        case 0x3dbcf0u: goto label_3dbcf0;
        case 0x3dbcf4u: goto label_3dbcf4;
        case 0x3dbcf8u: goto label_3dbcf8;
        case 0x3dbcfcu: goto label_3dbcfc;
        case 0x3dbd00u: goto label_3dbd00;
        case 0x3dbd04u: goto label_3dbd04;
        case 0x3dbd08u: goto label_3dbd08;
        case 0x3dbd0cu: goto label_3dbd0c;
        case 0x3dbd10u: goto label_3dbd10;
        case 0x3dbd14u: goto label_3dbd14;
        case 0x3dbd18u: goto label_3dbd18;
        case 0x3dbd1cu: goto label_3dbd1c;
        case 0x3dbd20u: goto label_3dbd20;
        case 0x3dbd24u: goto label_3dbd24;
        case 0x3dbd28u: goto label_3dbd28;
        case 0x3dbd2cu: goto label_3dbd2c;
        case 0x3dbd30u: goto label_3dbd30;
        case 0x3dbd34u: goto label_3dbd34;
        case 0x3dbd38u: goto label_3dbd38;
        case 0x3dbd3cu: goto label_3dbd3c;
        case 0x3dbd40u: goto label_3dbd40;
        case 0x3dbd44u: goto label_3dbd44;
        case 0x3dbd48u: goto label_3dbd48;
        case 0x3dbd4cu: goto label_3dbd4c;
        case 0x3dbd50u: goto label_3dbd50;
        case 0x3dbd54u: goto label_3dbd54;
        case 0x3dbd58u: goto label_3dbd58;
        case 0x3dbd5cu: goto label_3dbd5c;
        case 0x3dbd60u: goto label_3dbd60;
        case 0x3dbd64u: goto label_3dbd64;
        case 0x3dbd68u: goto label_3dbd68;
        case 0x3dbd6cu: goto label_3dbd6c;
        case 0x3dbd70u: goto label_3dbd70;
        case 0x3dbd74u: goto label_3dbd74;
        case 0x3dbd78u: goto label_3dbd78;
        case 0x3dbd7cu: goto label_3dbd7c;
        case 0x3dbd80u: goto label_3dbd80;
        case 0x3dbd84u: goto label_3dbd84;
        case 0x3dbd88u: goto label_3dbd88;
        case 0x3dbd8cu: goto label_3dbd8c;
        case 0x3dbd90u: goto label_3dbd90;
        case 0x3dbd94u: goto label_3dbd94;
        case 0x3dbd98u: goto label_3dbd98;
        case 0x3dbd9cu: goto label_3dbd9c;
        case 0x3dbda0u: goto label_3dbda0;
        case 0x3dbda4u: goto label_3dbda4;
        case 0x3dbda8u: goto label_3dbda8;
        case 0x3dbdacu: goto label_3dbdac;
        case 0x3dbdb0u: goto label_3dbdb0;
        case 0x3dbdb4u: goto label_3dbdb4;
        case 0x3dbdb8u: goto label_3dbdb8;
        case 0x3dbdbcu: goto label_3dbdbc;
        case 0x3dbdc0u: goto label_3dbdc0;
        case 0x3dbdc4u: goto label_3dbdc4;
        case 0x3dbdc8u: goto label_3dbdc8;
        case 0x3dbdccu: goto label_3dbdcc;
        case 0x3dbdd0u: goto label_3dbdd0;
        case 0x3dbdd4u: goto label_3dbdd4;
        case 0x3dbdd8u: goto label_3dbdd8;
        case 0x3dbddcu: goto label_3dbddc;
        case 0x3dbde0u: goto label_3dbde0;
        case 0x3dbde4u: goto label_3dbde4;
        case 0x3dbde8u: goto label_3dbde8;
        case 0x3dbdecu: goto label_3dbdec;
        case 0x3dbdf0u: goto label_3dbdf0;
        case 0x3dbdf4u: goto label_3dbdf4;
        case 0x3dbdf8u: goto label_3dbdf8;
        case 0x3dbdfcu: goto label_3dbdfc;
        case 0x3dbe00u: goto label_3dbe00;
        case 0x3dbe04u: goto label_3dbe04;
        case 0x3dbe08u: goto label_3dbe08;
        case 0x3dbe0cu: goto label_3dbe0c;
        case 0x3dbe10u: goto label_3dbe10;
        case 0x3dbe14u: goto label_3dbe14;
        case 0x3dbe18u: goto label_3dbe18;
        case 0x3dbe1cu: goto label_3dbe1c;
        case 0x3dbe20u: goto label_3dbe20;
        case 0x3dbe24u: goto label_3dbe24;
        case 0x3dbe28u: goto label_3dbe28;
        case 0x3dbe2cu: goto label_3dbe2c;
        case 0x3dbe30u: goto label_3dbe30;
        case 0x3dbe34u: goto label_3dbe34;
        case 0x3dbe38u: goto label_3dbe38;
        case 0x3dbe3cu: goto label_3dbe3c;
        case 0x3dbe40u: goto label_3dbe40;
        case 0x3dbe44u: goto label_3dbe44;
        case 0x3dbe48u: goto label_3dbe48;
        case 0x3dbe4cu: goto label_3dbe4c;
        case 0x3dbe50u: goto label_3dbe50;
        case 0x3dbe54u: goto label_3dbe54;
        case 0x3dbe58u: goto label_3dbe58;
        case 0x3dbe5cu: goto label_3dbe5c;
        case 0x3dbe60u: goto label_3dbe60;
        case 0x3dbe64u: goto label_3dbe64;
        case 0x3dbe68u: goto label_3dbe68;
        case 0x3dbe6cu: goto label_3dbe6c;
        case 0x3dbe70u: goto label_3dbe70;
        case 0x3dbe74u: goto label_3dbe74;
        case 0x3dbe78u: goto label_3dbe78;
        case 0x3dbe7cu: goto label_3dbe7c;
        case 0x3dbe80u: goto label_3dbe80;
        case 0x3dbe84u: goto label_3dbe84;
        case 0x3dbe88u: goto label_3dbe88;
        case 0x3dbe8cu: goto label_3dbe8c;
        case 0x3dbe90u: goto label_3dbe90;
        case 0x3dbe94u: goto label_3dbe94;
        case 0x3dbe98u: goto label_3dbe98;
        case 0x3dbe9cu: goto label_3dbe9c;
        case 0x3dbea0u: goto label_3dbea0;
        case 0x3dbea4u: goto label_3dbea4;
        case 0x3dbea8u: goto label_3dbea8;
        case 0x3dbeacu: goto label_3dbeac;
        case 0x3dbeb0u: goto label_3dbeb0;
        case 0x3dbeb4u: goto label_3dbeb4;
        case 0x3dbeb8u: goto label_3dbeb8;
        case 0x3dbebcu: goto label_3dbebc;
        case 0x3dbec0u: goto label_3dbec0;
        case 0x3dbec4u: goto label_3dbec4;
        case 0x3dbec8u: goto label_3dbec8;
        case 0x3dbeccu: goto label_3dbecc;
        case 0x3dbed0u: goto label_3dbed0;
        case 0x3dbed4u: goto label_3dbed4;
        case 0x3dbed8u: goto label_3dbed8;
        case 0x3dbedcu: goto label_3dbedc;
        case 0x3dbee0u: goto label_3dbee0;
        case 0x3dbee4u: goto label_3dbee4;
        case 0x3dbee8u: goto label_3dbee8;
        case 0x3dbeecu: goto label_3dbeec;
        case 0x3dbef0u: goto label_3dbef0;
        case 0x3dbef4u: goto label_3dbef4;
        case 0x3dbef8u: goto label_3dbef8;
        case 0x3dbefcu: goto label_3dbefc;
        case 0x3dbf00u: goto label_3dbf00;
        case 0x3dbf04u: goto label_3dbf04;
        case 0x3dbf08u: goto label_3dbf08;
        case 0x3dbf0cu: goto label_3dbf0c;
        case 0x3dbf10u: goto label_3dbf10;
        case 0x3dbf14u: goto label_3dbf14;
        case 0x3dbf18u: goto label_3dbf18;
        case 0x3dbf1cu: goto label_3dbf1c;
        case 0x3dbf20u: goto label_3dbf20;
        case 0x3dbf24u: goto label_3dbf24;
        case 0x3dbf28u: goto label_3dbf28;
        case 0x3dbf2cu: goto label_3dbf2c;
        case 0x3dbf30u: goto label_3dbf30;
        case 0x3dbf34u: goto label_3dbf34;
        case 0x3dbf38u: goto label_3dbf38;
        case 0x3dbf3cu: goto label_3dbf3c;
        case 0x3dbf40u: goto label_3dbf40;
        case 0x3dbf44u: goto label_3dbf44;
        case 0x3dbf48u: goto label_3dbf48;
        case 0x3dbf4cu: goto label_3dbf4c;
        case 0x3dbf50u: goto label_3dbf50;
        case 0x3dbf54u: goto label_3dbf54;
        case 0x3dbf58u: goto label_3dbf58;
        case 0x3dbf5cu: goto label_3dbf5c;
        case 0x3dbf60u: goto label_3dbf60;
        case 0x3dbf64u: goto label_3dbf64;
        case 0x3dbf68u: goto label_3dbf68;
        case 0x3dbf6cu: goto label_3dbf6c;
        case 0x3dbf70u: goto label_3dbf70;
        case 0x3dbf74u: goto label_3dbf74;
        case 0x3dbf78u: goto label_3dbf78;
        case 0x3dbf7cu: goto label_3dbf7c;
        case 0x3dbf80u: goto label_3dbf80;
        case 0x3dbf84u: goto label_3dbf84;
        case 0x3dbf88u: goto label_3dbf88;
        case 0x3dbf8cu: goto label_3dbf8c;
        case 0x3dbf90u: goto label_3dbf90;
        case 0x3dbf94u: goto label_3dbf94;
        case 0x3dbf98u: goto label_3dbf98;
        case 0x3dbf9cu: goto label_3dbf9c;
        case 0x3dbfa0u: goto label_3dbfa0;
        case 0x3dbfa4u: goto label_3dbfa4;
        case 0x3dbfa8u: goto label_3dbfa8;
        case 0x3dbfacu: goto label_3dbfac;
        case 0x3dbfb0u: goto label_3dbfb0;
        case 0x3dbfb4u: goto label_3dbfb4;
        case 0x3dbfb8u: goto label_3dbfb8;
        case 0x3dbfbcu: goto label_3dbfbc;
        case 0x3dbfc0u: goto label_3dbfc0;
        case 0x3dbfc4u: goto label_3dbfc4;
        case 0x3dbfc8u: goto label_3dbfc8;
        case 0x3dbfccu: goto label_3dbfcc;
        case 0x3dbfd0u: goto label_3dbfd0;
        case 0x3dbfd4u: goto label_3dbfd4;
        case 0x3dbfd8u: goto label_3dbfd8;
        case 0x3dbfdcu: goto label_3dbfdc;
        case 0x3dbfe0u: goto label_3dbfe0;
        case 0x3dbfe4u: goto label_3dbfe4;
        case 0x3dbfe8u: goto label_3dbfe8;
        case 0x3dbfecu: goto label_3dbfec;
        case 0x3dbff0u: goto label_3dbff0;
        case 0x3dbff4u: goto label_3dbff4;
        case 0x3dbff8u: goto label_3dbff8;
        case 0x3dbffcu: goto label_3dbffc;
        case 0x3dc000u: goto label_3dc000;
        case 0x3dc004u: goto label_3dc004;
        case 0x3dc008u: goto label_3dc008;
        case 0x3dc00cu: goto label_3dc00c;
        case 0x3dc010u: goto label_3dc010;
        case 0x3dc014u: goto label_3dc014;
        default: break;
    }

    ctx->pc = 0x3dbcf0u;

label_3dbcf0:
    // 0x3dbcf0: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3dbcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3dbcf4:
    // 0x3dbcf4: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3dbcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3dbcf8:
    // 0x3dbcf8: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3dbcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3dbcfc:
    // 0x3dbcfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dbcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dbd00:
    // 0x3dbd00: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3dbd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3dbd04:
    // 0x3dbd04: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x3dbd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_3dbd08:
    // 0x3dbd08: 0x7fb40470  sq          $s4, 0x470($sp)
    ctx->pc = 0x3dbd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 20));
label_3dbd0c:
    // 0x3dbd0c: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x3dbd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_3dbd10:
    // 0x3dbd10: 0xe7b404c0  swc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3dbd10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3dbd14:
    // 0x3dbd14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dbd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dbd18:
    // 0x3dbd18: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dbd18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dbd1c:
    // 0x3dbd1c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dbd20:
    // 0x3dbd20: 0x40f809  jalr        $v0
label_3dbd24:
    if (ctx->pc == 0x3DBD24u) {
        ctx->pc = 0x3DBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD20u;
        // 0x3dbd24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBD28u;
        goto label_3dbd28;
    }
    ctx->pc = 0x3DBD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DBD28u);
        ctx->pc = 0x3DBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD20u;
        // 0x3dbd24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBD20u, 0x3DBD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DBD28u;
label_3dbd28:
    // 0x3dbd28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dbd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dbd2c:
    // 0x3dbd2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3dbd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dbd30:
    // 0x3dbd30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3dbd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dbd34:
    // 0x3dbd34: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3dbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3dbd38:
    // 0x3dbd38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3dbd3c:
    // 0x3dbd3c: 0x0  nop
    ctx->pc = 0x3dbd3cu;
    // NOP
label_3dbd40:
    // 0x3dbd40: 0x0  nop
    ctx->pc = 0x3dbd40u;
    // NOP
label_3dbd44:
    // 0x3dbd44: 0x0  nop
    ctx->pc = 0x3dbd44u;
    // NOP
label_3dbd48:
    // 0x3dbd48: 0x0  nop
    ctx->pc = 0x3dbd48u;
    // NOP
label_3dbd4c:
    // 0x3dbd4c: 0x0  nop
    ctx->pc = 0x3dbd4cu;
    // NOP
label_3dbd50:
    // 0x3dbd50: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3dbd54:
    if (ctx->pc == 0x3DBD54u) {
        ctx->pc = 0x3DBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD50u;
        // 0x3dbd54: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBD58u;
        goto label_3dbd58;
    }
    ctx->pc = 0x3DBD50u;
    {
        const bool branch_taken_0x3dbd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD50u;
        // 0x3dbd54: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbd50) {
            ctx->pc = 0x3DBD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dbd40;
        }
    }
    ctx->pc = 0x3DBD58u;
label_3dbd58:
    // 0x3dbd58: 0xc138ddc  jal         func_4E3770
label_3dbd5c:
    if (ctx->pc == 0x3DBD5Cu) {
        ctx->pc = 0x3DBD60u;
        goto label_3dbd60;
    }
    ctx->pc = 0x3DBD58u;
    SET_GPR_U32(ctx, 31, 0x3DBD60u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DBD58u, 0x3DBD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBD60u;
label_3dbd60:
    // 0x3dbd60: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3dbd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3dbd64:
    // 0x3dbd64: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3dbd68:
    if (ctx->pc == 0x3DBD68u) {
        ctx->pc = 0x3DBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD64u;
        // 0x3dbd68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBD6Cu;
        goto label_3dbd6c;
    }
    ctx->pc = 0x3DBD64u;
    {
        const bool branch_taken_0x3dbd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD64u;
        // 0x3dbd68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbd64) {
            ctx->pc = 0x3DBD94u;
            goto label_3dbd94;
        }
    }
    ctx->pc = 0x3DBD6Cu;
label_3dbd6c:
    // 0x3dbd6c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3dbd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3dbd70:
    // 0x3dbd70: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3dbd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3dbd74:
    // 0x3dbd74: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3dbd74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3dbd78:
    // 0x3dbd78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dbd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dbd7c:
    // 0x3dbd7c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3dbd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3dbd80:
    // 0x3dbd80: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3dbd80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dbd84:
    // 0x3dbd84: 0xc0cd518  jal         func_335460
label_3dbd88:
    if (ctx->pc == 0x3DBD88u) {
        ctx->pc = 0x3DBD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD84u;
        // 0x3dbd88: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBD8Cu;
        goto label_3dbd8c;
    }
    ctx->pc = 0x3DBD84u;
    SET_GPR_U32(ctx, 31, 0x3DBD8Cu);
    ctx->pc = 0x3DBD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBD84u;
    // 0x3dbd88: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DBD84u, 0x3DBD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBD8Cu;
label_3dbd8c:
    // 0x3dbd8c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3dbd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3dbd90:
    // 0x3dbd90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3dbd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3dbd94:
    // 0x3dbd94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dbd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dbd98:
    // 0x3dbd98: 0x24521730  addiu       $s2, $v0, 0x1730
    ctx->pc = 0x3dbd98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_3dbd9c:
    // 0x3dbd9c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3dbd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3dbda0:
    // 0x3dbda0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3dbda0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3dbda4:
    // 0x3dbda4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3dbda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dbda8:
    // 0x3dbda8: 0xc0f3222  jal         func_3CC888
label_3dbdac:
    if (ctx->pc == 0x3DBDACu) {
        ctx->pc = 0x3DBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDA8u;
        // 0x3dbdac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBDB0u;
        goto label_3dbdb0;
    }
    ctx->pc = 0x3DBDA8u;
    SET_GPR_U32(ctx, 31, 0x3DBDB0u);
    ctx->pc = 0x3DBDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBDA8u;
    // 0x3dbdac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3DBDA8u, 0x3DBDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBDB0u;
label_3dbdb0:
    // 0x3dbdb0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3dbdb0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3dbdb4:
    // 0x3dbdb4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3dbdb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dbdb8:
    // 0x3dbdb8: 0x0  nop
    ctx->pc = 0x3dbdb8u;
    // NOP
label_3dbdbc:
    // 0x3dbdbc: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_3dbdc0:
    if (ctx->pc == 0x3DBDC0u) {
        ctx->pc = 0x3DBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDBCu;
        // 0x3dbdc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBDC4u;
        goto label_3dbdc4;
    }
    ctx->pc = 0x3DBDBCu;
    {
        const bool branch_taken_0x3dbdbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dbdbc) {
            ctx->pc = 0x3DBDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBDBCu;
            // 0x3dbdc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBDE8u;
            goto label_3dbde8;
        }
    }
    ctx->pc = 0x3DBDC4u;
label_3dbdc4:
    // 0x3dbdc4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3dbdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3dbdc8:
    // 0x3dbdc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dbdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dbdcc:
    // 0x3dbdcc: 0xc0f3222  jal         func_3CC888
label_3dbdd0:
    if (ctx->pc == 0x3DBDD0u) {
        ctx->pc = 0x3DBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDCCu;
        // 0x3dbdd0: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBDD4u;
        goto label_3dbdd4;
    }
    ctx->pc = 0x3DBDCCu;
    SET_GPR_U32(ctx, 31, 0x3DBDD4u);
    ctx->pc = 0x3DBDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBDCCu;
    // 0x3dbdd0: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3DBDCCu, 0x3DBDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBDD4u;
label_3dbdd4:
    // 0x3dbdd4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3dbdd4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3dbdd8:
    // 0x3dbdd8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3dbdd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dbddc:
    // 0x3dbddc: 0x0  nop
    ctx->pc = 0x3dbddcu;
    // NOP
label_3dbde0:
    // 0x3dbde0: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
label_3dbde4:
    if (ctx->pc == 0x3DBDE4u) {
        ctx->pc = 0x3DBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDE0u;
        // 0x3dbde4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBDE8u;
        goto label_3dbde8;
    }
    ctx->pc = 0x3DBDE0u;
    {
        const bool branch_taken_0x3dbde0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDE0u;
        // 0x3dbde4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbde0) {
            ctx->pc = 0x3DBF9Cu;
            goto label_3dbf9c;
        }
    }
    ctx->pc = 0x3DBDE8u;
label_3dbde8:
    // 0x3dbde8: 0xc0f3222  jal         func_3CC888
label_3dbdec:
    if (ctx->pc == 0x3DBDECu) {
        ctx->pc = 0x3DBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDE8u;
        // 0x3dbdec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBDF0u;
        goto label_3dbdf0;
    }
    ctx->pc = 0x3DBDE8u;
    SET_GPR_U32(ctx, 31, 0x3DBDF0u);
    ctx->pc = 0x3DBDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBDE8u;
    // 0x3dbdec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3DBDE8u, 0x3DBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBDF0u;
label_3dbdf0:
    // 0x3dbdf0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3dbdf0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3dbdf4:
    // 0x3dbdf4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3dbdf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dbdf8:
    // 0x3dbdf8: 0x0  nop
    ctx->pc = 0x3dbdf8u;
    // NOP
label_3dbdfc:
    // 0x3dbdfc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3dbe00:
    if (ctx->pc == 0x3DBE00u) {
        ctx->pc = 0x3DBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDFCu;
        // 0x3dbe00: 0xc60000bc  lwc1        $f0, 0xBC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBE04u;
        goto label_3dbe04;
    }
    ctx->pc = 0x3DBDFCu;
    {
        const bool branch_taken_0x3dbdfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDFCu;
        // 0x3dbe00: 0xc60000bc  lwc1        $f0, 0xBC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbdfc) {
            ctx->pc = 0x3DBE30u;
            goto label_3dbe30;
        }
    }
    ctx->pc = 0x3DBE04u;
label_3dbe04:
    // 0x3dbe04: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3dbe04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3dbe08:
    // 0x3dbe08: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3dbe08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3dbe0c:
    // 0x3dbe0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dbe0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dbe10:
    // 0x3dbe10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dbe10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dbe14:
    // 0x3dbe14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3dbe14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dbe18:
    // 0x3dbe18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3dbe18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dbe1c:
    // 0x3dbe1c: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3dbe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3dbe20:
    // 0x3dbe20: 0xe7a2043c  swc1        $f2, 0x43C($sp)
    ctx->pc = 0x3dbe20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
label_3dbe24:
    // 0x3dbe24: 0xafa00438  sw          $zero, 0x438($sp)
    ctx->pc = 0x3dbe24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 0));
label_3dbe28:
    // 0x3dbe28: 0x1000000b  b           . + 4 + (0xB << 2)
label_3dbe2c:
    if (ctx->pc == 0x3DBE2Cu) {
        ctx->pc = 0x3DBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBE28u;
        // 0x3dbe2c: 0xe7a00430  swc1        $f0, 0x430($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBE30u;
        goto label_3dbe30;
    }
    ctx->pc = 0x3DBE28u;
    {
        const bool branch_taken_0x3dbe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBE28u;
        // 0x3dbe2c: 0xe7a00430  swc1        $f0, 0x430($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbe28) {
            ctx->pc = 0x3DBE58u;
            goto label_3dbe58;
        }
    }
    ctx->pc = 0x3DBE30u;
label_3dbe30:
    // 0x3dbe30: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3dbe30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3dbe34:
    // 0x3dbe34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3dbe34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3dbe38:
    // 0x3dbe38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dbe38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dbe3c:
    // 0x3dbe3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dbe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dbe40:
    // 0x3dbe40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3dbe40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dbe44:
    // 0x3dbe44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3dbe44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dbe48:
    // 0x3dbe48: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3dbe48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3dbe4c:
    // 0x3dbe4c: 0xe7a2043c  swc1        $f2, 0x43C($sp)
    ctx->pc = 0x3dbe4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
label_3dbe50:
    // 0x3dbe50: 0xafa00438  sw          $zero, 0x438($sp)
    ctx->pc = 0x3dbe50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 0));
label_3dbe54:
    // 0x3dbe54: 0xe7a00434  swc1        $f0, 0x434($sp)
    ctx->pc = 0x3dbe54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_3dbe58:
    // 0x3dbe58: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3dbe58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3dbe5c:
    // 0x3dbe5c: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3dbe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3dbe60:
    // 0x3dbe60: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3dbe60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3dbe64:
    // 0x3dbe64: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x3dbe64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3dbe68:
    // 0x3dbe68: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3dbe68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3dbe6c:
    // 0x3dbe6c: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x3dbe6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3dbe70:
    // 0x3dbe70: 0xc136b18  jal         func_4DAC60
label_3dbe74:
    if (ctx->pc == 0x3DBE74u) {
        ctx->pc = 0x3DBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBE70u;
        // 0x3dbe74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBE78u;
        goto label_3dbe78;
    }
    ctx->pc = 0x3DBE70u;
    SET_GPR_U32(ctx, 31, 0x3DBE78u);
    ctx->pc = 0x3DBE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBE70u;
    // 0x3dbe74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DBE70u, 0x3DBE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBE78u;
label_3dbe78:
    // 0x3dbe78: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3dbe78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3dbe7c:
    // 0x3dbe7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3dbe7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dbe80:
    // 0x3dbe80: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3dbe80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3dbe84:
    // 0x3dbe84: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3dbe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3dbe88:
    // 0x3dbe88: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3dbe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3dbe8c:
    // 0x3dbe8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3dbe8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dbe90:
    // 0x3dbe90: 0xc136b18  jal         func_4DAC60
label_3dbe94:
    if (ctx->pc == 0x3DBE94u) {
        ctx->pc = 0x3DBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBE90u;
        // 0x3dbe94: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBE98u;
        goto label_3dbe98;
    }
    ctx->pc = 0x3DBE90u;
    SET_GPR_U32(ctx, 31, 0x3DBE98u);
    ctx->pc = 0x3DBE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBE90u;
    // 0x3dbe94: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DBE90u, 0x3DBE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBE98u;
label_3dbe98:
    // 0x3dbe98: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3dbe98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3dbe9c:
    // 0x3dbe9c: 0x27b40420  addiu       $s4, $sp, 0x420
    ctx->pc = 0x3dbe9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3dbea0:
    // 0x3dbea0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3dbea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3dbea4:
    // 0x3dbea4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dbea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dbea8:
    // 0x3dbea8: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3dbea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3dbeac:
    // 0x3dbeac: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3dbeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3dbeb0:
    // 0x3dbeb0: 0xc136b24  jal         func_4DAC90
label_3dbeb4:
    if (ctx->pc == 0x3DBEB4u) {
        ctx->pc = 0x3DBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBEB0u;
        // 0x3dbeb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBEB8u;
        goto label_3dbeb8;
    }
    ctx->pc = 0x3DBEB0u;
    SET_GPR_U32(ctx, 31, 0x3DBEB8u);
    ctx->pc = 0x3DBEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBEB0u;
    // 0x3dbeb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DBEB0u, 0x3DBEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBEB8u;
label_3dbeb8:
    // 0x3dbeb8: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3dbeb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3dbebc:
    // 0x3dbebc: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3dbebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3dbec0:
    // 0x3dbec0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dbec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dbec4:
    // 0x3dbec4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3dbec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dbec8:
    // 0x3dbec8: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3dbec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3dbecc:
    // 0x3dbecc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3dbeccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3dbed0:
    // 0x3dbed0: 0xc0e8db8  jal         func_3A36E0
label_3dbed4:
    if (ctx->pc == 0x3DBED4u) {
        ctx->pc = 0x3DBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBED0u;
        // 0x3dbed4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBED8u;
        goto label_3dbed8;
    }
    ctx->pc = 0x3DBED0u;
    SET_GPR_U32(ctx, 31, 0x3DBED8u);
    ctx->pc = 0x3DBED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBED0u;
    // 0x3dbed4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3DBED0u, 0x3DBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBED8u;
label_3dbed8:
    // 0x3dbed8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3dbedc:
    if (ctx->pc == 0x3DBEDCu) {
        ctx->pc = 0x3DBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBED8u;
        // 0x3dbedc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBEE0u;
        goto label_3dbee0;
    }
    ctx->pc = 0x3DBED8u;
    {
        const bool branch_taken_0x3dbed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBED8u;
        // 0x3dbedc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbed8) {
            ctx->pc = 0x3DBF0Cu;
            goto label_3dbf0c;
        }
    }
    ctx->pc = 0x3DBEE0u;
label_3dbee0:
    // 0x3dbee0: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x3dbee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dbee4:
    // 0x3dbee4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3dbee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dbee8:
    // 0x3dbee8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3dbee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3dbeec:
    // 0x3dbeec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3dbeecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3dbef0:
    // 0x3dbef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dbef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dbef4:
    // 0x3dbef4: 0x0  nop
    ctx->pc = 0x3dbef4u;
    // NOP
label_3dbef8:
    // 0x3dbef8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3dbef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dbefc:
    // 0x3dbefc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3dbefcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dbf00:
    // 0x3dbf00: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3dbf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3dbf04:
    // 0x3dbf04: 0xe60100c0  swc1        $f1, 0xC0($s0)
    ctx->pc = 0x3dbf04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3dbf08:
    // 0x3dbf08: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3dbf08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3dbf0c:
    // 0x3dbf0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3dbf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dbf10:
    // 0x3dbf10: 0xc136afa  jal         func_4DABE8
label_3dbf14:
    if (ctx->pc == 0x3DBF14u) {
        ctx->pc = 0x3DBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF10u;
        // 0x3dbf14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBF18u;
        goto label_3dbf18;
    }
    ctx->pc = 0x3DBF10u;
    SET_GPR_U32(ctx, 31, 0x3DBF18u);
    ctx->pc = 0x3DBF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBF10u;
    // 0x3dbf14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3DBF10u, 0x3DBF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBF18u;
label_3dbf18:
    // 0x3dbf18: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3dbf18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3dbf1c:
    // 0x3dbf1c: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3dbf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3dbf20:
    // 0x3dbf20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3dbf20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dbf24:
    // 0x3dbf24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dbf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dbf28:
    // 0x3dbf28: 0xc136b18  jal         func_4DAC60
label_3dbf2c:
    if (ctx->pc == 0x3DBF2Cu) {
        ctx->pc = 0x3DBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF28u;
        // 0x3dbf2c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBF30u;
        goto label_3dbf30;
    }
    ctx->pc = 0x3DBF28u;
    SET_GPR_U32(ctx, 31, 0x3DBF30u);
    ctx->pc = 0x3DBF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBF28u;
    // 0x3dbf2c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DBF28u, 0x3DBF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBF30u;
label_3dbf30:
    // 0x3dbf30: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3dbf30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3dbf34:
    // 0x3dbf34: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3dbf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3dbf38:
    // 0x3dbf38: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3dbf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3dbf3c:
    // 0x3dbf3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dbf3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dbf40:
    // 0x3dbf40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dbf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dbf44:
    // 0x3dbf44: 0xc136b24  jal         func_4DAC90
label_3dbf48:
    if (ctx->pc == 0x3DBF48u) {
        ctx->pc = 0x3DBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF44u;
        // 0x3dbf48: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBF4Cu;
        goto label_3dbf4c;
    }
    ctx->pc = 0x3DBF44u;
    SET_GPR_U32(ctx, 31, 0x3DBF4Cu);
    ctx->pc = 0x3DBF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBF44u;
    // 0x3dbf48: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DBF44u, 0x3DBF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBF4Cu;
label_3dbf4c:
    // 0x3dbf4c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3dbf4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3dbf50:
    // 0x3dbf50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dbf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dbf54:
    // 0x3dbf54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3dbf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dbf58:
    // 0x3dbf58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3dbf58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3dbf5c:
    // 0x3dbf5c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3dbf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3dbf60:
    // 0x3dbf60: 0xc0e8db8  jal         func_3A36E0
label_3dbf64:
    if (ctx->pc == 0x3DBF64u) {
        ctx->pc = 0x3DBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF60u;
        // 0x3dbf64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBF68u;
        goto label_3dbf68;
    }
    ctx->pc = 0x3DBF60u;
    SET_GPR_U32(ctx, 31, 0x3DBF68u);
    ctx->pc = 0x3DBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBF60u;
    // 0x3dbf64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3DBF60u, 0x3DBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBF68u;
label_3dbf68:
    // 0x3dbf68: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3dbf6c:
    if (ctx->pc == 0x3DBF6Cu) {
        ctx->pc = 0x3DBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF68u;
        // 0x3dbf6c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBF70u;
        goto label_3dbf70;
    }
    ctx->pc = 0x3DBF68u;
    {
        const bool branch_taken_0x3dbf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dbf68) {
            ctx->pc = 0x3DBF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBF68u;
            // 0x3dbf6c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBFA0u;
            goto label_3dbfa0;
        }
    }
    ctx->pc = 0x3DBF70u;
label_3dbf70:
    // 0x3dbf70: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x3dbf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dbf74:
    // 0x3dbf74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3dbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dbf78:
    // 0x3dbf78: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3dbf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3dbf7c:
    // 0x3dbf7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3dbf7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3dbf80:
    // 0x3dbf80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dbf80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dbf84:
    // 0x3dbf84: 0x0  nop
    ctx->pc = 0x3dbf84u;
    // NOP
label_3dbf88:
    // 0x3dbf88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3dbf88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dbf8c:
    // 0x3dbf8c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3dbf8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dbf90:
    // 0x3dbf90: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3dbf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3dbf94:
    // 0x3dbf94: 0xe60100c0  swc1        $f1, 0xC0($s0)
    ctx->pc = 0x3dbf94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3dbf98:
    // 0x3dbf98: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3dbf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3dbf9c:
    // 0x3dbf9c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3dbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3dbfa0:
    // 0x3dbfa0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3dbfa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dbfa4:
    // 0x3dbfa4: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
label_3dbfa8:
    if (ctx->pc == 0x3DBFA8u) {
        ctx->pc = 0x3DBFACu;
        goto label_3dbfac;
    }
    ctx->pc = 0x3DBFA4u;
    {
        const bool branch_taken_0x3dbfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x3dbfa4) {
            ctx->pc = 0x3DBFBCu;
            goto label_3dbfbc;
        }
    }
    ctx->pc = 0x3DBFACu;
label_3dbfac:
    // 0x3dbfac: 0xc0e9694  jal         func_3A5A50
label_3dbfb0:
    if (ctx->pc == 0x3DBFB0u) {
        ctx->pc = 0x3DBFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBFACu;
        // 0x3dbfb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBFB4u;
        goto label_3dbfb4;
    }
    ctx->pc = 0x3DBFACu;
    SET_GPR_U32(ctx, 31, 0x3DBFB4u);
    ctx->pc = 0x3DBFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBFACu;
    // 0x3dbfb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DBFACu, 0x3DBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBFB4u;
label_3dbfb4:
    // 0x3dbfb4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3dbfb8:
    if (ctx->pc == 0x3DBFB8u) {
        ctx->pc = 0x3DBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBFB4u;
        // 0x3dbfb8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBFBCu;
        goto label_3dbfbc;
    }
    ctx->pc = 0x3DBFB4u;
    {
        const bool branch_taken_0x3dbfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dbfb4) {
            ctx->pc = 0x3DBFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBFB4u;
            // 0x3dbfb8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBFD4u;
            goto label_3dbfd4;
        }
    }
    ctx->pc = 0x3DBFBCu;
label_3dbfbc:
    // 0x3dbfbc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3dbfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_3dbfc0:
    // 0x3dbfc0: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3dbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_3dbfc4:
    // 0x3dbfc4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3dbfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3dbfc8:
    // 0x3dbfc8: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3dbfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3dbfcc:
    // 0x3dbfcc: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x3dbfccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
label_3dbfd0:
    // 0x3dbfd0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3dbfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3dbfd4:
    // 0x3dbfd4: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x3dbfd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3dbfd8:
    // 0x3dbfd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3dbfdc:
    if (ctx->pc == 0x3DBFDCu) {
        ctx->pc = 0x3DBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBFD8u;
        // 0x3dbfdc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBFE0u;
        goto label_3dbfe0;
    }
    ctx->pc = 0x3DBFD8u;
    {
        const bool branch_taken_0x3dbfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBFD8u;
        // 0x3dbfdc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbfd8) {
            ctx->pc = 0x3DBFECu;
            goto label_3dbfec;
        }
    }
    ctx->pc = 0x3DBFE0u;
label_3dbfe0:
    // 0x3dbfe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dbfe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dbfe4:
    // 0x3dbfe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3dbfe8:
    if (ctx->pc == 0x3DBFE8u) {
        ctx->pc = 0x3DBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBFE4u;
        // 0x3dbfe8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBFECu;
        goto label_3dbfec;
    }
    ctx->pc = 0x3DBFE4u;
    {
        const bool branch_taken_0x3dbfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBFE4u;
        // 0x3dbfe8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbfe4) {
            ctx->pc = 0x3DBFF0u;
            goto label_3dbff0;
        }
    }
    ctx->pc = 0x3DBFECu;
label_3dbfec:
    // 0x3dbfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dbfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dbff0:
    // 0x3dbff0: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3dbff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3dbff4:
    // 0x3dbff4: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3dbff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3dbff8:
    // 0x3dbff8: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3dbff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3dbffc:
    // 0x3dbffc: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x3dbffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3dc000:
    // 0x3dc000: 0x7bb40470  lq          $s4, 0x470($sp)
    ctx->pc = 0x3dc000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3dc004:
    // 0x3dc004: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x3dc004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_3dc008:
    // 0x3dc008: 0xc7b404c0  lwc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3dc008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dc00c:
    // 0x3dc00c: 0x3e00008  jr          $ra
label_3dc010:
    if (ctx->pc == 0x3DC010u) {
        ctx->pc = 0x3DC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC00Cu;
        // 0x3dc010: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC014u;
        goto label_3dc014;
    }
    ctx->pc = 0x3DC00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC00Cu;
        // 0x3dc010: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC014u;
label_3dc014:
    // 0x3dc014: 0x0  nop
    ctx->pc = 0x3dc014u;
    // NOP
    ctx->pc = 0x3dc018u;
}
