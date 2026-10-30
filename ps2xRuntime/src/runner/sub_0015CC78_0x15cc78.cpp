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

// Function: sub_0015CC78
// Address: 0x15cc78 - 0x15cf00
void sub_0015CC78_0x15cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CC78_0x15cc78");
#endif

    switch (ctx->pc) {
        case 0x15cc78u: goto label_15cc78;
        case 0x15cc7cu: goto label_15cc7c;
        case 0x15cc80u: goto label_15cc80;
        case 0x15cc84u: goto label_15cc84;
        case 0x15cc88u: goto label_15cc88;
        case 0x15cc8cu: goto label_15cc8c;
        case 0x15cc90u: goto label_15cc90;
        case 0x15cc94u: goto label_15cc94;
        case 0x15cc98u: goto label_15cc98;
        case 0x15cc9cu: goto label_15cc9c;
        case 0x15cca0u: goto label_15cca0;
        case 0x15cca4u: goto label_15cca4;
        case 0x15cca8u: goto label_15cca8;
        case 0x15ccacu: goto label_15ccac;
        case 0x15ccb0u: goto label_15ccb0;
        case 0x15ccb4u: goto label_15ccb4;
        case 0x15ccb8u: goto label_15ccb8;
        case 0x15ccbcu: goto label_15ccbc;
        case 0x15ccc0u: goto label_15ccc0;
        case 0x15ccc4u: goto label_15ccc4;
        case 0x15ccc8u: goto label_15ccc8;
        case 0x15ccccu: goto label_15cccc;
        case 0x15ccd0u: goto label_15ccd0;
        case 0x15ccd4u: goto label_15ccd4;
        case 0x15ccd8u: goto label_15ccd8;
        case 0x15ccdcu: goto label_15ccdc;
        case 0x15cce0u: goto label_15cce0;
        case 0x15cce4u: goto label_15cce4;
        case 0x15cce8u: goto label_15cce8;
        case 0x15ccecu: goto label_15ccec;
        case 0x15ccf0u: goto label_15ccf0;
        case 0x15ccf4u: goto label_15ccf4;
        case 0x15ccf8u: goto label_15ccf8;
        case 0x15ccfcu: goto label_15ccfc;
        case 0x15cd00u: goto label_15cd00;
        case 0x15cd04u: goto label_15cd04;
        case 0x15cd08u: goto label_15cd08;
        case 0x15cd0cu: goto label_15cd0c;
        case 0x15cd10u: goto label_15cd10;
        case 0x15cd14u: goto label_15cd14;
        case 0x15cd18u: goto label_15cd18;
        case 0x15cd1cu: goto label_15cd1c;
        case 0x15cd20u: goto label_15cd20;
        case 0x15cd24u: goto label_15cd24;
        case 0x15cd28u: goto label_15cd28;
        case 0x15cd2cu: goto label_15cd2c;
        case 0x15cd30u: goto label_15cd30;
        case 0x15cd34u: goto label_15cd34;
        case 0x15cd38u: goto label_15cd38;
        case 0x15cd3cu: goto label_15cd3c;
        case 0x15cd40u: goto label_15cd40;
        case 0x15cd44u: goto label_15cd44;
        case 0x15cd48u: goto label_15cd48;
        case 0x15cd4cu: goto label_15cd4c;
        case 0x15cd50u: goto label_15cd50;
        case 0x15cd54u: goto label_15cd54;
        case 0x15cd58u: goto label_15cd58;
        case 0x15cd5cu: goto label_15cd5c;
        case 0x15cd60u: goto label_15cd60;
        case 0x15cd64u: goto label_15cd64;
        case 0x15cd68u: goto label_15cd68;
        case 0x15cd6cu: goto label_15cd6c;
        case 0x15cd70u: goto label_15cd70;
        case 0x15cd74u: goto label_15cd74;
        case 0x15cd78u: goto label_15cd78;
        case 0x15cd7cu: goto label_15cd7c;
        case 0x15cd80u: goto label_15cd80;
        case 0x15cd84u: goto label_15cd84;
        case 0x15cd88u: goto label_15cd88;
        case 0x15cd8cu: goto label_15cd8c;
        case 0x15cd90u: goto label_15cd90;
        case 0x15cd94u: goto label_15cd94;
        case 0x15cd98u: goto label_15cd98;
        case 0x15cd9cu: goto label_15cd9c;
        case 0x15cda0u: goto label_15cda0;
        case 0x15cda4u: goto label_15cda4;
        case 0x15cda8u: goto label_15cda8;
        case 0x15cdacu: goto label_15cdac;
        case 0x15cdb0u: goto label_15cdb0;
        case 0x15cdb4u: goto label_15cdb4;
        case 0x15cdb8u: goto label_15cdb8;
        case 0x15cdbcu: goto label_15cdbc;
        case 0x15cdc0u: goto label_15cdc0;
        case 0x15cdc4u: goto label_15cdc4;
        case 0x15cdc8u: goto label_15cdc8;
        case 0x15cdccu: goto label_15cdcc;
        case 0x15cdd0u: goto label_15cdd0;
        case 0x15cdd4u: goto label_15cdd4;
        case 0x15cdd8u: goto label_15cdd8;
        case 0x15cddcu: goto label_15cddc;
        case 0x15cde0u: goto label_15cde0;
        case 0x15cde4u: goto label_15cde4;
        case 0x15cde8u: goto label_15cde8;
        case 0x15cdecu: goto label_15cdec;
        case 0x15cdf0u: goto label_15cdf0;
        case 0x15cdf4u: goto label_15cdf4;
        case 0x15cdf8u: goto label_15cdf8;
        case 0x15cdfcu: goto label_15cdfc;
        case 0x15ce00u: goto label_15ce00;
        case 0x15ce04u: goto label_15ce04;
        case 0x15ce08u: goto label_15ce08;
        case 0x15ce0cu: goto label_15ce0c;
        case 0x15ce10u: goto label_15ce10;
        case 0x15ce14u: goto label_15ce14;
        case 0x15ce18u: goto label_15ce18;
        case 0x15ce1cu: goto label_15ce1c;
        case 0x15ce20u: goto label_15ce20;
        case 0x15ce24u: goto label_15ce24;
        case 0x15ce28u: goto label_15ce28;
        case 0x15ce2cu: goto label_15ce2c;
        case 0x15ce30u: goto label_15ce30;
        case 0x15ce34u: goto label_15ce34;
        case 0x15ce38u: goto label_15ce38;
        case 0x15ce3cu: goto label_15ce3c;
        case 0x15ce40u: goto label_15ce40;
        case 0x15ce44u: goto label_15ce44;
        case 0x15ce48u: goto label_15ce48;
        case 0x15ce4cu: goto label_15ce4c;
        case 0x15ce50u: goto label_15ce50;
        case 0x15ce54u: goto label_15ce54;
        case 0x15ce58u: goto label_15ce58;
        case 0x15ce5cu: goto label_15ce5c;
        case 0x15ce60u: goto label_15ce60;
        case 0x15ce64u: goto label_15ce64;
        case 0x15ce68u: goto label_15ce68;
        case 0x15ce6cu: goto label_15ce6c;
        case 0x15ce70u: goto label_15ce70;
        case 0x15ce74u: goto label_15ce74;
        case 0x15ce78u: goto label_15ce78;
        case 0x15ce7cu: goto label_15ce7c;
        case 0x15ce80u: goto label_15ce80;
        case 0x15ce84u: goto label_15ce84;
        case 0x15ce88u: goto label_15ce88;
        case 0x15ce8cu: goto label_15ce8c;
        case 0x15ce90u: goto label_15ce90;
        case 0x15ce94u: goto label_15ce94;
        case 0x15ce98u: goto label_15ce98;
        case 0x15ce9cu: goto label_15ce9c;
        case 0x15cea0u: goto label_15cea0;
        case 0x15cea4u: goto label_15cea4;
        case 0x15cea8u: goto label_15cea8;
        case 0x15ceacu: goto label_15ceac;
        case 0x15ceb0u: goto label_15ceb0;
        case 0x15ceb4u: goto label_15ceb4;
        case 0x15ceb8u: goto label_15ceb8;
        case 0x15cebcu: goto label_15cebc;
        case 0x15cec0u: goto label_15cec0;
        case 0x15cec4u: goto label_15cec4;
        case 0x15cec8u: goto label_15cec8;
        case 0x15ceccu: goto label_15cecc;
        case 0x15ced0u: goto label_15ced0;
        case 0x15ced4u: goto label_15ced4;
        case 0x15ced8u: goto label_15ced8;
        case 0x15cedcu: goto label_15cedc;
        case 0x15cee0u: goto label_15cee0;
        case 0x15cee4u: goto label_15cee4;
        case 0x15cee8u: goto label_15cee8;
        case 0x15ceecu: goto label_15ceec;
        case 0x15cef0u: goto label_15cef0;
        case 0x15cef4u: goto label_15cef4;
        case 0x15cef8u: goto label_15cef8;
        case 0x15cefcu: goto label_15cefc;
        default: break;
    }

    ctx->pc = 0x15cc78u;

label_15cc78:
    // 0x15cc78: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_15cc7c:
    // 0x15cc7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15cc80:
    // 0x15cc80: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x15cc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_15cc84:
    // 0x15cc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cc88:
    // 0x15cc88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15cc88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15cc8c:
    // 0x15cc8c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x15cc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_15cc90:
    // 0x15cc90: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x15cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15cc94:
    // 0x15cc94: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15cc94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15cc98:
    // 0x15cc98: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x15cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_15cc9c:
    // 0x15cc9c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x15cc9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_15cca0:
    // 0x15cca0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x15cca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_15cca4:
    // 0x15cca4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x15cca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_15cca8:
    // 0x15cca8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x15cca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_15ccac:
    // 0x15ccac: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x15ccacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_15ccb0:
    // 0x15ccb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15ccb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15ccb4:
    // 0x15ccb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15ccb8:
    // 0x15ccb8: 0xc0517d8  jal         func_145F60
label_15ccbc:
    if (ctx->pc == 0x15CCBCu) {
        ctx->pc = 0x15CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCB8u;
        // 0x15ccbc: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCC0u;
        goto label_15ccc0;
    }
    ctx->pc = 0x15CCB8u;
    SET_GPR_U32(ctx, 31, 0x15CCC0u);
    ctx->pc = 0x15CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCB8u;
    // 0x15ccbc: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15CCB8u, 0x15CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCC0u;
label_15ccc0:
    // 0x15ccc0: 0xc05587e  jal         func_1561F8
label_15ccc4:
    if (ctx->pc == 0x15CCC4u) {
        ctx->pc = 0x15CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCC0u;
        // 0x15ccc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCC8u;
        goto label_15ccc8;
    }
    ctx->pc = 0x15CCC0u;
    SET_GPR_U32(ctx, 31, 0x15CCC8u);
    ctx->pc = 0x15CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCC0u;
    // 0x15ccc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x15CCC0u, 0x15CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCC8u;
label_15ccc8:
    // 0x15ccc8: 0xc055888  jal         func_156220
label_15cccc:
    if (ctx->pc == 0x15CCCCu) {
        ctx->pc = 0x15CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCC8u;
        // 0x15cccc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCD0u;
        goto label_15ccd0;
    }
    ctx->pc = 0x15CCC8u;
    SET_GPR_U32(ctx, 31, 0x15CCD0u);
    ctx->pc = 0x15CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCC8u;
    // 0x15cccc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x15CCC8u, 0x15CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCD0u;
label_15ccd0:
    // 0x15ccd0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15ccd4:
    // 0x15ccd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15ccd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15ccd8:
    // 0x15ccd8: 0xc0e8c52  jal         func_3A3148
label_15ccdc:
    if (ctx->pc == 0x15CCDCu) {
        ctx->pc = 0x15CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCD8u;
        // 0x15ccdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCE0u;
        goto label_15cce0;
    }
    ctx->pc = 0x15CCD8u;
    SET_GPR_U32(ctx, 31, 0x15CCE0u);
    ctx->pc = 0x15CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCD8u;
    // 0x15ccdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15CCD8u, 0x15CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCE0u;
label_15cce0:
    // 0x15cce0: 0xc0558b2  jal         func_1562C8
label_15cce4:
    if (ctx->pc == 0x15CCE4u) {
        ctx->pc = 0x15CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCE0u;
        // 0x15cce4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCE8u;
        goto label_15cce8;
    }
    ctx->pc = 0x15CCE0u;
    SET_GPR_U32(ctx, 31, 0x15CCE8u);
    ctx->pc = 0x15CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCE0u;
    // 0x15cce4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x15CCE0u, 0x15CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCE8u;
label_15cce8:
    // 0x15cce8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15ccec:
    // 0x15ccec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ccf0:
    // 0x15ccf0: 0x8c62536c  lw          $v0, 0x536C($v1)
    ctx->pc = 0x15ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21356)));
label_15ccf4:
    // 0x15ccf4: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
label_15ccf8:
    if (ctx->pc == 0x15CCF8u) {
        ctx->pc = 0x15CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCF4u;
        // 0x15ccf8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCFCu;
        goto label_15ccfc;
    }
    ctx->pc = 0x15CCF4u;
    {
        const bool branch_taken_0x15ccf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x15CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCF4u;
        // 0x15ccf8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccf4) {
            ctx->pc = 0x15CD2Cu;
            goto label_15cd2c;
        }
    }
    ctx->pc = 0x15CCFCu;
label_15ccfc:
    // 0x15ccfc: 0x8e6347c4  lw          $v1, 0x47C4($s3)
    ctx->pc = 0x15ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
label_15cd00:
    // 0x15cd00: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15cd04:
    // 0x15cd04: 0xc0d4456  jal         func_351158
label_15cd08:
    if (ctx->pc == 0x15CD08u) {
        ctx->pc = 0x15CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD04u;
        // 0x15cd08: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD0Cu;
        goto label_15cd0c;
    }
    ctx->pc = 0x15CD04u;
    SET_GPR_U32(ctx, 31, 0x15CD0Cu);
    ctx->pc = 0x15CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD04u;
    // 0x15cd08: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x15CD04u, 0x15CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD0Cu;
label_15cd0c:
    // 0x15cd0c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15cd10:
    // 0x15cd10: 0xc0e8c6a  jal         func_3A31A8
label_15cd14:
    if (ctx->pc == 0x15CD14u) {
        ctx->pc = 0x15CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD10u;
        // 0x15cd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD18u;
        goto label_15cd18;
    }
    ctx->pc = 0x15CD10u;
    SET_GPR_U32(ctx, 31, 0x15CD18u);
    ctx->pc = 0x15CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD10u;
    // 0x15cd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x15CD10u, 0x15CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD18u;
label_15cd18:
    // 0x15cd18: 0xc0926e6  jal         func_249B98
label_15cd1c:
    if (ctx->pc == 0x15CD1Cu) {
        ctx->pc = 0x15CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD18u;
        // 0x15cd1c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD20u;
        goto label_15cd20;
    }
    ctx->pc = 0x15CD18u;
    SET_GPR_U32(ctx, 31, 0x15CD20u);
    ctx->pc = 0x15CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD18u;
    // 0x15cd1c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B98u, 0x15CD18u, 0x15CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD20u;
label_15cd20:
    // 0x15cd20: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15cd24:
    // 0x15cd24: 0xc0e8c6a  jal         func_3A31A8
label_15cd28:
    if (ctx->pc == 0x15CD28u) {
        ctx->pc = 0x15CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD24u;
        // 0x15cd28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD2Cu;
        goto label_15cd2c;
    }
    ctx->pc = 0x15CD24u;
    SET_GPR_U32(ctx, 31, 0x15CD2Cu);
    ctx->pc = 0x15CD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD24u;
    // 0x15cd28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x15CD24u, 0x15CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD2Cu;
label_15cd2c:
    // 0x15cd2c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15cd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15cd30:
    // 0x15cd30: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x15cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_15cd34:
    // 0x15cd34: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x15cd34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15cd38:
    // 0x15cd38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15cd38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cd3c:
    // 0x15cd3c: 0xc062a60  jal         func_18A980
label_15cd40:
    if (ctx->pc == 0x15CD40u) {
        ctx->pc = 0x15CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD3Cu;
        // 0x15cd40: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD44u;
        goto label_15cd44;
    }
    ctx->pc = 0x15CD3Cu;
    SET_GPR_U32(ctx, 31, 0x15CD44u);
    ctx->pc = 0x15CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD3Cu;
    // 0x15cd40: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x15CD3Cu, 0x15CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD44u;
label_15cd44:
    // 0x15cd44: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x15cd44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_15cd48:
    // 0x15cd48: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x15cd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_15cd4c:
    // 0x15cd4c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15cd50:
    // 0x15cd50: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15cd50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15cd54:
    // 0x15cd54: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15cd58:
    // 0x15cd58: 0x60f809  jalr        $v1
label_15cd5c:
    if (ctx->pc == 0x15CD5Cu) {
        ctx->pc = 0x15CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD58u;
        // 0x15cd5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD60u;
        goto label_15cd60;
    }
    ctx->pc = 0x15CD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CD60u);
        ctx->pc = 0x15CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD58u;
        // 0x15cd5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD58u, 0x15CD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CD60u;
label_15cd60:
    // 0x15cd60: 0xc103e28  jal         func_40F8A0
label_15cd64:
    if (ctx->pc == 0x15CD64u) {
        ctx->pc = 0x15CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD60u;
        // 0x15cd64: 0x8e6447c4  lw          $a0, 0x47C4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD68u;
        goto label_15cd68;
    }
    ctx->pc = 0x15CD60u;
    SET_GPR_U32(ctx, 31, 0x15CD68u);
    ctx->pc = 0x15CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD60u;
    // 0x15cd64: 0x8e6447c4  lw          $a0, 0x47C4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x15CD60u, 0x15CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD68u;
label_15cd68:
    // 0x15cd68: 0xc06181a  jal         func_186068
label_15cd6c:
    if (ctx->pc == 0x15CD6Cu) {
        ctx->pc = 0x15CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD68u;
        // 0x15cd6c: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD70u;
        goto label_15cd70;
    }
    ctx->pc = 0x15CD68u;
    SET_GPR_U32(ctx, 31, 0x15CD70u);
    ctx->pc = 0x15CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD68u;
    // 0x15cd6c: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x15CD68u, 0x15CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD70u;
label_15cd70:
    // 0x15cd70: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x15cd70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15cd74:
    // 0x15cd74: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x15cd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15cd78:
    // 0x15cd78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15cd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cd7c:
    // 0x15cd7c: 0xc047e6c  jal         func_11F9B0
label_15cd80:
    if (ctx->pc == 0x15CD80u) {
        ctx->pc = 0x15CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD7Cu;
        // 0x15cd80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD84u;
        goto label_15cd84;
    }
    ctx->pc = 0x15CD7Cu;
    SET_GPR_U32(ctx, 31, 0x15CD84u);
    ctx->pc = 0x15CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD7Cu;
    // 0x15cd80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15CD7Cu, 0x15CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD84u;
label_15cd84:
    // 0x15cd84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15cd88:
    // 0x15cd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15cd8c:
    // 0x15cd8c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15cd8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_15cd90:
    // 0x15cd90: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x15cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15cd94:
    // 0x15cd94: 0xc0f809  jalr        $a2
label_15cd98:
    if (ctx->pc == 0x15CD98u) {
        ctx->pc = 0x15CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD94u;
        // 0x15cd98: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD9Cu;
        goto label_15cd9c;
    }
    ctx->pc = 0x15CD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15CD9Cu);
        ctx->pc = 0x15CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD94u;
        // 0x15cd98: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD94u, 0x15CD9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CD9Cu;
label_15cd9c:
    // 0x15cd9c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15cd9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15cda0:
    // 0x15cda0: 0x2e440002  sltiu       $a0, $s2, 0x2
    ctx->pc = 0x15cda0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15cda4:
    // 0x15cda4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x15cda4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_15cda8:
    // 0x15cda8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x15cda8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15cdac:
    // 0x15cdac: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15cdacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_15cdb0:
    // 0x15cdb0: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_15cdb4:
    if (ctx->pc == 0x15CDB4u) {
        ctx->pc = 0x15CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB0u;
        // 0x15cdb4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDB8u;
        goto label_15cdb8;
    }
    ctx->pc = 0x15CDB0u;
    {
        const bool branch_taken_0x15cdb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB0u;
        // 0x15cdb4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdb0) {
            ctx->pc = 0x15CD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cd78;
        }
    }
    ctx->pc = 0x15CDB8u;
label_15cdb8:
    // 0x15cdb8: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x15cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_15cdbc:
    // 0x15cdbc: 0xc043e04  jal         func_10F810
label_15cdc0:
    if (ctx->pc == 0x15CDC0u) {
        ctx->pc = 0x15CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDBCu;
        // 0x15cdc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDC4u;
        goto label_15cdc4;
    }
    ctx->pc = 0x15CDBCu;
    SET_GPR_U32(ctx, 31, 0x15CDC4u);
    ctx->pc = 0x15CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDBCu;
    // 0x15cdc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15CDBCu, 0x15CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDC4u;
label_15cdc4:
    // 0x15cdc4: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x15cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_15cdc8:
    // 0x15cdc8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_15cdcc:
    if (ctx->pc == 0x15CDCCu) {
        ctx->pc = 0x15CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDC8u;
        // 0x15cdcc: 0x8ec5ec8c  lw          $a1, -0x1374($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDD0u;
        goto label_15cdd0;
    }
    ctx->pc = 0x15CDC8u;
    {
        const bool branch_taken_0x15cdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDC8u;
        // 0x15cdcc: 0x8ec5ec8c  lw          $a1, -0x1374($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdc8) {
            ctx->pc = 0x15CE50u;
            goto label_15ce50;
        }
    }
    ctx->pc = 0x15CDD0u;
label_15cdd0:
    // 0x15cdd0: 0xc043d5e  jal         func_10F578
label_15cdd4:
    if (ctx->pc == 0x15CDD4u) {
        ctx->pc = 0x15CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD0u;
        // 0x15cdd4: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDD8u;
        goto label_15cdd8;
    }
    ctx->pc = 0x15CDD0u;
    SET_GPR_U32(ctx, 31, 0x15CDD8u);
    ctx->pc = 0x15CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDD0u;
    // 0x15cdd4: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x15CDD0u, 0x15CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDD8u;
label_15cdd8:
    // 0x15cdd8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_15cddc:
    if (ctx->pc == 0x15CDDCu) {
        ctx->pc = 0x15CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD8u;
        // 0x15cddc: 0x8ec5ec8c  lw          $a1, -0x1374($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDE0u;
        goto label_15cde0;
    }
    ctx->pc = 0x15CDD8u;
    {
        const bool branch_taken_0x15cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cdd8) {
            ctx->pc = 0x15CDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CDD8u;
            // 0x15cddc: 0x8ec5ec8c  lw          $a1, -0x1374($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CE50u;
            goto label_15ce50;
        }
    }
    ctx->pc = 0x15CDE0u;
label_15cde0:
    // 0x15cde0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15cde0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_15cde4:
    // 0x15cde4: 0x8e50489c  lw          $s0, 0x489C($s2)
    ctx->pc = 0x15cde4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_15cde8:
    // 0x15cde8: 0x92130118  lbu         $s3, 0x118($s0)
    ctx->pc = 0x15cde8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 280)));
label_15cdec:
    // 0x15cdec: 0xc136ad6  jal         func_4DAB58
label_15cdf0:
    if (ctx->pc == 0x15CDF0u) {
        ctx->pc = 0x15CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDECu;
        // 0x15cdf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDF4u;
        goto label_15cdf4;
    }
    ctx->pc = 0x15CDECu;
    SET_GPR_U32(ctx, 31, 0x15CDF4u);
    ctx->pc = 0x15CDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDECu;
    // 0x15cdf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x15CDECu, 0x15CDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDF4u;
label_15cdf4:
    // 0x15cdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15cdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15cdf8:
    // 0x15cdf8: 0xc136ad4  jal         func_4DAB50
label_15cdfc:
    if (ctx->pc == 0x15CDFCu) {
        ctx->pc = 0x15CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDF8u;
        // 0x15cdfc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE00u;
        goto label_15ce00;
    }
    ctx->pc = 0x15CDF8u;
    SET_GPR_U32(ctx, 31, 0x15CE00u);
    ctx->pc = 0x15CDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDF8u;
    // 0x15cdfc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x15CDF8u, 0x15CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE00u;
label_15ce00:
    // 0x15ce00: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x15ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_15ce04:
    // 0x15ce04: 0x8e45489c  lw          $a1, 0x489C($s2)
    ctx->pc = 0x15ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_15ce08:
    // 0x15ce08: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15ce08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15ce0c:
    // 0x15ce0c: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x15ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_15ce10:
    // 0x15ce10: 0x84a6033a  lh          $a2, 0x33A($a1)
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 826)));
label_15ce14:
    // 0x15ce14: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15ce14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15ce18:
    // 0x15ce18: 0x248401e0  addiu       $a0, $a0, 0x1E0
    ctx->pc = 0x15ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
label_15ce1c:
    // 0x15ce1c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x15ce1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_15ce20:
    // 0x15ce20: 0xc045c3a  jal         func_1170E8
label_15ce24:
    if (ctx->pc == 0x15CE24u) {
        ctx->pc = 0x15CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE20u;
        // 0x15ce24: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE28u;
        goto label_15ce28;
    }
    ctx->pc = 0x15CE20u;
    SET_GPR_U32(ctx, 31, 0x15CE28u);
    ctx->pc = 0x15CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE20u;
    // 0x15ce24: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170E8u, 0x15CE20u, 0x15CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE28u;
label_15ce28:
    // 0x15ce28: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x15ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_15ce2c:
    // 0x15ce2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ce2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ce30:
    // 0x15ce30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ce30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ce34:
    // 0x15ce34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ce34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ce38:
    // 0x15ce38: 0xc043f36  jal         func_10FCD8
label_15ce3c:
    if (ctx->pc == 0x15CE3Cu) {
        ctx->pc = 0x15CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE38u;
        // 0x15ce3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE40u;
        goto label_15ce40;
    }
    ctx->pc = 0x15CE38u;
    SET_GPR_U32(ctx, 31, 0x15CE40u);
    ctx->pc = 0x15CE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE38u;
    // 0x15ce3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x15CE38u, 0x15CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE40u;
label_15ce40:
    // 0x15ce40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ce44:
    // 0x15ce44: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x15ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
label_15ce48:
    // 0x15ce48: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x15ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
label_15ce4c:
    // 0x15ce4c: 0x8ec5ec8c  lw          $a1, -0x1374($s6)
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962316)));
label_15ce50:
    // 0x15ce50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15ce54:
    // 0x15ce54: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x15ce54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_15ce58:
    // 0x15ce58: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_15ce5c:
    // 0x15ce5c: 0x60f809  jalr        $v1
label_15ce60:
    if (ctx->pc == 0x15CE60u) {
        ctx->pc = 0x15CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE5Cu;
        // 0x15ce60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE64u;
        goto label_15ce64;
    }
    ctx->pc = 0x15CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CE64u);
        ctx->pc = 0x15CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE5Cu;
        // 0x15ce60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE5Cu, 0x15CE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE64u;
label_15ce64:
    // 0x15ce64: 0xc055950  jal         func_156540
label_15ce68:
    if (ctx->pc == 0x15CE68u) {
        ctx->pc = 0x15CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE64u;
        // 0x15ce68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE6Cu;
        goto label_15ce6c;
    }
    ctx->pc = 0x15CE64u;
    SET_GPR_U32(ctx, 31, 0x15CE6Cu);
    ctx->pc = 0x15CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE64u;
    // 0x15ce68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x15CE64u, 0x15CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE6Cu;
label_15ce6c:
    // 0x15ce6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15ce6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15ce70:
    // 0x15ce70: 0xc0559fe  jal         func_1567F8
label_15ce74:
    if (ctx->pc == 0x15CE74u) {
        ctx->pc = 0x15CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE70u;
        // 0x15ce74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE78u;
        goto label_15ce78;
    }
    ctx->pc = 0x15CE70u;
    SET_GPR_U32(ctx, 31, 0x15CE78u);
    ctx->pc = 0x15CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE70u;
    // 0x15ce74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1567F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1567F8u, 0x15CE70u, 0x15CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE78u;
label_15ce78:
    // 0x15ce78: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x15ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_15ce7c:
    // 0x15ce7c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15ce80:
    // 0x15ce80: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15ce80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15ce84:
    // 0x15ce84: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15ce88:
    // 0x15ce88: 0x60f809  jalr        $v1
label_15ce8c:
    if (ctx->pc == 0x15CE8Cu) {
        ctx->pc = 0x15CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE88u;
        // 0x15ce8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE90u;
        goto label_15ce90;
    }
    ctx->pc = 0x15CE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CE90u);
        ctx->pc = 0x15CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE88u;
        // 0x15ce8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE88u, 0x15CE90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE90u;
label_15ce90:
    // 0x15ce90: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15ce94:
    // 0x15ce94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ce94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ce98:
    // 0x15ce98: 0xc0552b8  jal         func_154AE0
label_15ce9c:
    if (ctx->pc == 0x15CE9Cu) {
        ctx->pc = 0x15CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE98u;
        // 0x15ce9c: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEA0u;
        goto label_15cea0;
    }
    ctx->pc = 0x15CE98u;
    SET_GPR_U32(ctx, 31, 0x15CEA0u);
    ctx->pc = 0x15CE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE98u;
    // 0x15ce9c: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15CE98u, 0x15CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CEA0u;
label_15cea0:
    // 0x15cea0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15cea4:
    // 0x15cea4: 0xc06ba0a  jal         func_1AE828
label_15cea8:
    if (ctx->pc == 0x15CEA8u) {
        ctx->pc = 0x15CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEA4u;
        // 0x15cea8: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEACu;
        goto label_15ceac;
    }
    ctx->pc = 0x15CEA4u;
    SET_GPR_U32(ctx, 31, 0x15CEACu);
    ctx->pc = 0x15CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CEA4u;
    // 0x15cea8: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x15CEA4u, 0x15CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CEACu;
label_15ceac:
    // 0x15ceac: 0x8ec5ec8c  lw          $a1, -0x1374($s6)
    ctx->pc = 0x15ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962316)));
label_15ceb0:
    // 0x15ceb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15ceb4:
    // 0x15ceb4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15ceb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15ceb8:
    // 0x15ceb8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15cebc:
    // 0x15cebc: 0x60f809  jalr        $v1
label_15cec0:
    if (ctx->pc == 0x15CEC0u) {
        ctx->pc = 0x15CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEBCu;
        // 0x15cec0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEC4u;
        goto label_15cec4;
    }
    ctx->pc = 0x15CEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CEC4u);
        ctx->pc = 0x15CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEBCu;
        // 0x15cec0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CEBCu, 0x15CEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CEC4u;
label_15cec4:
    // 0x15cec4: 0xc055880  jal         func_156200
label_15cec8:
    if (ctx->pc == 0x15CEC8u) {
        ctx->pc = 0x15CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEC4u;
        // 0x15cec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CECCu;
        goto label_15cecc;
    }
    ctx->pc = 0x15CEC4u;
    SET_GPR_U32(ctx, 31, 0x15CECCu);
    ctx->pc = 0x15CEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CEC4u;
    // 0x15cec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x15CEC4u, 0x15CECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CECCu;
label_15cecc:
    // 0x15cecc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x15ceccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_15ced0:
    // 0x15ced0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ced4:
    // 0x15ced4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x15ced4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15ced8:
    // 0x15ced8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x15ced8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15cedc:
    // 0x15cedc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x15cedcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15cee0:
    // 0x15cee0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x15cee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15cee4:
    // 0x15cee4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x15cee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15cee8:
    // 0x15cee8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x15cee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15ceec:
    // 0x15ceec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15ceecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15cef0:
    // 0x15cef0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15cef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15cef4:
    // 0x15cef4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x15cef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15cef8:
    // 0x15cef8: 0x3e00008  jr          $ra
label_15cefc:
    if (ctx->pc == 0x15CEFCu) {
        ctx->pc = 0x15CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEF8u;
        // 0x15cefc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF00u;
        goto label_fallthrough_0x15cef8;
    }
    ctx->pc = 0x15CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEF8u;
        // 0x15cefc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15cef8:
    ctx->pc = 0x15CF00u;
}
