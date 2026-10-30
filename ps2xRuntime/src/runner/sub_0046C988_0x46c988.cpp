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

// Function: sub_0046C988
// Address: 0x46c988 - 0x46cce0
void sub_0046C988_0x46c988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C988_0x46c988");
#endif

    switch (ctx->pc) {
        case 0x46c988u: goto label_46c988;
        case 0x46c98cu: goto label_46c98c;
        case 0x46c990u: goto label_46c990;
        case 0x46c994u: goto label_46c994;
        case 0x46c998u: goto label_46c998;
        case 0x46c99cu: goto label_46c99c;
        case 0x46c9a0u: goto label_46c9a0;
        case 0x46c9a4u: goto label_46c9a4;
        case 0x46c9a8u: goto label_46c9a8;
        case 0x46c9acu: goto label_46c9ac;
        case 0x46c9b0u: goto label_46c9b0;
        case 0x46c9b4u: goto label_46c9b4;
        case 0x46c9b8u: goto label_46c9b8;
        case 0x46c9bcu: goto label_46c9bc;
        case 0x46c9c0u: goto label_46c9c0;
        case 0x46c9c4u: goto label_46c9c4;
        case 0x46c9c8u: goto label_46c9c8;
        case 0x46c9ccu: goto label_46c9cc;
        case 0x46c9d0u: goto label_46c9d0;
        case 0x46c9d4u: goto label_46c9d4;
        case 0x46c9d8u: goto label_46c9d8;
        case 0x46c9dcu: goto label_46c9dc;
        case 0x46c9e0u: goto label_46c9e0;
        case 0x46c9e4u: goto label_46c9e4;
        case 0x46c9e8u: goto label_46c9e8;
        case 0x46c9ecu: goto label_46c9ec;
        case 0x46c9f0u: goto label_46c9f0;
        case 0x46c9f4u: goto label_46c9f4;
        case 0x46c9f8u: goto label_46c9f8;
        case 0x46c9fcu: goto label_46c9fc;
        case 0x46ca00u: goto label_46ca00;
        case 0x46ca04u: goto label_46ca04;
        case 0x46ca08u: goto label_46ca08;
        case 0x46ca0cu: goto label_46ca0c;
        case 0x46ca10u: goto label_46ca10;
        case 0x46ca14u: goto label_46ca14;
        case 0x46ca18u: goto label_46ca18;
        case 0x46ca1cu: goto label_46ca1c;
        case 0x46ca20u: goto label_46ca20;
        case 0x46ca24u: goto label_46ca24;
        case 0x46ca28u: goto label_46ca28;
        case 0x46ca2cu: goto label_46ca2c;
        case 0x46ca30u: goto label_46ca30;
        case 0x46ca34u: goto label_46ca34;
        case 0x46ca38u: goto label_46ca38;
        case 0x46ca3cu: goto label_46ca3c;
        case 0x46ca40u: goto label_46ca40;
        case 0x46ca44u: goto label_46ca44;
        case 0x46ca48u: goto label_46ca48;
        case 0x46ca4cu: goto label_46ca4c;
        case 0x46ca50u: goto label_46ca50;
        case 0x46ca54u: goto label_46ca54;
        case 0x46ca58u: goto label_46ca58;
        case 0x46ca5cu: goto label_46ca5c;
        case 0x46ca60u: goto label_46ca60;
        case 0x46ca64u: goto label_46ca64;
        case 0x46ca68u: goto label_46ca68;
        case 0x46ca6cu: goto label_46ca6c;
        case 0x46ca70u: goto label_46ca70;
        case 0x46ca74u: goto label_46ca74;
        case 0x46ca78u: goto label_46ca78;
        case 0x46ca7cu: goto label_46ca7c;
        case 0x46ca80u: goto label_46ca80;
        case 0x46ca84u: goto label_46ca84;
        case 0x46ca88u: goto label_46ca88;
        case 0x46ca8cu: goto label_46ca8c;
        case 0x46ca90u: goto label_46ca90;
        case 0x46ca94u: goto label_46ca94;
        case 0x46ca98u: goto label_46ca98;
        case 0x46ca9cu: goto label_46ca9c;
        case 0x46caa0u: goto label_46caa0;
        case 0x46caa4u: goto label_46caa4;
        case 0x46caa8u: goto label_46caa8;
        case 0x46caacu: goto label_46caac;
        case 0x46cab0u: goto label_46cab0;
        case 0x46cab4u: goto label_46cab4;
        case 0x46cab8u: goto label_46cab8;
        case 0x46cabcu: goto label_46cabc;
        case 0x46cac0u: goto label_46cac0;
        case 0x46cac4u: goto label_46cac4;
        case 0x46cac8u: goto label_46cac8;
        case 0x46caccu: goto label_46cacc;
        case 0x46cad0u: goto label_46cad0;
        case 0x46cad4u: goto label_46cad4;
        case 0x46cad8u: goto label_46cad8;
        case 0x46cadcu: goto label_46cadc;
        case 0x46cae0u: goto label_46cae0;
        case 0x46cae4u: goto label_46cae4;
        case 0x46cae8u: goto label_46cae8;
        case 0x46caecu: goto label_46caec;
        case 0x46caf0u: goto label_46caf0;
        case 0x46caf4u: goto label_46caf4;
        case 0x46caf8u: goto label_46caf8;
        case 0x46cafcu: goto label_46cafc;
        case 0x46cb00u: goto label_46cb00;
        case 0x46cb04u: goto label_46cb04;
        case 0x46cb08u: goto label_46cb08;
        case 0x46cb0cu: goto label_46cb0c;
        case 0x46cb10u: goto label_46cb10;
        case 0x46cb14u: goto label_46cb14;
        case 0x46cb18u: goto label_46cb18;
        case 0x46cb1cu: goto label_46cb1c;
        case 0x46cb20u: goto label_46cb20;
        case 0x46cb24u: goto label_46cb24;
        case 0x46cb28u: goto label_46cb28;
        case 0x46cb2cu: goto label_46cb2c;
        case 0x46cb30u: goto label_46cb30;
        case 0x46cb34u: goto label_46cb34;
        case 0x46cb38u: goto label_46cb38;
        case 0x46cb3cu: goto label_46cb3c;
        case 0x46cb40u: goto label_46cb40;
        case 0x46cb44u: goto label_46cb44;
        case 0x46cb48u: goto label_46cb48;
        case 0x46cb4cu: goto label_46cb4c;
        case 0x46cb50u: goto label_46cb50;
        case 0x46cb54u: goto label_46cb54;
        case 0x46cb58u: goto label_46cb58;
        case 0x46cb5cu: goto label_46cb5c;
        case 0x46cb60u: goto label_46cb60;
        case 0x46cb64u: goto label_46cb64;
        case 0x46cb68u: goto label_46cb68;
        case 0x46cb6cu: goto label_46cb6c;
        case 0x46cb70u: goto label_46cb70;
        case 0x46cb74u: goto label_46cb74;
        case 0x46cb78u: goto label_46cb78;
        case 0x46cb7cu: goto label_46cb7c;
        case 0x46cb80u: goto label_46cb80;
        case 0x46cb84u: goto label_46cb84;
        case 0x46cb88u: goto label_46cb88;
        case 0x46cb8cu: goto label_46cb8c;
        case 0x46cb90u: goto label_46cb90;
        case 0x46cb94u: goto label_46cb94;
        case 0x46cb98u: goto label_46cb98;
        case 0x46cb9cu: goto label_46cb9c;
        case 0x46cba0u: goto label_46cba0;
        case 0x46cba4u: goto label_46cba4;
        case 0x46cba8u: goto label_46cba8;
        case 0x46cbacu: goto label_46cbac;
        case 0x46cbb0u: goto label_46cbb0;
        case 0x46cbb4u: goto label_46cbb4;
        case 0x46cbb8u: goto label_46cbb8;
        case 0x46cbbcu: goto label_46cbbc;
        case 0x46cbc0u: goto label_46cbc0;
        case 0x46cbc4u: goto label_46cbc4;
        case 0x46cbc8u: goto label_46cbc8;
        case 0x46cbccu: goto label_46cbcc;
        case 0x46cbd0u: goto label_46cbd0;
        case 0x46cbd4u: goto label_46cbd4;
        case 0x46cbd8u: goto label_46cbd8;
        case 0x46cbdcu: goto label_46cbdc;
        case 0x46cbe0u: goto label_46cbe0;
        case 0x46cbe4u: goto label_46cbe4;
        case 0x46cbe8u: goto label_46cbe8;
        case 0x46cbecu: goto label_46cbec;
        case 0x46cbf0u: goto label_46cbf0;
        case 0x46cbf4u: goto label_46cbf4;
        case 0x46cbf8u: goto label_46cbf8;
        case 0x46cbfcu: goto label_46cbfc;
        case 0x46cc00u: goto label_46cc00;
        case 0x46cc04u: goto label_46cc04;
        case 0x46cc08u: goto label_46cc08;
        case 0x46cc0cu: goto label_46cc0c;
        case 0x46cc10u: goto label_46cc10;
        case 0x46cc14u: goto label_46cc14;
        case 0x46cc18u: goto label_46cc18;
        case 0x46cc1cu: goto label_46cc1c;
        case 0x46cc20u: goto label_46cc20;
        case 0x46cc24u: goto label_46cc24;
        case 0x46cc28u: goto label_46cc28;
        case 0x46cc2cu: goto label_46cc2c;
        case 0x46cc30u: goto label_46cc30;
        case 0x46cc34u: goto label_46cc34;
        case 0x46cc38u: goto label_46cc38;
        case 0x46cc3cu: goto label_46cc3c;
        case 0x46cc40u: goto label_46cc40;
        case 0x46cc44u: goto label_46cc44;
        case 0x46cc48u: goto label_46cc48;
        case 0x46cc4cu: goto label_46cc4c;
        case 0x46cc50u: goto label_46cc50;
        case 0x46cc54u: goto label_46cc54;
        case 0x46cc58u: goto label_46cc58;
        case 0x46cc5cu: goto label_46cc5c;
        case 0x46cc60u: goto label_46cc60;
        case 0x46cc64u: goto label_46cc64;
        case 0x46cc68u: goto label_46cc68;
        case 0x46cc6cu: goto label_46cc6c;
        case 0x46cc70u: goto label_46cc70;
        case 0x46cc74u: goto label_46cc74;
        case 0x46cc78u: goto label_46cc78;
        case 0x46cc7cu: goto label_46cc7c;
        case 0x46cc80u: goto label_46cc80;
        case 0x46cc84u: goto label_46cc84;
        case 0x46cc88u: goto label_46cc88;
        case 0x46cc8cu: goto label_46cc8c;
        case 0x46cc90u: goto label_46cc90;
        case 0x46cc94u: goto label_46cc94;
        case 0x46cc98u: goto label_46cc98;
        case 0x46cc9cu: goto label_46cc9c;
        case 0x46cca0u: goto label_46cca0;
        case 0x46cca4u: goto label_46cca4;
        case 0x46cca8u: goto label_46cca8;
        case 0x46ccacu: goto label_46ccac;
        case 0x46ccb0u: goto label_46ccb0;
        case 0x46ccb4u: goto label_46ccb4;
        case 0x46ccb8u: goto label_46ccb8;
        case 0x46ccbcu: goto label_46ccbc;
        case 0x46ccc0u: goto label_46ccc0;
        case 0x46ccc4u: goto label_46ccc4;
        case 0x46ccc8u: goto label_46ccc8;
        case 0x46ccccu: goto label_46cccc;
        case 0x46ccd0u: goto label_46ccd0;
        case 0x46ccd4u: goto label_46ccd4;
        case 0x46ccd8u: goto label_46ccd8;
        case 0x46ccdcu: goto label_46ccdc;
        default: break;
    }

    ctx->pc = 0x46c988u;

label_46c988:
    // 0x46c988: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x46c988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_46c98c:
    // 0x46c98c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c990:
    // 0x46c990: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x46c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_46c994:
    // 0x46c994: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x46c994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_46c998:
    // 0x46c998: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x46c998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46c99c:
    // 0x46c99c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x46c99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_46c9a0:
    // 0x46c9a0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x46c9a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_46c9a4:
    // 0x46c9a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x46c9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_46c9a8:
    // 0x46c9a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x46c9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_46c9ac:
    // 0x46c9ac: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x46c9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_46c9b0:
    // 0x46c9b0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x46c9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_46c9b4:
    // 0x46c9b4: 0xc11eeae  jal         func_47BAB8
label_46c9b8:
    if (ctx->pc == 0x46C9B8u) {
        ctx->pc = 0x46C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C9B4u;
        // 0x46c9b8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C9BCu;
        goto label_46c9bc;
    }
    ctx->pc = 0x46C9B4u;
    SET_GPR_U32(ctx, 31, 0x46C9BCu);
    ctx->pc = 0x46C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C9B4u;
    // 0x46c9b8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46C9B4u, 0x46C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C9BCu;
label_46c9bc:
    // 0x46c9bc: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
label_46c9c0:
    if (ctx->pc == 0x46C9C0u) {
        ctx->pc = 0x46C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C9BCu;
        // 0x46c9c0: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C9C4u;
        goto label_46c9c4;
    }
    ctx->pc = 0x46C9BCu;
    {
        const bool branch_taken_0x46c9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C9BCu;
        // 0x46c9c0: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c9bc) {
            ctx->pc = 0x46CCBCu;
            goto label_46ccbc;
        }
    }
    ctx->pc = 0x46C9C4u;
label_46c9c4:
    // 0x46c9c4: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x46c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_46c9c8:
    // 0x46c9c8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x46c9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_46c9cc:
    // 0x46c9cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46c9d0:
    // 0x46c9d0: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46c9d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_46c9d4:
    // 0x46c9d4: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
label_46c9d8:
    if (ctx->pc == 0x46C9D8u) {
        ctx->pc = 0x46C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C9D4u;
        // 0x46c9d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C9DCu;
        goto label_46c9dc;
    }
    ctx->pc = 0x46C9D4u;
    {
        const bool branch_taken_0x46c9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C9D4u;
        // 0x46c9d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c9d4) {
            ctx->pc = 0x46CC9Cu;
            goto label_46cc9c;
        }
    }
    ctx->pc = 0x46C9DCu;
label_46c9dc:
    // 0x46c9dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46c9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46c9e0:
    // 0x46c9e0: 0xc10c1fa  jal         func_4307E8
label_46c9e4:
    if (ctx->pc == 0x46C9E4u) {
        ctx->pc = 0x46C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C9E0u;
        // 0x46c9e4: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C9E8u;
        goto label_46c9e8;
    }
    ctx->pc = 0x46C9E0u;
    SET_GPR_U32(ctx, 31, 0x46C9E8u);
    ctx->pc = 0x46C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C9E0u;
    // 0x46c9e4: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x46C9E0u, 0x46C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C9E8u;
label_46c9e8:
    // 0x46c9e8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x46c9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46c9ec:
    // 0x46c9ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46c9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46c9f0:
    // 0x46c9f0: 0xc11fb56  jal         func_47ED58
label_46c9f4:
    if (ctx->pc == 0x46C9F4u) {
        ctx->pc = 0x46C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C9F0u;
        // 0x46c9f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C9F8u;
        goto label_46c9f8;
    }
    ctx->pc = 0x46C9F0u;
    SET_GPR_U32(ctx, 31, 0x46C9F8u);
    ctx->pc = 0x46C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C9F0u;
    // 0x46c9f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x46C9F0u, 0x46C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C9F8u;
label_46c9f8:
    // 0x46c9f8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46c9fc:
    // 0x46c9fc: 0x144300b0  bne         $v0, $v1, . + 4 + (0xB0 << 2)
label_46ca00:
    if (ctx->pc == 0x46CA00u) {
        ctx->pc = 0x46CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C9FCu;
        // 0x46ca00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CA04u;
        goto label_46ca04;
    }
    ctx->pc = 0x46C9FCu;
    {
        const bool branch_taken_0x46c9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x46CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C9FCu;
        // 0x46ca00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c9fc) {
            ctx->pc = 0x46CCC0u;
            goto label_46ccc0;
        }
    }
    ctx->pc = 0x46CA04u;
label_46ca04:
    // 0x46ca04: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46ca08:
    // 0x46ca08: 0x8f8588d8  lw          $a1, -0x7728($gp)
    ctx->pc = 0x46ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
label_46ca0c:
    // 0x46ca0c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x46ca0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46ca10:
    // 0x46ca10: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x46ca10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_46ca14:
    // 0x46ca14: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46ca18:
    // 0x46ca18: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x46ca18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_46ca1c:
    // 0x46ca1c: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x46ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_46ca20:
    // 0x46ca20: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x46ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_46ca24:
    // 0x46ca24: 0x8ba30007  lwl         $v1, 0x7($sp)
    ctx->pc = 0x46ca24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_46ca28:
    // 0x46ca28: 0x9ba30004  lwr         $v1, 0x4($sp)
    ctx->pc = 0x46ca28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_46ca2c:
    // 0x46ca2c: 0xaba30023  swl         $v1, 0x23($sp)
    ctx->pc = 0x46ca2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_46ca30:
    // 0x46ca30: 0xbba30020  swr         $v1, 0x20($sp)
    ctx->pc = 0x46ca30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_46ca34:
    // 0x46ca34: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46ca38:
    // 0x46ca38: 0x8ba30023  lwl         $v1, 0x23($sp)
    ctx->pc = 0x46ca38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_46ca3c:
    // 0x46ca3c: 0x9ba30020  lwr         $v1, 0x20($sp)
    ctx->pc = 0x46ca3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_46ca40:
    // 0x46ca40: 0xaba30007  swl         $v1, 0x7($sp)
    ctx->pc = 0x46ca40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_46ca44:
    // 0x46ca44: 0xbba30004  swr         $v1, 0x4($sp)
    ctx->pc = 0x46ca44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_46ca48:
    // 0x46ca48: 0x40f809  jalr        $v0
label_46ca4c:
    if (ctx->pc == 0x46CA4Cu) {
        ctx->pc = 0x46CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CA48u;
        // 0x46ca4c: 0x34a50007  ori         $a1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CA50u;
        goto label_46ca50;
    }
    ctx->pc = 0x46CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46CA50u);
        ctx->pc = 0x46CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CA48u;
        // 0x46ca4c: 0x34a50007  ori         $a1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CA48u, 0x46CA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46CA50u;
label_46ca50:
    // 0x46ca50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46ca50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46ca54:
    // 0x46ca54: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_46ca58:
    if (ctx->pc == 0x46CA58u) {
        ctx->pc = 0x46CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CA54u;
        // 0x46ca58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CA5Cu;
        goto label_46ca5c;
    }
    ctx->pc = 0x46CA54u;
    {
        const bool branch_taken_0x46ca54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x46CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CA54u;
        // 0x46ca58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ca54) {
            ctx->pc = 0x46CA64u;
            goto label_46ca64;
        }
    }
    ctx->pc = 0x46CA5Cu;
label_46ca5c:
    // 0x46ca5c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_46ca60:
    if (ctx->pc == 0x46CA60u) {
        ctx->pc = 0x46CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CA5Cu;
        // 0x46ca60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CA64u;
        goto label_46ca64;
    }
    ctx->pc = 0x46CA5Cu;
    {
        const bool branch_taken_0x46ca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CA5Cu;
        // 0x46ca60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ca5c) {
            ctx->pc = 0x46CAC8u;
            goto label_46cac8;
        }
    }
    ctx->pc = 0x46CA64u;
label_46ca64:
    // 0x46ca64: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x46ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_46ca68:
    // 0x46ca68: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x46ca68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
label_46ca6c:
    // 0x46ca6c: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x46ca6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_46ca70:
    // 0x46ca70: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x46ca70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_46ca74:
    // 0x46ca74: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46ca78:
    // 0x46ca78: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x46ca78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_46ca7c:
    // 0x46ca7c: 0x2484e710  addiu       $a0, $a0, -0x18F0
    ctx->pc = 0x46ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
label_46ca80:
    // 0x46ca80: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x46ca80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_46ca84:
    // 0x46ca84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46ca84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46ca88:
    // 0x46ca88: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x46ca88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_46ca8c:
    // 0x46ca8c: 0x8ba20033  lwl         $v0, 0x33($sp)
    ctx->pc = 0x46ca8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_46ca90:
    // 0x46ca90: 0x9ba20030  lwr         $v0, 0x30($sp)
    ctx->pc = 0x46ca90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_46ca94:
    // 0x46ca94: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x46ca94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_46ca98:
    // 0x46ca98: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x46ca98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_46ca9c:
    // 0x46ca9c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46caa0:
    // 0x46caa0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x46caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_46caa4:
    // 0x46caa4: 0x24c8e728  addiu       $t0, $a2, -0x18D8
    ctx->pc = 0x46caa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
label_46caa8:
    // 0x46caa8: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x46caa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_46caac:
    // 0x46caac: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x46caacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_46cab0:
    // 0x46cab0: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x46cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_46cab4:
    // 0x46cab4: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x46cab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_46cab8:
    // 0x46cab8: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x46cab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_46cabc:
    // 0x46cabc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x46cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_46cac0:
    // 0x46cac0: 0xc11ff8e  jal         func_47FE38
label_46cac4:
    if (ctx->pc == 0x46CAC4u) {
        ctx->pc = 0x46CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CAC0u;
        // 0x46cac4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CAC8u;
        goto label_46cac8;
    }
    ctx->pc = 0x46CAC0u;
    SET_GPR_U32(ctx, 31, 0x46CAC8u);
    ctx->pc = 0x46CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CAC0u;
    // 0x46cac4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x46CAC0u, 0x46CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CAC8u;
label_46cac8:
    // 0x46cac8: 0x1220007d  beqz        $s1, . + 4 + (0x7D << 2)
label_46cacc:
    if (ctx->pc == 0x46CACCu) {
        ctx->pc = 0x46CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CAC8u;
        // 0x46cacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CAD0u;
        goto label_46cad0;
    }
    ctx->pc = 0x46CAC8u;
    {
        const bool branch_taken_0x46cac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CAC8u;
        // 0x46cacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cac8) {
            ctx->pc = 0x46CCC0u;
            goto label_46ccc0;
        }
    }
    ctx->pc = 0x46CAD0u;
label_46cad0:
    // 0x46cad0: 0x8ba20007  lwl         $v0, 0x7($sp)
    ctx->pc = 0x46cad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_46cad4:
    // 0x46cad4: 0x9ba20004  lwr         $v0, 0x4($sp)
    ctx->pc = 0x46cad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_46cad8:
    // 0x46cad8: 0xaa220007  swl         $v0, 0x7($s1)
    ctx->pc = 0x46cad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_46cadc:
    // 0x46cadc: 0xba220004  swr         $v0, 0x4($s1)
    ctx->pc = 0x46cadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_46cae0:
    // 0x46cae0: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x46cae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_46cae4:
    // 0x46cae4: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x46cae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_46cae8:
    // 0x46cae8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x46cae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_46caec:
    // 0x46caec: 0xb2260013  sdl         $a2, 0x13($s1)
    ctx->pc = 0x46caecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_46caf0:
    // 0x46caf0: 0xb626000c  sdr         $a2, 0xC($s1)
    ctx->pc = 0x46caf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_46caf4:
    // 0x46caf4: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x46caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
label_46caf8:
    // 0x46caf8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x46caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_46cafc:
    // 0x46cafc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x46cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_46cb00:
    // 0x46cb00: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_46cb04:
    if (ctx->pc == 0x46CB04u) {
        ctx->pc = 0x46CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB00u;
        // 0x46cb04: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB08u;
        goto label_46cb08;
    }
    ctx->pc = 0x46CB00u;
    {
        const bool branch_taken_0x46cb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB00u;
        // 0x46cb04: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cb00) {
            ctx->pc = 0x46CC00u;
            goto label_46cc00;
        }
    }
    ctx->pc = 0x46CB08u;
label_46cb08:
    // 0x46cb08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46cb0c:
    // 0x46cb0c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x46cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_46cb10:
    // 0x46cb10: 0xc11eeae  jal         func_47BAB8
label_46cb14:
    if (ctx->pc == 0x46CB14u) {
        ctx->pc = 0x46CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB10u;
        // 0x46cb14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB18u;
        goto label_46cb18;
    }
    ctx->pc = 0x46CB10u;
    SET_GPR_U32(ctx, 31, 0x46CB18u);
    ctx->pc = 0x46CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CB10u;
    // 0x46cb14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46CB10u, 0x46CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CB18u;
label_46cb18:
    // 0x46cb18: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_46cb1c:
    if (ctx->pc == 0x46CB1Cu) {
        ctx->pc = 0x46CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB18u;
        // 0x46cb1c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB20u;
        goto label_46cb20;
    }
    ctx->pc = 0x46CB18u;
    {
        const bool branch_taken_0x46cb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB18u;
        // 0x46cb1c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cb18) {
            ctx->pc = 0x46CB7Cu;
            goto label_46cb7c;
        }
    }
    ctx->pc = 0x46CB20u;
label_46cb20:
    // 0x46cb20: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x46cb20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_46cb24:
    // 0x46cb24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46cb28:
    // 0x46cb28: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_46cb2c:
    if (ctx->pc == 0x46CB2Cu) {
        ctx->pc = 0x46CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB28u;
        // 0x46cb2c: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB30u;
        goto label_46cb30;
    }
    ctx->pc = 0x46CB28u;
    {
        const bool branch_taken_0x46cb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x46CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB28u;
        // 0x46cb2c: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cb28) {
            ctx->pc = 0x46CB70u;
            goto label_46cb70;
        }
    }
    ctx->pc = 0x46CB30u;
label_46cb30:
    // 0x46cb30: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46cb34:
    // 0x46cb34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46cb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46cb38:
    // 0x46cb38: 0xc11ffb4  jal         func_47FED0
label_46cb3c:
    if (ctx->pc == 0x46CB3Cu) {
        ctx->pc = 0x46CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB38u;
        // 0x46cb3c: 0x2484e710  addiu       $a0, $a0, -0x18F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB40u;
        goto label_46cb40;
    }
    ctx->pc = 0x46CB38u;
    SET_GPR_U32(ctx, 31, 0x46CB40u);
    ctx->pc = 0x46CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CB38u;
    // 0x46cb3c: 0x2484e710  addiu       $a0, $a0, -0x18F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46CB38u, 0x46CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CB40u;
label_46cb40:
    // 0x46cb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46cb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46cb44:
    // 0x46cb44: 0xc11b404  jal         func_46D010
label_46cb48:
    if (ctx->pc == 0x46CB48u) {
        ctx->pc = 0x46CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB44u;
        // 0x46cb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB4Cu;
        goto label_46cb4c;
    }
    ctx->pc = 0x46CB44u;
    SET_GPR_U32(ctx, 31, 0x46CB4Cu);
    ctx->pc = 0x46CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CB44u;
    // 0x46cb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x46CB44u, 0x46CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CB4Cu;
label_46cb4c:
    // 0x46cb4c: 0x8f8388d8  lw          $v1, -0x7728($gp)
    ctx->pc = 0x46cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
label_46cb50:
    // 0x46cb50: 0x2664ad18  addiu       $a0, $s3, -0x52E8
    ctx->pc = 0x46cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46cb54:
    // 0x46cb54: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x46cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_46cb58:
    // 0x46cb58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46cb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46cb5c:
    // 0x46cb5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46cb60:
    // 0x46cb60: 0x40f809  jalr        $v0
label_46cb64:
    if (ctx->pc == 0x46CB64u) {
        ctx->pc = 0x46CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB60u;
        // 0x46cb64: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB68u;
        goto label_46cb68;
    }
    ctx->pc = 0x46CB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46CB68u);
        ctx->pc = 0x46CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB60u;
        // 0x46cb64: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CB60u, 0x46CB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46CB68u;
label_46cb68:
    // 0x46cb68: 0x10000055  b           . + 4 + (0x55 << 2)
label_46cb6c:
    if (ctx->pc == 0x46CB6Cu) {
        ctx->pc = 0x46CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB68u;
        // 0x46cb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB70u;
        goto label_46cb70;
    }
    ctx->pc = 0x46CB68u;
    {
        const bool branch_taken_0x46cb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB68u;
        // 0x46cb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cb68) {
            ctx->pc = 0x46CCC0u;
            goto label_46ccc0;
        }
    }
    ctx->pc = 0x46CB70u;
label_46cb70:
    // 0x46cb70: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x46cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_46cb74:
    // 0x46cb74: 0x10000051  b           . + 4 + (0x51 << 2)
label_46cb78:
    if (ctx->pc == 0x46CB78u) {
        ctx->pc = 0x46CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB74u;
        // 0x46cb78: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB7Cu;
        goto label_46cb7c;
    }
    ctx->pc = 0x46CB74u;
    {
        const bool branch_taken_0x46cb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB74u;
        // 0x46cb78: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cb74) {
            ctx->pc = 0x46CCBCu;
            goto label_46ccbc;
        }
    }
    ctx->pc = 0x46CB7Cu;
label_46cb7c:
    // 0x46cb7c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x46cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_46cb80:
    // 0x46cb80: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x46cb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_46cb84:
    // 0x46cb84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46cb88:
    // 0x46cb88: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46cb88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_46cb8c:
    // 0x46cb8c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_46cb90:
    if (ctx->pc == 0x46CB90u) {
        ctx->pc = 0x46CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB8Cu;
        // 0x46cb90: 0x86230018  lh          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB94u;
        goto label_46cb94;
    }
    ctx->pc = 0x46CB8Cu;
    {
        const bool branch_taken_0x46cb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cb8c) {
            ctx->pc = 0x46CB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46CB8Cu;
            // 0x46cb90: 0x86230018  lh          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46CBA4u;
            goto label_46cba4;
        }
    }
    ctx->pc = 0x46CB94u;
label_46cb94:
    // 0x46cb94: 0xc1203b6  jal         func_480ED8
label_46cb98:
    if (ctx->pc == 0x46CB98u) {
        ctx->pc = 0x46CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB94u;
        // 0x46cb98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CB9Cu;
        goto label_46cb9c;
    }
    ctx->pc = 0x46CB94u;
    SET_GPR_U32(ctx, 31, 0x46CB9Cu);
    ctx->pc = 0x46CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CB94u;
    // 0x46cb98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480ED8u, 0x46CB94u, 0x46CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CB9Cu;
label_46cb9c:
    // 0x46cb9c: 0x10000018  b           . + 4 + (0x18 << 2)
label_46cba0:
    if (ctx->pc == 0x46CBA0u) {
        ctx->pc = 0x46CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB9Cu;
        // 0x46cba0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CBA4u;
        goto label_46cba4;
    }
    ctx->pc = 0x46CB9Cu;
    {
        const bool branch_taken_0x46cb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CB9Cu;
        // 0x46cba0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cb9c) {
            ctx->pc = 0x46CC00u;
            goto label_46cc00;
        }
    }
    ctx->pc = 0x46CBA4u;
label_46cba4:
    // 0x46cba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46cba8:
    // 0x46cba8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_46cbac:
    if (ctx->pc == 0x46CBACu) {
        ctx->pc = 0x46CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBA8u;
        // 0x46cbac: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CBB0u;
        goto label_46cbb0;
    }
    ctx->pc = 0x46CBA8u;
    {
        const bool branch_taken_0x46cba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x46CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBA8u;
        // 0x46cbac: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cba8) {
            ctx->pc = 0x46CBF0u;
            goto label_46cbf0;
        }
    }
    ctx->pc = 0x46CBB0u;
label_46cbb0:
    // 0x46cbb0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46cbb4:
    // 0x46cbb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46cbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46cbb8:
    // 0x46cbb8: 0xc11ffb4  jal         func_47FED0
label_46cbbc:
    if (ctx->pc == 0x46CBBCu) {
        ctx->pc = 0x46CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBB8u;
        // 0x46cbbc: 0x2484e710  addiu       $a0, $a0, -0x18F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CBC0u;
        goto label_46cbc0;
    }
    ctx->pc = 0x46CBB8u;
    SET_GPR_U32(ctx, 31, 0x46CBC0u);
    ctx->pc = 0x46CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CBB8u;
    // 0x46cbbc: 0x2484e710  addiu       $a0, $a0, -0x18F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46CBB8u, 0x46CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CBC0u;
label_46cbc0:
    // 0x46cbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46cbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46cbc4:
    // 0x46cbc4: 0xc11b404  jal         func_46D010
label_46cbc8:
    if (ctx->pc == 0x46CBC8u) {
        ctx->pc = 0x46CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBC4u;
        // 0x46cbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CBCCu;
        goto label_46cbcc;
    }
    ctx->pc = 0x46CBC4u;
    SET_GPR_U32(ctx, 31, 0x46CBCCu);
    ctx->pc = 0x46CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CBC4u;
    // 0x46cbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x46CBC4u, 0x46CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CBCCu;
label_46cbcc:
    // 0x46cbcc: 0x8f8388d8  lw          $v1, -0x7728($gp)
    ctx->pc = 0x46cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
label_46cbd0:
    // 0x46cbd0: 0x2664ad18  addiu       $a0, $s3, -0x52E8
    ctx->pc = 0x46cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46cbd4:
    // 0x46cbd4: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x46cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_46cbd8:
    // 0x46cbd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46cbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46cbdc:
    // 0x46cbdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46cbe0:
    // 0x46cbe0: 0x40f809  jalr        $v0
label_46cbe4:
    if (ctx->pc == 0x46CBE4u) {
        ctx->pc = 0x46CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBE0u;
        // 0x46cbe4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CBE8u;
        goto label_46cbe8;
    }
    ctx->pc = 0x46CBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46CBE8u);
        ctx->pc = 0x46CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBE0u;
        // 0x46cbe4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CBE0u, 0x46CBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46CBE8u;
label_46cbe8:
    // 0x46cbe8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_46cbec:
    if (ctx->pc == 0x46CBECu) {
        ctx->pc = 0x46CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBE8u;
        // 0x46cbec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CBF0u;
        goto label_46cbf0;
    }
    ctx->pc = 0x46CBE8u;
    {
        const bool branch_taken_0x46cbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBE8u;
        // 0x46cbec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cbe8) {
            ctx->pc = 0x46CCA0u;
            goto label_46cca0;
        }
    }
    ctx->pc = 0x46CBF0u;
label_46cbf0:
    // 0x46cbf0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x46cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_46cbf4:
    // 0x46cbf4: 0x10000029  b           . + 4 + (0x29 << 2)
label_46cbf8:
    if (ctx->pc == 0x46CBF8u) {
        ctx->pc = 0x46CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBF4u;
        // 0x46cbf8: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CBFCu;
        goto label_46cbfc;
    }
    ctx->pc = 0x46CBF4u;
    {
        const bool branch_taken_0x46cbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CBF4u;
        // 0x46cbf8: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cbf4) {
            ctx->pc = 0x46CC9Cu;
            goto label_46cc9c;
        }
    }
    ctx->pc = 0x46CBFCu;
label_46cbfc:
    // 0x46cbfc: 0x0  nop
    ctx->pc = 0x46cbfcu;
    // NOP
label_46cc00:
    // 0x46cc00: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x46cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_46cc04:
    // 0x46cc04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46cc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46cc08:
    // 0x46cc08: 0x2450e710  addiu       $s0, $v0, -0x18F0
    ctx->pc = 0x46cc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960912));
label_46cc0c:
    // 0x46cc0c: 0xaf8088e0  sw          $zero, -0x7720($gp)
    ctx->pc = 0x46cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936800), GPR_U32(ctx, 0));
label_46cc10:
    // 0x46cc10: 0xaf8088e4  sw          $zero, -0x771C($gp)
    ctx->pc = 0x46cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936804), GPR_U32(ctx, 0));
label_46cc14:
    // 0x46cc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cc18:
    // 0x46cc18: 0xc11fd22  jal         func_47F488
label_46cc1c:
    if (ctx->pc == 0x46CC1Cu) {
        ctx->pc = 0x46CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC18u;
        // 0x46cc1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC20u;
        goto label_46cc20;
    }
    ctx->pc = 0x46CC18u;
    SET_GPR_U32(ctx, 31, 0x46CC20u);
    ctx->pc = 0x46CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CC18u;
    // 0x46cc1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x46CC18u, 0x46CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CC20u;
label_46cc20:
    // 0x46cc20: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_46cc24:
    if (ctx->pc == 0x46CC24u) {
        ctx->pc = 0x46CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC20u;
        // 0x46cc24: 0x8f8588e0  lw          $a1, -0x7720($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC28u;
        goto label_46cc28;
    }
    ctx->pc = 0x46CC20u;
    {
        const bool branch_taken_0x46cc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC20u;
        // 0x46cc24: 0x8f8588e0  lw          $a1, -0x7720($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cc20) {
            ctx->pc = 0x46CC80u;
            goto label_46cc80;
        }
    }
    ctx->pc = 0x46CC28u;
label_46cc28:
    // 0x46cc28: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x46cc28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_46cc2c:
    // 0x46cc2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46cc30:
    // 0x46cc30: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_46cc34:
    if (ctx->pc == 0x46CC34u) {
        ctx->pc = 0x46CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC30u;
        // 0x46cc34: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC38u;
        goto label_46cc38;
    }
    ctx->pc = 0x46CC30u;
    {
        const bool branch_taken_0x46cc30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x46CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC30u;
        // 0x46cc34: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cc30) {
            ctx->pc = 0x46CC74u;
            goto label_46cc74;
        }
    }
    ctx->pc = 0x46CC38u;
label_46cc38:
    // 0x46cc38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46cc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cc3c:
    // 0x46cc3c: 0xc11ffb4  jal         func_47FED0
label_46cc40:
    if (ctx->pc == 0x46CC40u) {
        ctx->pc = 0x46CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC3Cu;
        // 0x46cc40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC44u;
        goto label_46cc44;
    }
    ctx->pc = 0x46CC3Cu;
    SET_GPR_U32(ctx, 31, 0x46CC44u);
    ctx->pc = 0x46CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CC3Cu;
    // 0x46cc40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46CC3Cu, 0x46CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CC44u;
label_46cc44:
    // 0x46cc44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46cc48:
    // 0x46cc48: 0xc11b404  jal         func_46D010
label_46cc4c:
    if (ctx->pc == 0x46CC4Cu) {
        ctx->pc = 0x46CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC48u;
        // 0x46cc4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC50u;
        goto label_46cc50;
    }
    ctx->pc = 0x46CC48u;
    SET_GPR_U32(ctx, 31, 0x46CC50u);
    ctx->pc = 0x46CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CC48u;
    // 0x46cc4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x46CC48u, 0x46CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CC50u;
label_46cc50:
    // 0x46cc50: 0x8f8388d8  lw          $v1, -0x7728($gp)
    ctx->pc = 0x46cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
label_46cc54:
    // 0x46cc54: 0x2664ad18  addiu       $a0, $s3, -0x52E8
    ctx->pc = 0x46cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46cc58:
    // 0x46cc58: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x46cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_46cc5c:
    // 0x46cc5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46cc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46cc60:
    // 0x46cc60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46cc64:
    // 0x46cc64: 0x40f809  jalr        $v0
label_46cc68:
    if (ctx->pc == 0x46CC68u) {
        ctx->pc = 0x46CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC64u;
        // 0x46cc68: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC6Cu;
        goto label_46cc6c;
    }
    ctx->pc = 0x46CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46CC6Cu);
        ctx->pc = 0x46CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC64u;
        // 0x46cc68: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CC64u, 0x46CC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46CC6Cu;
label_46cc6c:
    // 0x46cc6c: 0x10000014  b           . + 4 + (0x14 << 2)
label_46cc70:
    if (ctx->pc == 0x46CC70u) {
        ctx->pc = 0x46CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC6Cu;
        // 0x46cc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC74u;
        goto label_46cc74;
    }
    ctx->pc = 0x46CC6Cu;
    {
        const bool branch_taken_0x46cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC6Cu;
        // 0x46cc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cc6c) {
            ctx->pc = 0x46CCC0u;
            goto label_46ccc0;
        }
    }
    ctx->pc = 0x46CC74u;
label_46cc74:
    // 0x46cc74: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x46cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_46cc78:
    // 0x46cc78: 0x10000010  b           . + 4 + (0x10 << 2)
label_46cc7c:
    if (ctx->pc == 0x46CC7Cu) {
        ctx->pc = 0x46CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC78u;
        // 0x46cc7c: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC80u;
        goto label_46cc80;
    }
    ctx->pc = 0x46CC78u;
    {
        const bool branch_taken_0x46cc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC78u;
        // 0x46cc7c: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cc78) {
            ctx->pc = 0x46CCBCu;
            goto label_46ccbc;
        }
    }
    ctx->pc = 0x46CC80u;
label_46cc80:
    // 0x46cc80: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_46cc84:
    if (ctx->pc == 0x46CC84u) {
        ctx->pc = 0x46CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC80u;
        // 0x46cc84: 0x8f8788e4  lw          $a3, -0x771C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC88u;
        goto label_46cc88;
    }
    ctx->pc = 0x46CC80u;
    {
        const bool branch_taken_0x46cc80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC80u;
        // 0x46cc84: 0x8f8788e4  lw          $a3, -0x771C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cc80) {
            ctx->pc = 0x46CC94u;
            goto label_46cc94;
        }
    }
    ctx->pc = 0x46CC88u;
label_46cc88:
    // 0x46cc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46cc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cc8c:
    // 0x46cc8c: 0xc11fe4a  jal         func_47F928
label_46cc90:
    if (ctx->pc == 0x46CC90u) {
        ctx->pc = 0x46CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC8Cu;
        // 0x46cc90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC94u;
        goto label_46cc94;
    }
    ctx->pc = 0x46CC8Cu;
    SET_GPR_U32(ctx, 31, 0x46CC94u);
    ctx->pc = 0x46CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CC8Cu;
    // 0x46cc90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F928u, 0x46CC8Cu, 0x46CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CC94u;
label_46cc94:
    // 0x46cc94: 0x1000000a  b           . + 4 + (0xA << 2)
label_46cc98:
    if (ctx->pc == 0x46CC98u) {
        ctx->pc = 0x46CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC94u;
        // 0x46cc98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CC9Cu;
        goto label_46cc9c;
    }
    ctx->pc = 0x46CC94u;
    {
        const bool branch_taken_0x46cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CC94u;
        // 0x46cc98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cc94) {
            ctx->pc = 0x46CCC0u;
            goto label_46ccc0;
        }
    }
    ctx->pc = 0x46CC9Cu;
label_46cc9c:
    // 0x46cc9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46cca0:
    // 0x46cca0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46cca4:
    // 0x46cca4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x46cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_46cca8:
    // 0x46cca8: 0xc11eff2  jal         func_47BFC8
label_46ccac:
    if (ctx->pc == 0x46CCACu) {
        ctx->pc = 0x46CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CCA8u;
        // 0x46ccac: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CCB0u;
        goto label_46ccb0;
    }
    ctx->pc = 0x46CCA8u;
    SET_GPR_U32(ctx, 31, 0x46CCB0u);
    ctx->pc = 0x46CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CCA8u;
    // 0x46ccac: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46CCA8u, 0x46CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CCB0u;
label_46ccb0:
    // 0x46ccb0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x46ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_46ccb4:
    // 0x46ccb4: 0xc11f024  jal         func_47C090
label_46ccb8:
    if (ctx->pc == 0x46CCB8u) {
        ctx->pc = 0x46CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CCB4u;
        // 0x46ccb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CCBCu;
        goto label_46ccbc;
    }
    ctx->pc = 0x46CCB4u;
    SET_GPR_U32(ctx, 31, 0x46CCBCu);
    ctx->pc = 0x46CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CCB4u;
    // 0x46ccb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46CCB4u, 0x46CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CCBCu;
label_46ccbc:
    // 0x46ccbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46ccbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ccc0:
    // 0x46ccc0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x46ccc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46ccc4:
    // 0x46ccc4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x46ccc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46ccc8:
    // 0x46ccc8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x46ccc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46cccc:
    // 0x46cccc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x46ccccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46ccd0:
    // 0x46ccd0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x46ccd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46ccd4:
    // 0x46ccd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x46ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_46ccd8:
    // 0x46ccd8: 0x3e00008  jr          $ra
label_46ccdc:
    if (ctx->pc == 0x46CCDCu) {
        ctx->pc = 0x46CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CCD8u;
        // 0x46ccdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CCE0u;
        goto label_fallthrough_0x46ccd8;
    }
    ctx->pc = 0x46CCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CCD8u;
        // 0x46ccdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46ccd8:
    ctx->pc = 0x46CCE0u;
}
