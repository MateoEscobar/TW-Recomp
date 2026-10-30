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

// Function: sub_0026CC18
// Address: 0x26cc18 - 0x26d078
void sub_0026CC18_0x26cc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CC18_0x26cc18");
#endif

    switch (ctx->pc) {
        case 0x26cc18u: goto label_26cc18;
        case 0x26cc1cu: goto label_26cc1c;
        case 0x26cc20u: goto label_26cc20;
        case 0x26cc24u: goto label_26cc24;
        case 0x26cc28u: goto label_26cc28;
        case 0x26cc2cu: goto label_26cc2c;
        case 0x26cc30u: goto label_26cc30;
        case 0x26cc34u: goto label_26cc34;
        case 0x26cc38u: goto label_26cc38;
        case 0x26cc3cu: goto label_26cc3c;
        case 0x26cc40u: goto label_26cc40;
        case 0x26cc44u: goto label_26cc44;
        case 0x26cc48u: goto label_26cc48;
        case 0x26cc4cu: goto label_26cc4c;
        case 0x26cc50u: goto label_26cc50;
        case 0x26cc54u: goto label_26cc54;
        case 0x26cc58u: goto label_26cc58;
        case 0x26cc5cu: goto label_26cc5c;
        case 0x26cc60u: goto label_26cc60;
        case 0x26cc64u: goto label_26cc64;
        case 0x26cc68u: goto label_26cc68;
        case 0x26cc6cu: goto label_26cc6c;
        case 0x26cc70u: goto label_26cc70;
        case 0x26cc74u: goto label_26cc74;
        case 0x26cc78u: goto label_26cc78;
        case 0x26cc7cu: goto label_26cc7c;
        case 0x26cc80u: goto label_26cc80;
        case 0x26cc84u: goto label_26cc84;
        case 0x26cc88u: goto label_26cc88;
        case 0x26cc8cu: goto label_26cc8c;
        case 0x26cc90u: goto label_26cc90;
        case 0x26cc94u: goto label_26cc94;
        case 0x26cc98u: goto label_26cc98;
        case 0x26cc9cu: goto label_26cc9c;
        case 0x26cca0u: goto label_26cca0;
        case 0x26cca4u: goto label_26cca4;
        case 0x26cca8u: goto label_26cca8;
        case 0x26ccacu: goto label_26ccac;
        case 0x26ccb0u: goto label_26ccb0;
        case 0x26ccb4u: goto label_26ccb4;
        case 0x26ccb8u: goto label_26ccb8;
        case 0x26ccbcu: goto label_26ccbc;
        case 0x26ccc0u: goto label_26ccc0;
        case 0x26ccc4u: goto label_26ccc4;
        case 0x26ccc8u: goto label_26ccc8;
        case 0x26ccccu: goto label_26cccc;
        case 0x26ccd0u: goto label_26ccd0;
        case 0x26ccd4u: goto label_26ccd4;
        case 0x26ccd8u: goto label_26ccd8;
        case 0x26ccdcu: goto label_26ccdc;
        case 0x26cce0u: goto label_26cce0;
        case 0x26cce4u: goto label_26cce4;
        case 0x26cce8u: goto label_26cce8;
        case 0x26ccecu: goto label_26ccec;
        case 0x26ccf0u: goto label_26ccf0;
        case 0x26ccf4u: goto label_26ccf4;
        case 0x26ccf8u: goto label_26ccf8;
        case 0x26ccfcu: goto label_26ccfc;
        case 0x26cd00u: goto label_26cd00;
        case 0x26cd04u: goto label_26cd04;
        case 0x26cd08u: goto label_26cd08;
        case 0x26cd0cu: goto label_26cd0c;
        case 0x26cd10u: goto label_26cd10;
        case 0x26cd14u: goto label_26cd14;
        case 0x26cd18u: goto label_26cd18;
        case 0x26cd1cu: goto label_26cd1c;
        case 0x26cd20u: goto label_26cd20;
        case 0x26cd24u: goto label_26cd24;
        case 0x26cd28u: goto label_26cd28;
        case 0x26cd2cu: goto label_26cd2c;
        case 0x26cd30u: goto label_26cd30;
        case 0x26cd34u: goto label_26cd34;
        case 0x26cd38u: goto label_26cd38;
        case 0x26cd3cu: goto label_26cd3c;
        case 0x26cd40u: goto label_26cd40;
        case 0x26cd44u: goto label_26cd44;
        case 0x26cd48u: goto label_26cd48;
        case 0x26cd4cu: goto label_26cd4c;
        case 0x26cd50u: goto label_26cd50;
        case 0x26cd54u: goto label_26cd54;
        case 0x26cd58u: goto label_26cd58;
        case 0x26cd5cu: goto label_26cd5c;
        case 0x26cd60u: goto label_26cd60;
        case 0x26cd64u: goto label_26cd64;
        case 0x26cd68u: goto label_26cd68;
        case 0x26cd6cu: goto label_26cd6c;
        case 0x26cd70u: goto label_26cd70;
        case 0x26cd74u: goto label_26cd74;
        case 0x26cd78u: goto label_26cd78;
        case 0x26cd7cu: goto label_26cd7c;
        case 0x26cd80u: goto label_26cd80;
        case 0x26cd84u: goto label_26cd84;
        case 0x26cd88u: goto label_26cd88;
        case 0x26cd8cu: goto label_26cd8c;
        case 0x26cd90u: goto label_26cd90;
        case 0x26cd94u: goto label_26cd94;
        case 0x26cd98u: goto label_26cd98;
        case 0x26cd9cu: goto label_26cd9c;
        case 0x26cda0u: goto label_26cda0;
        case 0x26cda4u: goto label_26cda4;
        case 0x26cda8u: goto label_26cda8;
        case 0x26cdacu: goto label_26cdac;
        case 0x26cdb0u: goto label_26cdb0;
        case 0x26cdb4u: goto label_26cdb4;
        case 0x26cdb8u: goto label_26cdb8;
        case 0x26cdbcu: goto label_26cdbc;
        case 0x26cdc0u: goto label_26cdc0;
        case 0x26cdc4u: goto label_26cdc4;
        case 0x26cdc8u: goto label_26cdc8;
        case 0x26cdccu: goto label_26cdcc;
        case 0x26cdd0u: goto label_26cdd0;
        case 0x26cdd4u: goto label_26cdd4;
        case 0x26cdd8u: goto label_26cdd8;
        case 0x26cddcu: goto label_26cddc;
        case 0x26cde0u: goto label_26cde0;
        case 0x26cde4u: goto label_26cde4;
        case 0x26cde8u: goto label_26cde8;
        case 0x26cdecu: goto label_26cdec;
        case 0x26cdf0u: goto label_26cdf0;
        case 0x26cdf4u: goto label_26cdf4;
        case 0x26cdf8u: goto label_26cdf8;
        case 0x26cdfcu: goto label_26cdfc;
        case 0x26ce00u: goto label_26ce00;
        case 0x26ce04u: goto label_26ce04;
        case 0x26ce08u: goto label_26ce08;
        case 0x26ce0cu: goto label_26ce0c;
        case 0x26ce10u: goto label_26ce10;
        case 0x26ce14u: goto label_26ce14;
        case 0x26ce18u: goto label_26ce18;
        case 0x26ce1cu: goto label_26ce1c;
        case 0x26ce20u: goto label_26ce20;
        case 0x26ce24u: goto label_26ce24;
        case 0x26ce28u: goto label_26ce28;
        case 0x26ce2cu: goto label_26ce2c;
        case 0x26ce30u: goto label_26ce30;
        case 0x26ce34u: goto label_26ce34;
        case 0x26ce38u: goto label_26ce38;
        case 0x26ce3cu: goto label_26ce3c;
        case 0x26ce40u: goto label_26ce40;
        case 0x26ce44u: goto label_26ce44;
        case 0x26ce48u: goto label_26ce48;
        case 0x26ce4cu: goto label_26ce4c;
        case 0x26ce50u: goto label_26ce50;
        case 0x26ce54u: goto label_26ce54;
        case 0x26ce58u: goto label_26ce58;
        case 0x26ce5cu: goto label_26ce5c;
        case 0x26ce60u: goto label_26ce60;
        case 0x26ce64u: goto label_26ce64;
        case 0x26ce68u: goto label_26ce68;
        case 0x26ce6cu: goto label_26ce6c;
        case 0x26ce70u: goto label_26ce70;
        case 0x26ce74u: goto label_26ce74;
        case 0x26ce78u: goto label_26ce78;
        case 0x26ce7cu: goto label_26ce7c;
        case 0x26ce80u: goto label_26ce80;
        case 0x26ce84u: goto label_26ce84;
        case 0x26ce88u: goto label_26ce88;
        case 0x26ce8cu: goto label_26ce8c;
        case 0x26ce90u: goto label_26ce90;
        case 0x26ce94u: goto label_26ce94;
        case 0x26ce98u: goto label_26ce98;
        case 0x26ce9cu: goto label_26ce9c;
        case 0x26cea0u: goto label_26cea0;
        case 0x26cea4u: goto label_26cea4;
        case 0x26cea8u: goto label_26cea8;
        case 0x26ceacu: goto label_26ceac;
        case 0x26ceb0u: goto label_26ceb0;
        case 0x26ceb4u: goto label_26ceb4;
        case 0x26ceb8u: goto label_26ceb8;
        case 0x26cebcu: goto label_26cebc;
        case 0x26cec0u: goto label_26cec0;
        case 0x26cec4u: goto label_26cec4;
        case 0x26cec8u: goto label_26cec8;
        case 0x26ceccu: goto label_26cecc;
        case 0x26ced0u: goto label_26ced0;
        case 0x26ced4u: goto label_26ced4;
        case 0x26ced8u: goto label_26ced8;
        case 0x26cedcu: goto label_26cedc;
        case 0x26cee0u: goto label_26cee0;
        case 0x26cee4u: goto label_26cee4;
        case 0x26cee8u: goto label_26cee8;
        case 0x26ceecu: goto label_26ceec;
        case 0x26cef0u: goto label_26cef0;
        case 0x26cef4u: goto label_26cef4;
        case 0x26cef8u: goto label_26cef8;
        case 0x26cefcu: goto label_26cefc;
        case 0x26cf00u: goto label_26cf00;
        case 0x26cf04u: goto label_26cf04;
        case 0x26cf08u: goto label_26cf08;
        case 0x26cf0cu: goto label_26cf0c;
        case 0x26cf10u: goto label_26cf10;
        case 0x26cf14u: goto label_26cf14;
        case 0x26cf18u: goto label_26cf18;
        case 0x26cf1cu: goto label_26cf1c;
        case 0x26cf20u: goto label_26cf20;
        case 0x26cf24u: goto label_26cf24;
        case 0x26cf28u: goto label_26cf28;
        case 0x26cf2cu: goto label_26cf2c;
        case 0x26cf30u: goto label_26cf30;
        case 0x26cf34u: goto label_26cf34;
        case 0x26cf38u: goto label_26cf38;
        case 0x26cf3cu: goto label_26cf3c;
        case 0x26cf40u: goto label_26cf40;
        case 0x26cf44u: goto label_26cf44;
        case 0x26cf48u: goto label_26cf48;
        case 0x26cf4cu: goto label_26cf4c;
        case 0x26cf50u: goto label_26cf50;
        case 0x26cf54u: goto label_26cf54;
        case 0x26cf58u: goto label_26cf58;
        case 0x26cf5cu: goto label_26cf5c;
        case 0x26cf60u: goto label_26cf60;
        case 0x26cf64u: goto label_26cf64;
        case 0x26cf68u: goto label_26cf68;
        case 0x26cf6cu: goto label_26cf6c;
        case 0x26cf70u: goto label_26cf70;
        case 0x26cf74u: goto label_26cf74;
        case 0x26cf78u: goto label_26cf78;
        case 0x26cf7cu: goto label_26cf7c;
        case 0x26cf80u: goto label_26cf80;
        case 0x26cf84u: goto label_26cf84;
        case 0x26cf88u: goto label_26cf88;
        case 0x26cf8cu: goto label_26cf8c;
        case 0x26cf90u: goto label_26cf90;
        case 0x26cf94u: goto label_26cf94;
        case 0x26cf98u: goto label_26cf98;
        case 0x26cf9cu: goto label_26cf9c;
        case 0x26cfa0u: goto label_26cfa0;
        case 0x26cfa4u: goto label_26cfa4;
        case 0x26cfa8u: goto label_26cfa8;
        case 0x26cfacu: goto label_26cfac;
        case 0x26cfb0u: goto label_26cfb0;
        case 0x26cfb4u: goto label_26cfb4;
        case 0x26cfb8u: goto label_26cfb8;
        case 0x26cfbcu: goto label_26cfbc;
        case 0x26cfc0u: goto label_26cfc0;
        case 0x26cfc4u: goto label_26cfc4;
        case 0x26cfc8u: goto label_26cfc8;
        case 0x26cfccu: goto label_26cfcc;
        case 0x26cfd0u: goto label_26cfd0;
        case 0x26cfd4u: goto label_26cfd4;
        case 0x26cfd8u: goto label_26cfd8;
        case 0x26cfdcu: goto label_26cfdc;
        case 0x26cfe0u: goto label_26cfe0;
        case 0x26cfe4u: goto label_26cfe4;
        case 0x26cfe8u: goto label_26cfe8;
        case 0x26cfecu: goto label_26cfec;
        case 0x26cff0u: goto label_26cff0;
        case 0x26cff4u: goto label_26cff4;
        case 0x26cff8u: goto label_26cff8;
        case 0x26cffcu: goto label_26cffc;
        case 0x26d000u: goto label_26d000;
        case 0x26d004u: goto label_26d004;
        case 0x26d008u: goto label_26d008;
        case 0x26d00cu: goto label_26d00c;
        case 0x26d010u: goto label_26d010;
        case 0x26d014u: goto label_26d014;
        case 0x26d018u: goto label_26d018;
        case 0x26d01cu: goto label_26d01c;
        case 0x26d020u: goto label_26d020;
        case 0x26d024u: goto label_26d024;
        case 0x26d028u: goto label_26d028;
        case 0x26d02cu: goto label_26d02c;
        case 0x26d030u: goto label_26d030;
        case 0x26d034u: goto label_26d034;
        case 0x26d038u: goto label_26d038;
        case 0x26d03cu: goto label_26d03c;
        case 0x26d040u: goto label_26d040;
        case 0x26d044u: goto label_26d044;
        case 0x26d048u: goto label_26d048;
        case 0x26d04cu: goto label_26d04c;
        case 0x26d050u: goto label_26d050;
        case 0x26d054u: goto label_26d054;
        case 0x26d058u: goto label_26d058;
        case 0x26d05cu: goto label_26d05c;
        case 0x26d060u: goto label_26d060;
        case 0x26d064u: goto label_26d064;
        case 0x26d068u: goto label_26d068;
        case 0x26d06cu: goto label_26d06c;
        case 0x26d070u: goto label_26d070;
        case 0x26d074u: goto label_26d074;
        default: break;
    }

    ctx->pc = 0x26cc18u;

label_26cc18:
    // 0x26cc18: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26cc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_26cc1c:
    // 0x26cc1c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26cc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_26cc20:
    // 0x26cc20: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_26cc24:
    // 0x26cc24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26cc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cc28:
    // 0x26cc28: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_26cc2c:
    // 0x26cc2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26cc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26cc30:
    // 0x26cc30: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26cc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_26cc34:
    // 0x26cc34: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x26cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_26cc38:
    // 0x26cc38: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26cc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_26cc3c:
    // 0x26cc3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26cc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_26cc40:
    // 0x26cc40: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x26cc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_26cc44:
    // 0x26cc44: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x26cc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_26cc48:
    // 0x26cc48: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x26cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_26cc4c:
    // 0x26cc4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26cc50:
    // 0x26cc50: 0xc0e409a  jal         func_390268
label_26cc54:
    if (ctx->pc == 0x26CC54u) {
        ctx->pc = 0x26CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC50u;
        // 0x26cc54: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC58u;
        goto label_26cc58;
    }
    ctx->pc = 0x26CC50u;
    SET_GPR_U32(ctx, 31, 0x26CC58u);
    ctx->pc = 0x26CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC50u;
    // 0x26cc54: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26CC50u, 0x26CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC58u;
label_26cc58:
    // 0x26cc58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26cc58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cc5c:
    // 0x26cc5c: 0x124000f8  beqz        $s2, . + 4 + (0xF8 << 2)
label_26cc60:
    if (ctx->pc == 0x26CC60u) {
        ctx->pc = 0x26CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC5Cu;
        // 0x26cc60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC64u;
        goto label_26cc64;
    }
    ctx->pc = 0x26CC5Cu;
    {
        const bool branch_taken_0x26cc5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC5Cu;
        // 0x26cc60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc5c) {
            ctx->pc = 0x26D040u;
            goto label_26d040;
        }
    }
    ctx->pc = 0x26CC64u;
label_26cc64:
    // 0x26cc64: 0x3c0500c1  lui         $a1, 0xC1
    ctx->pc = 0x26cc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
label_26cc68:
    // 0x26cc68: 0xc089998  jal         func_226660
label_26cc6c:
    if (ctx->pc == 0x26CC6Cu) {
        ctx->pc = 0x26CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC68u;
        // 0x26cc6c: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC70u;
        goto label_26cc70;
    }
    ctx->pc = 0x26CC68u;
    SET_GPR_U32(ctx, 31, 0x26CC70u);
    ctx->pc = 0x26CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC68u;
    // 0x26cc6c: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26CC68u, 0x26CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC70u;
label_26cc70:
    // 0x26cc70: 0x544000f4  bnel        $v0, $zero, . + 4 + (0xF4 << 2)
label_26cc74:
    if (ctx->pc == 0x26CC74u) {
        ctx->pc = 0x26CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC70u;
        // 0x26cc74: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC78u;
        goto label_26cc78;
    }
    ctx->pc = 0x26CC70u;
    {
        const bool branch_taken_0x26cc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cc70) {
            ctx->pc = 0x26CC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC70u;
            // 0x26cc74: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D044u;
            goto label_26d044;
        }
    }
    ctx->pc = 0x26CC78u;
label_26cc78:
    // 0x26cc78: 0x3c0500c1  lui         $a1, 0xC1
    ctx->pc = 0x26cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
label_26cc7c:
    // 0x26cc7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26cc80:
    // 0x26cc80: 0xc089998  jal         func_226660
label_26cc84:
    if (ctx->pc == 0x26CC84u) {
        ctx->pc = 0x26CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC80u;
        // 0x26cc84: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC88u;
        goto label_26cc88;
    }
    ctx->pc = 0x26CC80u;
    SET_GPR_U32(ctx, 31, 0x26CC88u);
    ctx->pc = 0x26CC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC80u;
    // 0x26cc84: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26CC80u, 0x26CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC88u;
label_26cc88:
    // 0x26cc88: 0x544000ee  bnel        $v0, $zero, . + 4 + (0xEE << 2)
label_26cc8c:
    if (ctx->pc == 0x26CC8Cu) {
        ctx->pc = 0x26CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC88u;
        // 0x26cc8c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC90u;
        goto label_26cc90;
    }
    ctx->pc = 0x26CC88u;
    {
        const bool branch_taken_0x26cc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cc88) {
            ctx->pc = 0x26CC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC88u;
            // 0x26cc8c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D044u;
            goto label_26d044;
        }
    }
    ctx->pc = 0x26CC90u;
label_26cc90:
    // 0x26cc90: 0xc088e70  jal         func_2239C0
label_26cc94:
    if (ctx->pc == 0x26CC94u) {
        ctx->pc = 0x26CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC90u;
        // 0x26cc94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC98u;
        goto label_26cc98;
    }
    ctx->pc = 0x26CC90u;
    SET_GPR_U32(ctx, 31, 0x26CC98u);
    ctx->pc = 0x26CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC90u;
    // 0x26cc94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x26CC90u, 0x26CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC98u;
label_26cc98:
    // 0x26cc98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_26cc9c:
    if (ctx->pc == 0x26CC9Cu) {
        ctx->pc = 0x26CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC98u;
        // 0x26cc9c: 0x24150072  addiu       $s5, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCA0u;
        goto label_26cca0;
    }
    ctx->pc = 0x26CC98u;
    {
        const bool branch_taken_0x26cc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC98u;
        // 0x26cc9c: 0x24150072  addiu       $s5, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc98) {
            ctx->pc = 0x26CCA8u;
            goto label_26cca8;
        }
    }
    ctx->pc = 0x26CCA0u;
label_26cca0:
    // 0x26cca0: 0x10000003  b           . + 4 + (0x3 << 2)
label_26cca4:
    if (ctx->pc == 0x26CCA4u) {
        ctx->pc = 0x26CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCA0u;
        // 0x26cca4: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCA8u;
        goto label_26cca8;
    }
    ctx->pc = 0x26CCA0u;
    {
        const bool branch_taken_0x26cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCA0u;
        // 0x26cca4: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cca0) {
            ctx->pc = 0x26CCB0u;
            goto label_26ccb0;
        }
    }
    ctx->pc = 0x26CCA8u;
label_26cca8:
    // 0x26cca8: 0x24150066  addiu       $s5, $zero, 0x66
    ctx->pc = 0x26cca8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_26ccac:
    // 0x26ccac: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_26ccb0:
    // 0x26ccb0: 0x50a80b  movn        $s5, $v0, $s0
    ctx->pc = 0x26ccb0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_26ccb4:
    // 0x26ccb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ccb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ccb8:
    // 0x26ccb8: 0xc08b2c0  jal         func_22CB00
label_26ccbc:
    if (ctx->pc == 0x26CCBCu) {
        ctx->pc = 0x26CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCB8u;
        // 0x26ccbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCC0u;
        goto label_26ccc0;
    }
    ctx->pc = 0x26CCB8u;
    SET_GPR_U32(ctx, 31, 0x26CCC0u);
    ctx->pc = 0x26CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCB8u;
    // 0x26ccbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x26CCB8u, 0x26CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCC0u;
label_26ccc0:
    // 0x26ccc0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x26ccc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_26ccc4:
    // 0x26ccc4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x26ccc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_26ccc8:
    // 0x26ccc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26ccc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26cccc:
    // 0x26cccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ccd0:
    // 0x26ccd0: 0xc0a0152  jal         func_280548
label_26ccd4:
    if (ctx->pc == 0x26CCD4u) {
        ctx->pc = 0x26CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCD0u;
        // 0x26ccd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCD8u;
        goto label_26ccd8;
    }
    ctx->pc = 0x26CCD0u;
    SET_GPR_U32(ctx, 31, 0x26CCD8u);
    ctx->pc = 0x26CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCD0u;
    // 0x26ccd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x26CCD0u, 0x26CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCD8u;
label_26ccd8:
    // 0x26ccd8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x26ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_26ccdc:
    // 0x26ccdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26cce0:
    // 0x26cce0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_26cce4:
    // 0x26cce4: 0xc0950ba  jal         func_2542E8
label_26cce8:
    if (ctx->pc == 0x26CCE8u) {
        ctx->pc = 0x26CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCE4u;
        // 0x26cce8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCECu;
        goto label_26ccec;
    }
    ctx->pc = 0x26CCE4u;
    SET_GPR_U32(ctx, 31, 0x26CCECu);
    ctx->pc = 0x26CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCE4u;
    // 0x26cce8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x26CCE4u, 0x26CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCECu;
label_26ccec:
    // 0x26ccec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26ccecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26ccf0:
    // 0x26ccf0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x26ccf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_26ccf4:
    // 0x26ccf4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26ccf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ccf8:
    // 0x26ccf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ccf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ccfc:
    // 0x26ccfc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26ccfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cd00:
    // 0x26cd00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cd00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cd04:
    // 0x26cd04: 0xc0875a0  jal         func_21D680
label_26cd08:
    if (ctx->pc == 0x26CD08u) {
        ctx->pc = 0x26CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD04u;
        // 0x26cd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD0Cu;
        goto label_26cd0c;
    }
    ctx->pc = 0x26CD04u;
    SET_GPR_U32(ctx, 31, 0x26CD0Cu);
    ctx->pc = 0x26CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD04u;
    // 0x26cd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x26CD04u, 0x26CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD0Cu;
label_26cd0c:
    // 0x26cd0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26cd10:
    // 0x26cd10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26cd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26cd14:
    // 0x26cd14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26cd14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26cd18:
    // 0x26cd18: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x26cd18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_26cd1c:
    // 0x26cd1c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x26cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_26cd20:
    // 0x26cd20: 0x40f809  jalr        $v0
label_26cd24:
    if (ctx->pc == 0x26CD24u) {
        ctx->pc = 0x26CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD20u;
        // 0x26cd24: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD28u;
        goto label_26cd28;
    }
    ctx->pc = 0x26CD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CD28u);
        ctx->pc = 0x26CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD20u;
        // 0x26cd24: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CD20u, 0x26CD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CD28u;
label_26cd28:
    // 0x26cd28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26cd2c:
    // 0x26cd2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26cd2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26cd30:
    // 0x26cd30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26cd34:
    // 0x26cd34: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x26cd34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_26cd38:
    // 0x26cd38: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x26cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_26cd3c:
    // 0x26cd3c: 0x40f809  jalr        $v0
label_26cd40:
    if (ctx->pc == 0x26CD40u) {
        ctx->pc = 0x26CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD3Cu;
        // 0x26cd40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD44u;
        goto label_26cd44;
    }
    ctx->pc = 0x26CD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CD44u);
        ctx->pc = 0x26CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD3Cu;
        // 0x26cd40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CD3Cu, 0x26CD44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CD44u;
label_26cd44:
    // 0x26cd44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26cd48:
    // 0x26cd48: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x26cd48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26cd4c:
    // 0x26cd4c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_26cd50:
    // 0x26cd50: 0x40f809  jalr        $v0
label_26cd54:
    if (ctx->pc == 0x26CD54u) {
        ctx->pc = 0x26CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD50u;
        // 0x26cd54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD58u;
        goto label_26cd58;
    }
    ctx->pc = 0x26CD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CD58u);
        ctx->pc = 0x26CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD50u;
        // 0x26cd54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CD50u, 0x26CD58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CD58u;
label_26cd58:
    // 0x26cd58: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_26cd5c:
    if (ctx->pc == 0x26CD5Cu) {
        ctx->pc = 0x26CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD58u;
        // 0x26cd5c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD60u;
        goto label_26cd60;
    }
    ctx->pc = 0x26CD58u;
    {
        const bool branch_taken_0x26cd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD58u;
        // 0x26cd5c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd58) {
            ctx->pc = 0x26CDE0u;
            goto label_26cde0;
        }
    }
    ctx->pc = 0x26CD60u;
label_26cd60:
    // 0x26cd60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26cd64:
    // 0x26cd64: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x26cd64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26cd68:
    // 0x26cd68: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_26cd6c:
    // 0x26cd6c: 0x40f809  jalr        $v0
label_26cd70:
    if (ctx->pc == 0x26CD70u) {
        ctx->pc = 0x26CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD6Cu;
        // 0x26cd70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD74u;
        goto label_26cd74;
    }
    ctx->pc = 0x26CD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CD74u);
        ctx->pc = 0x26CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD6Cu;
        // 0x26cd70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CD6Cu, 0x26CD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CD74u;
label_26cd74:
    // 0x26cd74: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_26cd78:
    if (ctx->pc == 0x26CD78u) {
        ctx->pc = 0x26CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD74u;
        // 0x26cd78: 0x3403fffd  ori         $v1, $zero, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD7Cu;
        goto label_26cd7c;
    }
    ctx->pc = 0x26CD74u;
    {
        const bool branch_taken_0x26cd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD74u;
        // 0x26cd78: 0x3403fffd  ori         $v1, $zero, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd74) {
            ctx->pc = 0x26CDDCu;
            goto label_26cddc;
        }
    }
    ctx->pc = 0x26CD7Cu;
label_26cd7c:
    // 0x26cd7c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x26cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_26cd80:
    // 0x26cd80: 0x8c857198  lw          $a1, 0x7198($a0)
    ctx->pc = 0x26cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29080)));
label_26cd84:
    // 0x26cd84: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x26cd84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_26cd88:
    // 0x26cd88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cd8c:
    // 0x26cd8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26cd90:
    // 0x26cd90: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x26cd90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_26cd94:
    // 0x26cd94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_26cd98:
    if (ctx->pc == 0x26CD98u) {
        ctx->pc = 0x26CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD94u;
        // 0x26cd98: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CD9Cu;
        goto label_26cd9c;
    }
    ctx->pc = 0x26CD94u;
    {
        const bool branch_taken_0x26cd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD94u;
        // 0x26cd98: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd94) {
            ctx->pc = 0x26CDA4u;
            goto label_26cda4;
        }
    }
    ctx->pc = 0x26CD9Cu;
label_26cd9c:
    // 0x26cd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cda0:
    // 0x26cda0: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x26cda0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
label_26cda4:
    // 0x26cda4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26cda8:
    // 0x26cda8: 0x94b00010  lhu         $s0, 0x10($a1)
    ctx->pc = 0x26cda8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_26cdac:
    // 0x26cdac: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x26cdacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26cdb0:
    // 0x26cdb0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_26cdb4:
    // 0x26cdb4: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x26cdb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_26cdb8:
    // 0x26cdb8: 0x40f809  jalr        $v0
label_26cdbc:
    if (ctx->pc == 0x26CDBCu) {
        ctx->pc = 0x26CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDB8u;
        // 0x26cdbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CDC0u;
        goto label_26cdc0;
    }
    ctx->pc = 0x26CDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CDC0u);
        ctx->pc = 0x26CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDB8u;
        // 0x26cdbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CDB8u, 0x26CDC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CDC0u;
label_26cdc0:
    // 0x26cdc0: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x26cdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_26cdc4:
    // 0x26cdc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26cdc8:
    // 0x26cdc8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x26cdc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26cdcc:
    // 0x26cdcc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_26cdd0:
    // 0x26cdd0: 0x40f809  jalr        $v0
label_26cdd4:
    if (ctx->pc == 0x26CDD4u) {
        ctx->pc = 0x26CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDD0u;
        // 0x26cdd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CDD8u;
        goto label_26cdd8;
    }
    ctx->pc = 0x26CDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CDD8u);
        ctx->pc = 0x26CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDD0u;
        // 0x26cdd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CDD0u, 0x26CDD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CDD8u;
label_26cdd8:
    // 0x26cdd8: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x26cdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_26cddc:
    // 0x26cddc: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26cde0:
    // 0x26cde0: 0x8e3600d8  lw          $s6, 0xD8($s1)
    ctx->pc = 0x26cde0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26cde4:
    // 0x26cde4: 0x2457e160  addiu       $s7, $v0, -0x1EA0
    ctx->pc = 0x26cde4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26cde8:
    // 0x26cde8: 0xc041532  jal         func_1054C8
label_26cdec:
    if (ctx->pc == 0x26CDECu) {
        ctx->pc = 0x26CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDE8u;
        // 0x26cdec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CDF0u;
        goto label_26cdf0;
    }
    ctx->pc = 0x26CDE8u;
    SET_GPR_U32(ctx, 31, 0x26CDF0u);
    ctx->pc = 0x26CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDE8u;
    // 0x26cdec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26CDE8u, 0x26CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDF0u;
label_26cdf0:
    // 0x26cdf0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26cdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26cdf4:
    // 0x26cdf4: 0xc041532  jal         func_1054C8
label_26cdf8:
    if (ctx->pc == 0x26CDF8u) {
        ctx->pc = 0x26CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDF4u;
        // 0x26cdf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CDFCu;
        goto label_26cdfc;
    }
    ctx->pc = 0x26CDF4u;
    SET_GPR_U32(ctx, 31, 0x26CDFCu);
    ctx->pc = 0x26CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDF4u;
    // 0x26cdf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26CDF4u, 0x26CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDFCu;
label_26cdfc:
    // 0x26cdfc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26cdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ce00:
    // 0x26ce00: 0xc041532  jal         func_1054C8
label_26ce04:
    if (ctx->pc == 0x26CE04u) {
        ctx->pc = 0x26CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE00u;
        // 0x26ce04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE08u;
        goto label_26ce08;
    }
    ctx->pc = 0x26CE00u;
    SET_GPR_U32(ctx, 31, 0x26CE08u);
    ctx->pc = 0x26CE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE00u;
    // 0x26ce04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26CE00u, 0x26CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE08u;
label_26ce08:
    // 0x26ce08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26ce08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ce0c:
    // 0x26ce0c: 0xc08bf92  jal         func_22FE48
label_26ce10:
    if (ctx->pc == 0x26CE10u) {
        ctx->pc = 0x26CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE0Cu;
        // 0x26ce10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE14u;
        goto label_26ce14;
    }
    ctx->pc = 0x26CE0Cu;
    SET_GPR_U32(ctx, 31, 0x26CE14u);
    ctx->pc = 0x26CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE0Cu;
    // 0x26ce10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x26CE0Cu, 0x26CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE14u;
label_26ce14:
    // 0x26ce14: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_26ce18:
    if (ctx->pc == 0x26CE18u) {
        ctx->pc = 0x26CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE14u;
        // 0x26ce18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE1Cu;
        goto label_26ce1c;
    }
    ctx->pc = 0x26CE14u;
    {
        const bool branch_taken_0x26ce14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE14u;
        // 0x26ce18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce14) {
            ctx->pc = 0x26CE38u;
            goto label_26ce38;
        }
    }
    ctx->pc = 0x26CE1Cu;
label_26ce1c:
    // 0x26ce1c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26ce20:
    // 0x26ce20: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ce20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ce24:
    // 0x26ce24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ce24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ce28:
    // 0x26ce28: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26ce2c:
    // 0x26ce2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ce2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ce30:
    // 0x26ce30: 0xc04159e  jal         func_105678
label_26ce34:
    if (ctx->pc == 0x26CE34u) {
        ctx->pc = 0x26CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE30u;
        // 0x26ce34: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE38u;
        goto label_26ce38;
    }
    ctx->pc = 0x26CE30u;
    SET_GPR_U32(ctx, 31, 0x26CE38u);
    ctx->pc = 0x26CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE30u;
    // 0x26ce34: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26CE30u, 0x26CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE38u;
label_26ce38:
    // 0x26ce38: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26ce3c:
    // 0x26ce3c: 0x241e000b  addiu       $fp, $zero, 0xB
    ctx->pc = 0x26ce3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26ce40:
    // 0x26ce40: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_26ce44:
    if (ctx->pc == 0x26CE44u) {
        ctx->pc = 0x26CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE40u;
        // 0x26ce44: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE48u;
        goto label_26ce48;
    }
    ctx->pc = 0x26CE40u;
    {
        const bool branch_taken_0x26ce40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE40u;
        // 0x26ce44: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce40) {
            ctx->pc = 0x26CE8Cu;
            goto label_26ce8c;
        }
    }
    ctx->pc = 0x26CE48u;
label_26ce48:
    // 0x26ce48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26ce4c:
    // 0x26ce4c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26ce4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26ce50:
    // 0x26ce50: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ce54:
    // 0x26ce54: 0x40f809  jalr        $v0
label_26ce58:
    if (ctx->pc == 0x26CE58u) {
        ctx->pc = 0x26CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE54u;
        // 0x26ce58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE5Cu;
        goto label_26ce5c;
    }
    ctx->pc = 0x26CE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CE5Cu);
        ctx->pc = 0x26CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE54u;
        // 0x26ce58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CE54u, 0x26CE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CE5Cu;
label_26ce5c:
    // 0x26ce5c: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26ce5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26ce60:
    // 0x26ce60: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26ce60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26ce64:
    // 0x26ce64: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26ce64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26ce68:
    // 0x26ce68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ce68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ce6c:
    // 0x26ce6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26ce6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ce70:
    // 0x26ce70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26ce70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ce74:
    // 0x26ce74: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26ce74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ce78:
    // 0x26ce78: 0x254acb20  addiu       $t2, $t2, -0x34E0
    ctx->pc = 0x26ce78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294953760));
label_26ce7c:
    // 0x26ce7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26ce80:
    // 0x26ce80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26ce80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ce84:
    // 0x26ce84: 0xc041664  jal         func_105990
label_26ce88:
    if (ctx->pc == 0x26CE88u) {
        ctx->pc = 0x26CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE84u;
        // 0x26ce88: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE8Cu;
        goto label_26ce8c;
    }
    ctx->pc = 0x26CE84u;
    SET_GPR_U32(ctx, 31, 0x26CE8Cu);
    ctx->pc = 0x26CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE84u;
    // 0x26ce88: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26CE84u, 0x26CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE8Cu;
label_26ce8c:
    // 0x26ce8c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_26ce90:
    if (ctx->pc == 0x26CE90u) {
        ctx->pc = 0x26CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE8Cu;
        // 0x26ce90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE94u;
        goto label_26ce94;
    }
    ctx->pc = 0x26CE8Cu;
    {
        const bool branch_taken_0x26ce8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE8Cu;
        // 0x26ce90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce8c) {
            ctx->pc = 0x26CEB4u;
            goto label_26ceb4;
        }
    }
    ctx->pc = 0x26CE94u;
label_26ce94:
    // 0x26ce94: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26ce98:
    // 0x26ce98: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ce98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ce9c:
    // 0x26ce9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26ce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26cea0:
    // 0x26cea0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26cea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26cea4:
    // 0x26cea4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26cea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26cea8:
    // 0x26cea8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26cea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ceac:
    // 0x26ceac: 0xc041b20  jal         func_106C80
label_26ceb0:
    if (ctx->pc == 0x26CEB0u) {
        ctx->pc = 0x26CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEACu;
        // 0x26ceb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CEB4u;
        goto label_26ceb4;
    }
    ctx->pc = 0x26CEACu;
    SET_GPR_U32(ctx, 31, 0x26CEB4u);
    ctx->pc = 0x26CEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEACu;
    // 0x26ceb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26CEACu, 0x26CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEB4u;
label_26ceb4:
    // 0x26ceb4: 0xc05d484  jal         func_175210
label_26ceb8:
    if (ctx->pc == 0x26CEB8u) {
        ctx->pc = 0x26CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEB4u;
        // 0x26ceb8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CEBCu;
        goto label_26cebc;
    }
    ctx->pc = 0x26CEB4u;
    SET_GPR_U32(ctx, 31, 0x26CEBCu);
    ctx->pc = 0x26CEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEB4u;
    // 0x26ceb8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26CEB4u, 0x26CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEBCu;
label_26cebc:
    // 0x26cebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cec0:
    // 0x26cec0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26cec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26cec4:
    // 0x26cec4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26cec8:
    // 0x26cec8: 0xa0f809  jalr        $a1
label_26cecc:
    if (ctx->pc == 0x26CECCu) {
        ctx->pc = 0x26CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEC8u;
        // 0x26cecc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CED0u;
        goto label_26ced0;
    }
    ctx->pc = 0x26CEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26CED0u);
        ctx->pc = 0x26CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEC8u;
        // 0x26cecc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CEC8u, 0x26CED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CED0u;
label_26ced0:
    // 0x26ced0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ced4:
    // 0x26ced4: 0xc087016  jal         func_21C058
label_26ced8:
    if (ctx->pc == 0x26CED8u) {
        ctx->pc = 0x26CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CED4u;
        // 0x26ced8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CEDCu;
        goto label_26cedc;
    }
    ctx->pc = 0x26CED4u;
    SET_GPR_U32(ctx, 31, 0x26CEDCu);
    ctx->pc = 0x26CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CED4u;
    // 0x26ced8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26CED4u, 0x26CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEDCu;
label_26cedc:
    // 0x26cedc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26cedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26cee0:
    // 0x26cee0: 0xc05d53a  jal         func_1754E8
label_26cee4:
    if (ctx->pc == 0x26CEE4u) {
        ctx->pc = 0x26CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEE0u;
        // 0x26cee4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CEE8u;
        goto label_26cee8;
    }
    ctx->pc = 0x26CEE0u;
    SET_GPR_U32(ctx, 31, 0x26CEE8u);
    ctx->pc = 0x26CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEE0u;
    // 0x26cee4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26CEE0u, 0x26CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEE8u;
label_26cee8:
    // 0x26cee8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ceec:
    // 0x26ceec: 0xc05d4f6  jal         func_1753D8
label_26cef0:
    if (ctx->pc == 0x26CEF0u) {
        ctx->pc = 0x26CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEECu;
        // 0x26cef0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CEF4u;
        goto label_26cef4;
    }
    ctx->pc = 0x26CEECu;
    SET_GPR_U32(ctx, 31, 0x26CEF4u);
    ctx->pc = 0x26CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEECu;
    // 0x26cef0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26CEECu, 0x26CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEF4u;
label_26cef4:
    // 0x26cef4: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x26cef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_26cef8:
    // 0x26cef8: 0xc089990  jal         func_226640
label_26cefc:
    if (ctx->pc == 0x26CEFCu) {
        ctx->pc = 0x26CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEF8u;
        // 0x26cefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF00u;
        goto label_26cf00;
    }
    ctx->pc = 0x26CEF8u;
    SET_GPR_U32(ctx, 31, 0x26CF00u);
    ctx->pc = 0x26CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEF8u;
    // 0x26cefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26CEF8u, 0x26CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF00u;
label_26cf00:
    // 0x26cf00: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26cf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26cf04:
    // 0x26cf04: 0xc041532  jal         func_1054C8
label_26cf08:
    if (ctx->pc == 0x26CF08u) {
        ctx->pc = 0x26CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF04u;
        // 0x26cf08: 0x8e5600d8  lw          $s6, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF0Cu;
        goto label_26cf0c;
    }
    ctx->pc = 0x26CF04u;
    SET_GPR_U32(ctx, 31, 0x26CF0Cu);
    ctx->pc = 0x26CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF04u;
    // 0x26cf08: 0x8e5600d8  lw          $s6, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26CF04u, 0x26CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF0Cu;
label_26cf0c:
    // 0x26cf0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26cf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26cf10:
    // 0x26cf10: 0xc041532  jal         func_1054C8
label_26cf14:
    if (ctx->pc == 0x26CF14u) {
        ctx->pc = 0x26CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF10u;
        // 0x26cf14: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF18u;
        goto label_26cf18;
    }
    ctx->pc = 0x26CF10u;
    SET_GPR_U32(ctx, 31, 0x26CF18u);
    ctx->pc = 0x26CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF10u;
    // 0x26cf14: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26CF10u, 0x26CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF18u;
label_26cf18:
    // 0x26cf18: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26cf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26cf1c:
    // 0x26cf1c: 0xc041532  jal         func_1054C8
label_26cf20:
    if (ctx->pc == 0x26CF20u) {
        ctx->pc = 0x26CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF1Cu;
        // 0x26cf20: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF24u;
        goto label_26cf24;
    }
    ctx->pc = 0x26CF1Cu;
    SET_GPR_U32(ctx, 31, 0x26CF24u);
    ctx->pc = 0x26CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF1Cu;
    // 0x26cf20: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26CF1Cu, 0x26CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF24u;
label_26cf24:
    // 0x26cf24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26cf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26cf28:
    // 0x26cf28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26cf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26cf2c:
    // 0x26cf2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26cf2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cf30:
    // 0x26cf30: 0xc08bc40  jal         func_22F100
label_26cf34:
    if (ctx->pc == 0x26CF34u) {
        ctx->pc = 0x26CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF30u;
        // 0x26cf34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF38u;
        goto label_26cf38;
    }
    ctx->pc = 0x26CF30u;
    SET_GPR_U32(ctx, 31, 0x26CF38u);
    ctx->pc = 0x26CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF30u;
    // 0x26cf34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F100u, 0x26CF30u, 0x26CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF38u;
label_26cf38:
    // 0x26cf38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26cf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26cf3c:
    // 0x26cf3c: 0xc089a66  jal         func_226998
label_26cf40:
    if (ctx->pc == 0x26CF40u) {
        ctx->pc = 0x26CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF3Cu;
        // 0x26cf40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF44u;
        goto label_26cf44;
    }
    ctx->pc = 0x26CF3Cu;
    SET_GPR_U32(ctx, 31, 0x26CF44u);
    ctx->pc = 0x26CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF3Cu;
    // 0x26cf40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226998u, 0x26CF3Cu, 0x26CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF44u;
label_26cf44:
    // 0x26cf44: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_26cf48:
    if (ctx->pc == 0x26CF48u) {
        ctx->pc = 0x26CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF44u;
        // 0x26cf48: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF4Cu;
        goto label_26cf4c;
    }
    ctx->pc = 0x26CF44u;
    {
        const bool branch_taken_0x26cf44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF44u;
        // 0x26cf48: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf44) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CF4Cu;
label_26cf4c:
    // 0x26cf4c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26cf50:
    // 0x26cf50: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26cf50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26cf54:
    // 0x26cf54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26cf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26cf58:
    // 0x26cf58: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26cf58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26cf5c:
    // 0x26cf5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cf5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cf60:
    // 0x26cf60: 0xc04159e  jal         func_105678
label_26cf64:
    if (ctx->pc == 0x26CF64u) {
        ctx->pc = 0x26CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF60u;
        // 0x26cf64: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF68u;
        goto label_26cf68;
    }
    ctx->pc = 0x26CF60u;
    SET_GPR_U32(ctx, 31, 0x26CF68u);
    ctx->pc = 0x26CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF60u;
    // 0x26cf64: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26CF60u, 0x26CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF68u;
label_26cf68:
    // 0x26cf68: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x26cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26cf6c:
    // 0x26cf6c: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
label_26cf70:
    if (ctx->pc == 0x26CF70u) {
        ctx->pc = 0x26CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF6Cu;
        // 0x26cf70: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF74u;
        goto label_26cf74;
    }
    ctx->pc = 0x26CF6Cu;
    {
        const bool branch_taken_0x26cf6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF6Cu;
        // 0x26cf70: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf6c) {
            ctx->pc = 0x26CFCCu;
            goto label_26cfcc;
        }
    }
    ctx->pc = 0x26CF74u;
label_26cf74:
    // 0x26cf74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26cf78:
    // 0x26cf78: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26cf78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26cf7c:
    // 0x26cf7c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26cf80:
    // 0x26cf80: 0x40f809  jalr        $v0
label_26cf84:
    if (ctx->pc == 0x26CF84u) {
        ctx->pc = 0x26CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF80u;
        // 0x26cf84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CF88u;
        goto label_26cf88;
    }
    ctx->pc = 0x26CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CF88u);
        ctx->pc = 0x26CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF80u;
        // 0x26cf84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CF80u, 0x26CF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CF88u;
label_26cf88:
    // 0x26cf88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26cf8c:
    // 0x26cf8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cf8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cf90:
    // 0x26cf90: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26cf90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26cf94:
    // 0x26cf94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26cf98:
    // 0x26cf98: 0x40f809  jalr        $v0
label_26cf9c:
    if (ctx->pc == 0x26CF9Cu) {
        ctx->pc = 0x26CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF98u;
        // 0x26cf9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFA0u;
        goto label_26cfa0;
    }
    ctx->pc = 0x26CF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CFA0u);
        ctx->pc = 0x26CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF98u;
        // 0x26cf9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CF98u, 0x26CFA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CFA0u;
label_26cfa0:
    // 0x26cfa0: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26cfa0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26cfa4:
    // 0x26cfa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26cfa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26cfa8:
    // 0x26cfa8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x26cfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26cfac:
    // 0x26cfac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26cfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26cfb0:
    // 0x26cfb0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x26cfb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26cfb4:
    // 0x26cfb4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26cfb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cfb8:
    // 0x26cfb8: 0x256bcb98  addiu       $t3, $t3, -0x3468
    ctx->pc = 0x26cfb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294953880));
label_26cfbc:
    // 0x26cfbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26cfc0:
    // 0x26cfc0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26cfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26cfc4:
    // 0x26cfc4: 0xc04229e  jal         func_108A78
label_26cfc8:
    if (ctx->pc == 0x26CFC8u) {
        ctx->pc = 0x26CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFC4u;
        // 0x26cfc8: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFCCu;
        goto label_26cfcc;
    }
    ctx->pc = 0x26CFC4u;
    SET_GPR_U32(ctx, 31, 0x26CFCCu);
    ctx->pc = 0x26CFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFC4u;
    // 0x26cfc8: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26CFC4u, 0x26CFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFCCu;
label_26cfcc:
    // 0x26cfcc: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26cfd0:
    if (ctx->pc == 0x26CFD0u) {
        ctx->pc = 0x26CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFCCu;
        // 0x26cfd0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFD4u;
        goto label_26cfd4;
    }
    ctx->pc = 0x26CFCCu;
    {
        const bool branch_taken_0x26cfcc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFCCu;
        // 0x26cfd0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfcc) {
            ctx->pc = 0x26CFF4u;
            goto label_26cff4;
        }
    }
    ctx->pc = 0x26CFD4u;
label_26cfd4:
    // 0x26cfd4: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26cfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26cfd8:
    // 0x26cfd8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26cfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26cfdc:
    // 0x26cfdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26cfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26cfe0:
    // 0x26cfe0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26cfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26cfe4:
    // 0x26cfe4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26cfe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26cfe8:
    // 0x26cfe8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26cfe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26cfec:
    // 0x26cfec: 0xc041b20  jal         func_106C80
label_26cff0:
    if (ctx->pc == 0x26CFF0u) {
        ctx->pc = 0x26CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFECu;
        // 0x26cff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFF4u;
        goto label_26cff4;
    }
    ctx->pc = 0x26CFECu;
    SET_GPR_U32(ctx, 31, 0x26CFF4u);
    ctx->pc = 0x26CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFECu;
    // 0x26cff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26CFECu, 0x26CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFF4u;
label_26cff4:
    // 0x26cff4: 0xc05d484  jal         func_175210
label_26cff8:
    if (ctx->pc == 0x26CFF8u) {
        ctx->pc = 0x26CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFF4u;
        // 0x26cff8: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CFFCu;
        goto label_26cffc;
    }
    ctx->pc = 0x26CFF4u;
    SET_GPR_U32(ctx, 31, 0x26CFFCu);
    ctx->pc = 0x26CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFF4u;
    // 0x26cff8: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26CFF4u, 0x26CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFFCu;
label_26cffc:
    // 0x26cffc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26d000:
    // 0x26d000: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26d000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26d004:
    // 0x26d004: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26d004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26d008:
    // 0x26d008: 0xa0f809  jalr        $a1
label_26d00c:
    if (ctx->pc == 0x26D00Cu) {
        ctx->pc = 0x26D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D008u;
        // 0x26d00c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D010u;
        goto label_26d010;
    }
    ctx->pc = 0x26D008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26D010u);
        ctx->pc = 0x26D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D008u;
        // 0x26d00c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D008u, 0x26D010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D010u;
label_26d010:
    // 0x26d010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d014:
    // 0x26d014: 0xc087016  jal         func_21C058
label_26d018:
    if (ctx->pc == 0x26D018u) {
        ctx->pc = 0x26D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D014u;
        // 0x26d018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D01Cu;
        goto label_26d01c;
    }
    ctx->pc = 0x26D014u;
    SET_GPR_U32(ctx, 31, 0x26D01Cu);
    ctx->pc = 0x26D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D014u;
    // 0x26d018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26D014u, 0x26D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D01Cu;
label_26d01c:
    // 0x26d01c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26d01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d020:
    // 0x26d020: 0xc05d53a  jal         func_1754E8
label_26d024:
    if (ctx->pc == 0x26D024u) {
        ctx->pc = 0x26D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D020u;
        // 0x26d024: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D028u;
        goto label_26d028;
    }
    ctx->pc = 0x26D020u;
    SET_GPR_U32(ctx, 31, 0x26D028u);
    ctx->pc = 0x26D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D020u;
    // 0x26d024: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26D020u, 0x26D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D028u;
label_26d028:
    // 0x26d028: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26d028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26d02c:
    // 0x26d02c: 0xc05d4f6  jal         func_1753D8
label_26d030:
    if (ctx->pc == 0x26D030u) {
        ctx->pc = 0x26D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D02Cu;
        // 0x26d030: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D034u;
        goto label_26d034;
    }
    ctx->pc = 0x26D02Cu;
    SET_GPR_U32(ctx, 31, 0x26D034u);
    ctx->pc = 0x26D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D02Cu;
    // 0x26d030: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26D02Cu, 0x26D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D034u;
label_26d034:
    // 0x26d034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d038:
    // 0x26d038: 0xc089990  jal         func_226640
label_26d03c:
    if (ctx->pc == 0x26D03Cu) {
        ctx->pc = 0x26D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D038u;
        // 0x26d03c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D040u;
        goto label_26d040;
    }
    ctx->pc = 0x26D038u;
    SET_GPR_U32(ctx, 31, 0x26D040u);
    ctx->pc = 0x26D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D038u;
    // 0x26d03c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26D038u, 0x26D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D040u;
label_26d040:
    // 0x26d040: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26d040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26d044:
    // 0x26d044: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26d044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26d048:
    // 0x26d048: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26d048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26d04c:
    // 0x26d04c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26d04cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26d050:
    // 0x26d050: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26d050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26d054:
    // 0x26d054: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26d054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26d058:
    // 0x26d058: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x26d058u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26d05c:
    // 0x26d05c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x26d05cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26d060:
    // 0x26d060: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x26d060u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26d064:
    // 0x26d064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26d064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26d068:
    // 0x26d068: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x26d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26d06c:
    // 0x26d06c: 0x3e00008  jr          $ra
label_26d070:
    if (ctx->pc == 0x26D070u) {
        ctx->pc = 0x26D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D06Cu;
        // 0x26d070: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D074u;
        goto label_26d074;
    }
    ctx->pc = 0x26D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D06Cu;
        // 0x26d070: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D074u;
label_26d074:
    // 0x26d074: 0x0  nop
    ctx->pc = 0x26d074u;
    // NOP
    ctx->pc = 0x26d078u;
}
