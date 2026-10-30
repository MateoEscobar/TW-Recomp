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

// Function: sub_0020CAB8
// Address: 0x20cab8 - 0x20ce08
void sub_0020CAB8_0x20cab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CAB8_0x20cab8");
#endif

    switch (ctx->pc) {
        case 0x20cab8u: goto label_20cab8;
        case 0x20cabcu: goto label_20cabc;
        case 0x20cac0u: goto label_20cac0;
        case 0x20cac4u: goto label_20cac4;
        case 0x20cac8u: goto label_20cac8;
        case 0x20caccu: goto label_20cacc;
        case 0x20cad0u: goto label_20cad0;
        case 0x20cad4u: goto label_20cad4;
        case 0x20cad8u: goto label_20cad8;
        case 0x20cadcu: goto label_20cadc;
        case 0x20cae0u: goto label_20cae0;
        case 0x20cae4u: goto label_20cae4;
        case 0x20cae8u: goto label_20cae8;
        case 0x20caecu: goto label_20caec;
        case 0x20caf0u: goto label_20caf0;
        case 0x20caf4u: goto label_20caf4;
        case 0x20caf8u: goto label_20caf8;
        case 0x20cafcu: goto label_20cafc;
        case 0x20cb00u: goto label_20cb00;
        case 0x20cb04u: goto label_20cb04;
        case 0x20cb08u: goto label_20cb08;
        case 0x20cb0cu: goto label_20cb0c;
        case 0x20cb10u: goto label_20cb10;
        case 0x20cb14u: goto label_20cb14;
        case 0x20cb18u: goto label_20cb18;
        case 0x20cb1cu: goto label_20cb1c;
        case 0x20cb20u: goto label_20cb20;
        case 0x20cb24u: goto label_20cb24;
        case 0x20cb28u: goto label_20cb28;
        case 0x20cb2cu: goto label_20cb2c;
        case 0x20cb30u: goto label_20cb30;
        case 0x20cb34u: goto label_20cb34;
        case 0x20cb38u: goto label_20cb38;
        case 0x20cb3cu: goto label_20cb3c;
        case 0x20cb40u: goto label_20cb40;
        case 0x20cb44u: goto label_20cb44;
        case 0x20cb48u: goto label_20cb48;
        case 0x20cb4cu: goto label_20cb4c;
        case 0x20cb50u: goto label_20cb50;
        case 0x20cb54u: goto label_20cb54;
        case 0x20cb58u: goto label_20cb58;
        case 0x20cb5cu: goto label_20cb5c;
        case 0x20cb60u: goto label_20cb60;
        case 0x20cb64u: goto label_20cb64;
        case 0x20cb68u: goto label_20cb68;
        case 0x20cb6cu: goto label_20cb6c;
        case 0x20cb70u: goto label_20cb70;
        case 0x20cb74u: goto label_20cb74;
        case 0x20cb78u: goto label_20cb78;
        case 0x20cb7cu: goto label_20cb7c;
        case 0x20cb80u: goto label_20cb80;
        case 0x20cb84u: goto label_20cb84;
        case 0x20cb88u: goto label_20cb88;
        case 0x20cb8cu: goto label_20cb8c;
        case 0x20cb90u: goto label_20cb90;
        case 0x20cb94u: goto label_20cb94;
        case 0x20cb98u: goto label_20cb98;
        case 0x20cb9cu: goto label_20cb9c;
        case 0x20cba0u: goto label_20cba0;
        case 0x20cba4u: goto label_20cba4;
        case 0x20cba8u: goto label_20cba8;
        case 0x20cbacu: goto label_20cbac;
        case 0x20cbb0u: goto label_20cbb0;
        case 0x20cbb4u: goto label_20cbb4;
        case 0x20cbb8u: goto label_20cbb8;
        case 0x20cbbcu: goto label_20cbbc;
        case 0x20cbc0u: goto label_20cbc0;
        case 0x20cbc4u: goto label_20cbc4;
        case 0x20cbc8u: goto label_20cbc8;
        case 0x20cbccu: goto label_20cbcc;
        case 0x20cbd0u: goto label_20cbd0;
        case 0x20cbd4u: goto label_20cbd4;
        case 0x20cbd8u: goto label_20cbd8;
        case 0x20cbdcu: goto label_20cbdc;
        case 0x20cbe0u: goto label_20cbe0;
        case 0x20cbe4u: goto label_20cbe4;
        case 0x20cbe8u: goto label_20cbe8;
        case 0x20cbecu: goto label_20cbec;
        case 0x20cbf0u: goto label_20cbf0;
        case 0x20cbf4u: goto label_20cbf4;
        case 0x20cbf8u: goto label_20cbf8;
        case 0x20cbfcu: goto label_20cbfc;
        case 0x20cc00u: goto label_20cc00;
        case 0x20cc04u: goto label_20cc04;
        case 0x20cc08u: goto label_20cc08;
        case 0x20cc0cu: goto label_20cc0c;
        case 0x20cc10u: goto label_20cc10;
        case 0x20cc14u: goto label_20cc14;
        case 0x20cc18u: goto label_20cc18;
        case 0x20cc1cu: goto label_20cc1c;
        case 0x20cc20u: goto label_20cc20;
        case 0x20cc24u: goto label_20cc24;
        case 0x20cc28u: goto label_20cc28;
        case 0x20cc2cu: goto label_20cc2c;
        case 0x20cc30u: goto label_20cc30;
        case 0x20cc34u: goto label_20cc34;
        case 0x20cc38u: goto label_20cc38;
        case 0x20cc3cu: goto label_20cc3c;
        case 0x20cc40u: goto label_20cc40;
        case 0x20cc44u: goto label_20cc44;
        case 0x20cc48u: goto label_20cc48;
        case 0x20cc4cu: goto label_20cc4c;
        case 0x20cc50u: goto label_20cc50;
        case 0x20cc54u: goto label_20cc54;
        case 0x20cc58u: goto label_20cc58;
        case 0x20cc5cu: goto label_20cc5c;
        case 0x20cc60u: goto label_20cc60;
        case 0x20cc64u: goto label_20cc64;
        case 0x20cc68u: goto label_20cc68;
        case 0x20cc6cu: goto label_20cc6c;
        case 0x20cc70u: goto label_20cc70;
        case 0x20cc74u: goto label_20cc74;
        case 0x20cc78u: goto label_20cc78;
        case 0x20cc7cu: goto label_20cc7c;
        case 0x20cc80u: goto label_20cc80;
        case 0x20cc84u: goto label_20cc84;
        case 0x20cc88u: goto label_20cc88;
        case 0x20cc8cu: goto label_20cc8c;
        case 0x20cc90u: goto label_20cc90;
        case 0x20cc94u: goto label_20cc94;
        case 0x20cc98u: goto label_20cc98;
        case 0x20cc9cu: goto label_20cc9c;
        case 0x20cca0u: goto label_20cca0;
        case 0x20cca4u: goto label_20cca4;
        case 0x20cca8u: goto label_20cca8;
        case 0x20ccacu: goto label_20ccac;
        case 0x20ccb0u: goto label_20ccb0;
        case 0x20ccb4u: goto label_20ccb4;
        case 0x20ccb8u: goto label_20ccb8;
        case 0x20ccbcu: goto label_20ccbc;
        case 0x20ccc0u: goto label_20ccc0;
        case 0x20ccc4u: goto label_20ccc4;
        case 0x20ccc8u: goto label_20ccc8;
        case 0x20ccccu: goto label_20cccc;
        case 0x20ccd0u: goto label_20ccd0;
        case 0x20ccd4u: goto label_20ccd4;
        case 0x20ccd8u: goto label_20ccd8;
        case 0x20ccdcu: goto label_20ccdc;
        case 0x20cce0u: goto label_20cce0;
        case 0x20cce4u: goto label_20cce4;
        case 0x20cce8u: goto label_20cce8;
        case 0x20ccecu: goto label_20ccec;
        case 0x20ccf0u: goto label_20ccf0;
        case 0x20ccf4u: goto label_20ccf4;
        case 0x20ccf8u: goto label_20ccf8;
        case 0x20ccfcu: goto label_20ccfc;
        case 0x20cd00u: goto label_20cd00;
        case 0x20cd04u: goto label_20cd04;
        case 0x20cd08u: goto label_20cd08;
        case 0x20cd0cu: goto label_20cd0c;
        case 0x20cd10u: goto label_20cd10;
        case 0x20cd14u: goto label_20cd14;
        case 0x20cd18u: goto label_20cd18;
        case 0x20cd1cu: goto label_20cd1c;
        case 0x20cd20u: goto label_20cd20;
        case 0x20cd24u: goto label_20cd24;
        case 0x20cd28u: goto label_20cd28;
        case 0x20cd2cu: goto label_20cd2c;
        case 0x20cd30u: goto label_20cd30;
        case 0x20cd34u: goto label_20cd34;
        case 0x20cd38u: goto label_20cd38;
        case 0x20cd3cu: goto label_20cd3c;
        case 0x20cd40u: goto label_20cd40;
        case 0x20cd44u: goto label_20cd44;
        case 0x20cd48u: goto label_20cd48;
        case 0x20cd4cu: goto label_20cd4c;
        case 0x20cd50u: goto label_20cd50;
        case 0x20cd54u: goto label_20cd54;
        case 0x20cd58u: goto label_20cd58;
        case 0x20cd5cu: goto label_20cd5c;
        case 0x20cd60u: goto label_20cd60;
        case 0x20cd64u: goto label_20cd64;
        case 0x20cd68u: goto label_20cd68;
        case 0x20cd6cu: goto label_20cd6c;
        case 0x20cd70u: goto label_20cd70;
        case 0x20cd74u: goto label_20cd74;
        case 0x20cd78u: goto label_20cd78;
        case 0x20cd7cu: goto label_20cd7c;
        case 0x20cd80u: goto label_20cd80;
        case 0x20cd84u: goto label_20cd84;
        case 0x20cd88u: goto label_20cd88;
        case 0x20cd8cu: goto label_20cd8c;
        case 0x20cd90u: goto label_20cd90;
        case 0x20cd94u: goto label_20cd94;
        case 0x20cd98u: goto label_20cd98;
        case 0x20cd9cu: goto label_20cd9c;
        case 0x20cda0u: goto label_20cda0;
        case 0x20cda4u: goto label_20cda4;
        case 0x20cda8u: goto label_20cda8;
        case 0x20cdacu: goto label_20cdac;
        case 0x20cdb0u: goto label_20cdb0;
        case 0x20cdb4u: goto label_20cdb4;
        case 0x20cdb8u: goto label_20cdb8;
        case 0x20cdbcu: goto label_20cdbc;
        case 0x20cdc0u: goto label_20cdc0;
        case 0x20cdc4u: goto label_20cdc4;
        case 0x20cdc8u: goto label_20cdc8;
        case 0x20cdccu: goto label_20cdcc;
        case 0x20cdd0u: goto label_20cdd0;
        case 0x20cdd4u: goto label_20cdd4;
        case 0x20cdd8u: goto label_20cdd8;
        case 0x20cddcu: goto label_20cddc;
        case 0x20cde0u: goto label_20cde0;
        case 0x20cde4u: goto label_20cde4;
        case 0x20cde8u: goto label_20cde8;
        case 0x20cdecu: goto label_20cdec;
        case 0x20cdf0u: goto label_20cdf0;
        case 0x20cdf4u: goto label_20cdf4;
        case 0x20cdf8u: goto label_20cdf8;
        case 0x20cdfcu: goto label_20cdfc;
        case 0x20ce00u: goto label_20ce00;
        case 0x20ce04u: goto label_20ce04;
        default: break;
    }

    ctx->pc = 0x20cab8u;

label_20cab8:
    // 0x20cab8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20cab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_20cabc:
    // 0x20cabc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20cabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20cac0:
    // 0x20cac0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20cac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20cac4:
    // 0x20cac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20cac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20cac8:
    // 0x20cac8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20cac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_20cacc:
    // 0x20cacc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20caccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20cad0:
    // 0x20cad0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20cad4:
    // 0x20cad4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20cad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20cad8:
    // 0x20cad8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20cad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20cadc:
    // 0x20cadc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x20cadcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_20cae0:
    // 0x20cae0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x20cae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_20cae4:
    // 0x20cae4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20cae8:
    // 0x20cae8: 0x144000bc  bnez        $v0, . + 4 + (0xBC << 2)
label_20caec:
    if (ctx->pc == 0x20CAECu) {
        ctx->pc = 0x20CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAE8u;
        // 0x20caec: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CAF0u;
        goto label_20caf0;
    }
    ctx->pc = 0x20CAE8u;
    {
        const bool branch_taken_0x20cae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAE8u;
        // 0x20caec: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cae8) {
            ctx->pc = 0x20CDDCu;
            goto label_20cddc;
        }
    }
    ctx->pc = 0x20CAF0u;
label_20caf0:
    // 0x20caf0: 0xc080ebe  jal         func_203AF8
label_20caf4:
    if (ctx->pc == 0x20CAF4u) {
        ctx->pc = 0x20CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAF0u;
        // 0x20caf4: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CAF8u;
        goto label_20caf8;
    }
    ctx->pc = 0x20CAF0u;
    SET_GPR_U32(ctx, 31, 0x20CAF8u);
    ctx->pc = 0x20CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAF0u;
    // 0x20caf4: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20CAF0u, 0x20CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAF8u;
label_20caf8:
    // 0x20caf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20cafc:
    // 0x20cafc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x20cafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_20cb00:
    // 0x20cb00: 0xc080ed6  jal         func_203B58
label_20cb04:
    if (ctx->pc == 0x20CB04u) {
        ctx->pc = 0x20CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB00u;
        // 0x20cb04: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB08u;
        goto label_20cb08;
    }
    ctx->pc = 0x20CB00u;
    SET_GPR_U32(ctx, 31, 0x20CB08u);
    ctx->pc = 0x20CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB00u;
    // 0x20cb04: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B58u, 0x20CB00u, 0x20CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB08u;
label_20cb08:
    // 0x20cb08: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20cb08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20cb0c:
    // 0x20cb0c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x20cb0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20cb10:
    // 0x20cb10: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x20cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_20cb14:
    // 0x20cb14: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x20cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_20cb18:
    // 0x20cb18: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x20cb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_20cb1c:
    // 0x20cb1c: 0x245493b8  addiu       $s4, $v0, -0x6C48
    ctx->pc = 0x20cb1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939576));
label_20cb20:
    // 0x20cb20: 0xe655000c  swc1        $f21, 0xC($s2)
    ctx->pc = 0x20cb20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_20cb24:
    // 0x20cb24: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20cb28:
    // 0x20cb28: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20cb28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20cb2c:
    // 0x20cb2c: 0x24a593a8  addiu       $a1, $a1, -0x6C58
    ctx->pc = 0x20cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939560));
label_20cb30:
    // 0x20cb30: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20cb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20cb34:
    // 0x20cb34: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20cb34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20cb38:
    // 0x20cb38: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20cb3c:
    // 0x20cb3c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20cb3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20cb40:
    // 0x20cb40: 0x24090023  addiu       $t1, $zero, 0x23
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_20cb44:
    // 0x20cb44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20cb44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cb48:
    // 0x20cb48: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20cb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20cb4c:
    // 0x20cb4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20cb4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cb50:
    // 0x20cb50: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20cb54:
    // 0x20cb54: 0x40f809  jalr        $v0
label_20cb58:
    if (ctx->pc == 0x20CB58u) {
        ctx->pc = 0x20CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB54u;
        // 0x20cb58: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB5Cu;
        goto label_20cb5c;
    }
    ctx->pc = 0x20CB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CB5Cu);
        ctx->pc = 0x20CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB54u;
        // 0x20cb58: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CB54u, 0x20CB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CB5Cu;
label_20cb5c:
    // 0x20cb5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20cb60:
    if (ctx->pc == 0x20CB60u) {
        ctx->pc = 0x20CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB5Cu;
        // 0x20cb60: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB64u;
        goto label_20cb64;
    }
    ctx->pc = 0x20CB5Cu;
    {
        const bool branch_taken_0x20cb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB5Cu;
        // 0x20cb60: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb5c) {
            ctx->pc = 0x20CB70u;
            goto label_20cb70;
        }
    }
    ctx->pc = 0x20CB64u;
label_20cb64:
    // 0x20cb64: 0xc0733e2  jal         func_1CCF88
label_20cb68:
    if (ctx->pc == 0x20CB68u) {
        ctx->pc = 0x20CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB64u;
        // 0x20cb68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB6Cu;
        goto label_20cb6c;
    }
    ctx->pc = 0x20CB64u;
    SET_GPR_U32(ctx, 31, 0x20CB6Cu);
    ctx->pc = 0x20CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB64u;
    // 0x20cb68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x20CB64u, 0x20CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB6Cu;
label_20cb6c:
    // 0x20cb6c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x20cb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20cb70:
    // 0x20cb70: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x20cb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_20cb74:
    // 0x20cb74: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20cb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20cb78:
    // 0x20cb78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20cb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20cb7c:
    // 0x20cb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cb80:
    // 0x20cb80: 0xc05e602  jal         func_179808
label_20cb84:
    if (ctx->pc == 0x20CB84u) {
        ctx->pc = 0x20CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB80u;
        // 0x20cb84: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB88u;
        goto label_20cb88;
    }
    ctx->pc = 0x20CB80u;
    SET_GPR_U32(ctx, 31, 0x20CB88u);
    ctx->pc = 0x20CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB80u;
    // 0x20cb84: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x20CB80u, 0x20CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB88u;
label_20cb88:
    // 0x20cb88: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x20cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20cb8c:
    // 0x20cb8c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x20cb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20cb90:
    // 0x20cb90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20cb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cb94:
    // 0x20cb94: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20cb98:
    // 0x20cb98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20cb9c:
    // 0x20cb9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20cb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cba0:
    // 0x20cba0: 0x8c50d328  lw          $s0, -0x2CD8($v0)
    ctx->pc = 0x20cba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_20cba4:
    // 0x20cba4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20cba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cba8:
    // 0x20cba8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x20cba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_20cbac:
    // 0x20cbac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20cbacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cbb0:
    // 0x20cbb0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x20cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_20cbb4:
    // 0x20cbb4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x20cbb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20cbb8:
    // 0x20cbb8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x20cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_20cbbc:
    // 0x20cbbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20cbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cbc0:
    // 0x20cbc0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x20cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_20cbc4:
    // 0x20cbc4: 0x40f809  jalr        $v0
label_20cbc8:
    if (ctx->pc == 0x20CBC8u) {
        ctx->pc = 0x20CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBC4u;
        // 0x20cbc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CBCCu;
        goto label_20cbcc;
    }
    ctx->pc = 0x20CBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CBCCu);
        ctx->pc = 0x20CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBC4u;
        // 0x20cbc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CBC4u, 0x20CBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CBCCu;
label_20cbcc:
    // 0x20cbcc: 0xc067b9c  jal         func_19EE70
label_20cbd0:
    if (ctx->pc == 0x20CBD0u) {
        ctx->pc = 0x20CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBCCu;
        // 0x20cbd0: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CBD4u;
        goto label_20cbd4;
    }
    ctx->pc = 0x20CBCCu;
    SET_GPR_U32(ctx, 31, 0x20CBD4u);
    ctx->pc = 0x20CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CBCCu;
    // 0x20cbd0: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20CBCCu, 0x20CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBD4u;
label_20cbd4:
    // 0x20cbd4: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x20cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20cbd8:
    // 0x20cbd8: 0xc073478  jal         func_1CD1E0
label_20cbdc:
    if (ctx->pc == 0x20CBDCu) {
        ctx->pc = 0x20CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBD8u;
        // 0x20cbdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CBE0u;
        goto label_20cbe0;
    }
    ctx->pc = 0x20CBD8u;
    SET_GPR_U32(ctx, 31, 0x20CBE0u);
    ctx->pc = 0x20CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CBD8u;
    // 0x20cbdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x20CBD8u, 0x20CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBE0u;
label_20cbe0:
    // 0x20cbe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20cbe4:
    // 0x20cbe4: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20cbe4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20cbe8:
    // 0x20cbe8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x20cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_20cbec:
    // 0x20cbec: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20cbf0:
    // 0x20cbf0: 0x24a593f8  addiu       $a1, $a1, -0x6C08
    ctx->pc = 0x20cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939640));
label_20cbf4:
    // 0x20cbf4: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20cbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20cbf8:
    // 0x20cbf8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20cbfc:
    // 0x20cbfc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20cbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20cc00:
    // 0x20cc00: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20cc00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20cc04:
    // 0x20cc04: 0x2409002a  addiu       $t1, $zero, 0x2A
    ctx->pc = 0x20cc04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_20cc08:
    // 0x20cc08: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20cc08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20cc0c:
    // 0x20cc0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20cc0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cc10:
    // 0x20cc10: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20cc14:
    // 0x20cc14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20cc14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cc18:
    // 0x20cc18: 0x40f809  jalr        $v0
label_20cc1c:
    if (ctx->pc == 0x20CC1Cu) {
        ctx->pc = 0x20CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC18u;
        // 0x20cc1c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC20u;
        goto label_20cc20;
    }
    ctx->pc = 0x20CC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CC20u);
        ctx->pc = 0x20CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC18u;
        // 0x20cc1c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CC18u, 0x20CC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CC20u;
label_20cc20:
    // 0x20cc20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20cc24:
    if (ctx->pc == 0x20CC24u) {
        ctx->pc = 0x20CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC20u;
        // 0x20cc24: 0xae220090  sw          $v0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC28u;
        goto label_20cc28;
    }
    ctx->pc = 0x20CC20u;
    {
        const bool branch_taken_0x20cc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cc20) {
            ctx->pc = 0x20CC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CC20u;
            // 0x20cc24: 0xae220090  sw          $v0, 0x90($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CC34u;
            goto label_20cc34;
        }
    }
    ctx->pc = 0x20CC28u;
label_20cc28:
    // 0x20cc28: 0xc074fbc  jal         func_1D3EF0
label_20cc2c:
    if (ctx->pc == 0x20CC2Cu) {
        ctx->pc = 0x20CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC28u;
        // 0x20cc2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC30u;
        goto label_20cc30;
    }
    ctx->pc = 0x20CC28u;
    SET_GPR_U32(ctx, 31, 0x20CC30u);
    ctx->pc = 0x20CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC28u;
    // 0x20cc2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x20CC28u, 0x20CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC30u;
label_20cc30:
    // 0x20cc30: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x20cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_20cc34:
    // 0x20cc34: 0xc080ec6  jal         func_203B18
label_20cc38:
    if (ctx->pc == 0x20CC38u) {
        ctx->pc = 0x20CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC34u;
        // 0x20cc38: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC3Cu;
        goto label_20cc3c;
    }
    ctx->pc = 0x20CC34u;
    SET_GPR_U32(ctx, 31, 0x20CC3Cu);
    ctx->pc = 0x20CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC34u;
    // 0x20cc38: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x20CC34u, 0x20CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC3Cu;
label_20cc3c:
    // 0x20cc3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20cc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20cc40:
    // 0x20cc40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20cc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20cc44:
    // 0x20cc44: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20cc48:
    // 0x20cc48: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20cc4c:
    // 0x20cc4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20cc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cc50:
    // 0x20cc50: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20cc50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20cc54:
    // 0x20cc54: 0x26270050  addiu       $a3, $s1, 0x50
    ctx->pc = 0x20cc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_20cc58:
    // 0x20cc58: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x20cc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_20cc5c:
    // 0x20cc5c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x20cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_20cc60:
    // 0x20cc60: 0xe655000c  swc1        $f21, 0xC($s2)
    ctx->pc = 0x20cc60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_20cc64:
    // 0x20cc64: 0xc075044  jal         func_1D4110
label_20cc68:
    if (ctx->pc == 0x20CC68u) {
        ctx->pc = 0x20CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC64u;
        // 0x20cc68: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC6Cu;
        goto label_20cc6c;
    }
    ctx->pc = 0x20CC64u;
    SET_GPR_U32(ctx, 31, 0x20CC6Cu);
    ctx->pc = 0x20CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC64u;
    // 0x20cc68: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x20CC64u, 0x20CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC6Cu;
label_20cc6c:
    // 0x20cc6c: 0xc080ebe  jal         func_203AF8
label_20cc70:
    if (ctx->pc == 0x20CC70u) {
        ctx->pc = 0x20CC74u;
        goto label_20cc74;
    }
    ctx->pc = 0x20CC6Cu;
    SET_GPR_U32(ctx, 31, 0x20CC74u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20CC6Cu, 0x20CC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC74u;
label_20cc74:
    // 0x20cc74: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x20cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20cc78:
    // 0x20cc78: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20cc7c:
    // 0x20cc7c: 0x24040095  addiu       $a0, $zero, 0x95
    ctx->pc = 0x20cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_20cc80:
    // 0x20cc80: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x20cc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_20cc84:
    // 0x20cc84: 0xac730088  sw          $s3, 0x88($v1)
    ctx->pc = 0x20cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 19));
label_20cc88:
    // 0x20cc88: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x20cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20cc8c:
    // 0x20cc8c: 0xc067b9c  jal         func_19EE70
label_20cc90:
    if (ctx->pc == 0x20CC90u) {
        ctx->pc = 0x20CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC8Cu;
        // 0x20cc90: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC94u;
        goto label_20cc94;
    }
    ctx->pc = 0x20CC8Cu;
    SET_GPR_U32(ctx, 31, 0x20CC94u);
    ctx->pc = 0x20CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC8Cu;
    // 0x20cc90: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20CC8Cu, 0x20CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC94u;
label_20cc94:
    // 0x20cc94: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20cc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20cc98:
    // 0x20cc98: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20cc98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20cc9c:
    // 0x20cc9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20cc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20cca0:
    // 0x20cca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20cca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cca4:
    // 0x20cca4: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20cca8:
    // 0x20cca8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20cca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ccac:
    // 0x20ccac: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x20ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_20ccb0:
    // 0x20ccb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ccb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ccb4:
    // 0x20ccb4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20ccb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20ccb8:
    // 0x20ccb8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20ccb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ccbc:
    // 0x20ccbc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x20ccbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ccc0:
    // 0x20ccc0: 0xc07508c  jal         func_1D4230
label_20ccc4:
    if (ctx->pc == 0x20CCC4u) {
        ctx->pc = 0x20CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCC0u;
        // 0x20ccc4: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCC8u;
        goto label_20ccc8;
    }
    ctx->pc = 0x20CCC0u;
    SET_GPR_U32(ctx, 31, 0x20CCC8u);
    ctx->pc = 0x20CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCC0u;
    // 0x20ccc4: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20CCC0u, 0x20CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCC8u;
label_20ccc8:
    // 0x20ccc8: 0xc067b9c  jal         func_19EE70
label_20cccc:
    if (ctx->pc == 0x20CCCCu) {
        ctx->pc = 0x20CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCC8u;
        // 0x20cccc: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCD0u;
        goto label_20ccd0;
    }
    ctx->pc = 0x20CCC8u;
    SET_GPR_U32(ctx, 31, 0x20CCD0u);
    ctx->pc = 0x20CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCC8u;
    // 0x20cccc: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20CCC8u, 0x20CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCD0u;
label_20ccd0:
    // 0x20ccd0: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20ccd4:
    // 0x20ccd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ccd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ccd8:
    // 0x20ccd8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20ccd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20ccdc:
    // 0x20ccdc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20ccdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20cce0:
    // 0x20cce0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20cce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20cce4:
    // 0x20cce4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x20cce4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cce8:
    // 0x20cce8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x20cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_20ccec:
    // 0x20ccec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ccecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ccf0:
    // 0x20ccf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ccf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ccf4:
    // 0x20ccf4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20ccf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20ccf8:
    // 0x20ccf8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20ccf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ccfc:
    // 0x20ccfc: 0xc07508c  jal         func_1D4230
label_20cd00:
    if (ctx->pc == 0x20CD00u) {
        ctx->pc = 0x20CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCFCu;
        // 0x20cd00: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD04u;
        goto label_20cd04;
    }
    ctx->pc = 0x20CCFCu;
    SET_GPR_U32(ctx, 31, 0x20CD04u);
    ctx->pc = 0x20CD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCFCu;
    // 0x20cd00: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20CCFCu, 0x20CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD04u;
label_20cd04:
    // 0x20cd04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20cd08:
    // 0x20cd08: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x20cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_20cd0c:
    // 0x20cd0c: 0x8c640120  lw          $a0, 0x120($v1)
    ctx->pc = 0x20cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_20cd10:
    // 0x20cd10: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_20cd14:
    if (ctx->pc == 0x20CD14u) {
        ctx->pc = 0x20CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD10u;
        // 0x20cd14: 0x8e250090  lw          $a1, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD18u;
        goto label_20cd18;
    }
    ctx->pc = 0x20CD10u;
    {
        const bool branch_taken_0x20cd10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cd10) {
            ctx->pc = 0x20CD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CD10u;
            // 0x20cd14: 0x8e250090  lw          $a1, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CD2Cu;
            goto label_20cd2c;
        }
    }
    ctx->pc = 0x20CD18u;
label_20cd18:
    // 0x20cd18: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20cd1c:
    // 0x20cd1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20cd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cd20:
    // 0x20cd20: 0xc0752e2  jal         func_1D4B88
label_20cd24:
    if (ctx->pc == 0x20CD24u) {
        ctx->pc = 0x20CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD20u;
        // 0x20cd24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD28u;
        goto label_20cd28;
    }
    ctx->pc = 0x20CD20u;
    SET_GPR_U32(ctx, 31, 0x20CD28u);
    ctx->pc = 0x20CD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD20u;
    // 0x20cd24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x20CD20u, 0x20CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD28u;
label_20cd28:
    // 0x20cd28: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x20cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20cd2c:
    // 0x20cd2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20cd30:
    // 0x20cd30: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x20cd30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_20cd34:
    // 0x20cd34: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x20cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_20cd38:
    // 0x20cd38: 0x60f809  jalr        $v1
label_20cd3c:
    if (ctx->pc == 0x20CD3Cu) {
        ctx->pc = 0x20CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD38u;
        // 0x20cd3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD40u;
        goto label_20cd40;
    }
    ctx->pc = 0x20CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CD40u);
        ctx->pc = 0x20CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD38u;
        // 0x20cd3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CD38u, 0x20CD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CD40u;
label_20cd40:
    // 0x20cd40: 0xc080ebe  jal         func_203AF8
label_20cd44:
    if (ctx->pc == 0x20CD44u) {
        ctx->pc = 0x20CD48u;
        goto label_20cd48;
    }
    ctx->pc = 0x20CD40u;
    SET_GPR_U32(ctx, 31, 0x20CD48u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20CD40u, 0x20CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD48u;
label_20cd48:
    // 0x20cd48: 0xc080ec2  jal         func_203B08
label_20cd4c:
    if (ctx->pc == 0x20CD4Cu) {
        ctx->pc = 0x20CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD48u;
        // 0x20cd4c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD50u;
        goto label_20cd50;
    }
    ctx->pc = 0x20CD48u;
    SET_GPR_U32(ctx, 31, 0x20CD50u);
    ctx->pc = 0x20CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD48u;
    // 0x20cd4c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x20CD48u, 0x20CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD50u;
label_20cd50:
    // 0x20cd50: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20cd50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20cd54:
    // 0x20cd54: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20cd58:
    // 0x20cd58: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20cd58u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20cd5c:
    // 0x20cd5c: 0x24a59408  addiu       $a1, $a1, -0x6BF8
    ctx->pc = 0x20cd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939656));
label_20cd60:
    // 0x20cd60: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x20cd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_20cd64:
    // 0x20cd64: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20cd64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20cd68:
    // 0x20cd68: 0xe655000c  swc1        $f21, 0xC($s2)
    ctx->pc = 0x20cd68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_20cd6c:
    // 0x20cd6c: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x20cd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_20cd70:
    // 0x20cd70: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x20cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_20cd74:
    // 0x20cd74: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20cd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20cd78:
    // 0x20cd78: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x20cd78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_20cd7c:
    // 0x20cd7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20cd7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cd80:
    // 0x20cd80: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20cd84:
    // 0x20cd84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20cd84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cd88:
    // 0x20cd88: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20cd88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20cd8c:
    // 0x20cd8c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20cd90:
    // 0x20cd90: 0x40f809  jalr        $v0
label_20cd94:
    if (ctx->pc == 0x20CD94u) {
        ctx->pc = 0x20CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD90u;
        // 0x20cd94: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD98u;
        goto label_20cd98;
    }
    ctx->pc = 0x20CD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CD98u);
        ctx->pc = 0x20CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD90u;
        // 0x20cd94: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CD90u, 0x20CD98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CD98u;
label_20cd98:
    // 0x20cd98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20cd9c:
    if (ctx->pc == 0x20CD9Cu) {
        ctx->pc = 0x20CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD98u;
        // 0x20cd9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CDA0u;
        goto label_20cda0;
    }
    ctx->pc = 0x20CD98u;
    {
        const bool branch_taken_0x20cd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cd98) {
            ctx->pc = 0x20CD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CD98u;
            // 0x20cd9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CDACu;
            goto label_20cdac;
        }
    }
    ctx->pc = 0x20CDA0u;
label_20cda0:
    // 0x20cda0: 0xc073a9c  jal         func_1CEA70
label_20cda4:
    if (ctx->pc == 0x20CDA4u) {
        ctx->pc = 0x20CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDA0u;
        // 0x20cda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CDA8u;
        goto label_20cda8;
    }
    ctx->pc = 0x20CDA0u;
    SET_GPR_U32(ctx, 31, 0x20CDA8u);
    ctx->pc = 0x20CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDA0u;
    // 0x20cda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x20CDA0u, 0x20CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDA8u;
label_20cda8:
    // 0x20cda8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20cda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20cdac:
    // 0x20cdac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cdb0:
    // 0x20cdb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20cdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cdb4:
    // 0x20cdb4: 0xc073ad0  jal         func_1CEB40
label_20cdb8:
    if (ctx->pc == 0x20CDB8u) {
        ctx->pc = 0x20CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDB4u;
        // 0x20cdb8: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CDBCu;
        goto label_20cdbc;
    }
    ctx->pc = 0x20CDB4u;
    SET_GPR_U32(ctx, 31, 0x20CDBCu);
    ctx->pc = 0x20CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDB4u;
    // 0x20cdb8: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x20CDB4u, 0x20CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDBCu;
label_20cdbc:
    // 0x20cdbc: 0xc067b9c  jal         func_19EE70
label_20cdc0:
    if (ctx->pc == 0x20CDC0u) {
        ctx->pc = 0x20CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDBCu;
        // 0x20cdc0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CDC4u;
        goto label_20cdc4;
    }
    ctx->pc = 0x20CDBCu;
    SET_GPR_U32(ctx, 31, 0x20CDC4u);
    ctx->pc = 0x20CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDBCu;
    // 0x20cdc0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20CDBCu, 0x20CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDC4u;
label_20cdc4:
    // 0x20cdc4: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x20cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20cdc8:
    // 0x20cdc8: 0xc073b0a  jal         func_1CEC28
label_20cdcc:
    if (ctx->pc == 0x20CDCCu) {
        ctx->pc = 0x20CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDC8u;
        // 0x20cdcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CDD0u;
        goto label_20cdd0;
    }
    ctx->pc = 0x20CDC8u;
    SET_GPR_U32(ctx, 31, 0x20CDD0u);
    ctx->pc = 0x20CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDC8u;
    // 0x20cdcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20CDC8u, 0x20CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDD0u;
label_20cdd0:
    // 0x20cdd0: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x20cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_20cdd4:
    // 0x20cdd4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x20cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20cdd8:
    // 0x20cdd8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20cdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20cddc:
    // 0x20cddc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20cddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20cde0:
    // 0x20cde0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20cde0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20cde4:
    // 0x20cde4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20cde4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20cde8:
    // 0x20cde8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20cde8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20cdec:
    // 0x20cdec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20cdecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20cdf0:
    // 0x20cdf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20cdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20cdf4:
    // 0x20cdf4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x20cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20cdf8:
    // 0x20cdf8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x20cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20cdfc:
    // 0x20cdfc: 0x3e00008  jr          $ra
label_20ce00:
    if (ctx->pc == 0x20CE00u) {
        ctx->pc = 0x20CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDFCu;
        // 0x20ce00: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE04u;
        goto label_20ce04;
    }
    ctx->pc = 0x20CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDFCu;
        // 0x20ce00: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CE04u;
label_20ce04:
    // 0x20ce04: 0x0  nop
    ctx->pc = 0x20ce04u;
    // NOP
    ctx->pc = 0x20ce08u;
}
