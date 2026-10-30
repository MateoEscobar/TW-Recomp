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

// Function: sub_0022CB00
// Address: 0x22cb00 - 0x22cd78
void sub_0022CB00_0x22cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CB00_0x22cb00");
#endif

    switch (ctx->pc) {
        case 0x22cb00u: goto label_22cb00;
        case 0x22cb04u: goto label_22cb04;
        case 0x22cb08u: goto label_22cb08;
        case 0x22cb0cu: goto label_22cb0c;
        case 0x22cb10u: goto label_22cb10;
        case 0x22cb14u: goto label_22cb14;
        case 0x22cb18u: goto label_22cb18;
        case 0x22cb1cu: goto label_22cb1c;
        case 0x22cb20u: goto label_22cb20;
        case 0x22cb24u: goto label_22cb24;
        case 0x22cb28u: goto label_22cb28;
        case 0x22cb2cu: goto label_22cb2c;
        case 0x22cb30u: goto label_22cb30;
        case 0x22cb34u: goto label_22cb34;
        case 0x22cb38u: goto label_22cb38;
        case 0x22cb3cu: goto label_22cb3c;
        case 0x22cb40u: goto label_22cb40;
        case 0x22cb44u: goto label_22cb44;
        case 0x22cb48u: goto label_22cb48;
        case 0x22cb4cu: goto label_22cb4c;
        case 0x22cb50u: goto label_22cb50;
        case 0x22cb54u: goto label_22cb54;
        case 0x22cb58u: goto label_22cb58;
        case 0x22cb5cu: goto label_22cb5c;
        case 0x22cb60u: goto label_22cb60;
        case 0x22cb64u: goto label_22cb64;
        case 0x22cb68u: goto label_22cb68;
        case 0x22cb6cu: goto label_22cb6c;
        case 0x22cb70u: goto label_22cb70;
        case 0x22cb74u: goto label_22cb74;
        case 0x22cb78u: goto label_22cb78;
        case 0x22cb7cu: goto label_22cb7c;
        case 0x22cb80u: goto label_22cb80;
        case 0x22cb84u: goto label_22cb84;
        case 0x22cb88u: goto label_22cb88;
        case 0x22cb8cu: goto label_22cb8c;
        case 0x22cb90u: goto label_22cb90;
        case 0x22cb94u: goto label_22cb94;
        case 0x22cb98u: goto label_22cb98;
        case 0x22cb9cu: goto label_22cb9c;
        case 0x22cba0u: goto label_22cba0;
        case 0x22cba4u: goto label_22cba4;
        case 0x22cba8u: goto label_22cba8;
        case 0x22cbacu: goto label_22cbac;
        case 0x22cbb0u: goto label_22cbb0;
        case 0x22cbb4u: goto label_22cbb4;
        case 0x22cbb8u: goto label_22cbb8;
        case 0x22cbbcu: goto label_22cbbc;
        case 0x22cbc0u: goto label_22cbc0;
        case 0x22cbc4u: goto label_22cbc4;
        case 0x22cbc8u: goto label_22cbc8;
        case 0x22cbccu: goto label_22cbcc;
        case 0x22cbd0u: goto label_22cbd0;
        case 0x22cbd4u: goto label_22cbd4;
        case 0x22cbd8u: goto label_22cbd8;
        case 0x22cbdcu: goto label_22cbdc;
        case 0x22cbe0u: goto label_22cbe0;
        case 0x22cbe4u: goto label_22cbe4;
        case 0x22cbe8u: goto label_22cbe8;
        case 0x22cbecu: goto label_22cbec;
        case 0x22cbf0u: goto label_22cbf0;
        case 0x22cbf4u: goto label_22cbf4;
        case 0x22cbf8u: goto label_22cbf8;
        case 0x22cbfcu: goto label_22cbfc;
        case 0x22cc00u: goto label_22cc00;
        case 0x22cc04u: goto label_22cc04;
        case 0x22cc08u: goto label_22cc08;
        case 0x22cc0cu: goto label_22cc0c;
        case 0x22cc10u: goto label_22cc10;
        case 0x22cc14u: goto label_22cc14;
        case 0x22cc18u: goto label_22cc18;
        case 0x22cc1cu: goto label_22cc1c;
        case 0x22cc20u: goto label_22cc20;
        case 0x22cc24u: goto label_22cc24;
        case 0x22cc28u: goto label_22cc28;
        case 0x22cc2cu: goto label_22cc2c;
        case 0x22cc30u: goto label_22cc30;
        case 0x22cc34u: goto label_22cc34;
        case 0x22cc38u: goto label_22cc38;
        case 0x22cc3cu: goto label_22cc3c;
        case 0x22cc40u: goto label_22cc40;
        case 0x22cc44u: goto label_22cc44;
        case 0x22cc48u: goto label_22cc48;
        case 0x22cc4cu: goto label_22cc4c;
        case 0x22cc50u: goto label_22cc50;
        case 0x22cc54u: goto label_22cc54;
        case 0x22cc58u: goto label_22cc58;
        case 0x22cc5cu: goto label_22cc5c;
        case 0x22cc60u: goto label_22cc60;
        case 0x22cc64u: goto label_22cc64;
        case 0x22cc68u: goto label_22cc68;
        case 0x22cc6cu: goto label_22cc6c;
        case 0x22cc70u: goto label_22cc70;
        case 0x22cc74u: goto label_22cc74;
        case 0x22cc78u: goto label_22cc78;
        case 0x22cc7cu: goto label_22cc7c;
        case 0x22cc80u: goto label_22cc80;
        case 0x22cc84u: goto label_22cc84;
        case 0x22cc88u: goto label_22cc88;
        case 0x22cc8cu: goto label_22cc8c;
        case 0x22cc90u: goto label_22cc90;
        case 0x22cc94u: goto label_22cc94;
        case 0x22cc98u: goto label_22cc98;
        case 0x22cc9cu: goto label_22cc9c;
        case 0x22cca0u: goto label_22cca0;
        case 0x22cca4u: goto label_22cca4;
        case 0x22cca8u: goto label_22cca8;
        case 0x22ccacu: goto label_22ccac;
        case 0x22ccb0u: goto label_22ccb0;
        case 0x22ccb4u: goto label_22ccb4;
        case 0x22ccb8u: goto label_22ccb8;
        case 0x22ccbcu: goto label_22ccbc;
        case 0x22ccc0u: goto label_22ccc0;
        case 0x22ccc4u: goto label_22ccc4;
        case 0x22ccc8u: goto label_22ccc8;
        case 0x22ccccu: goto label_22cccc;
        case 0x22ccd0u: goto label_22ccd0;
        case 0x22ccd4u: goto label_22ccd4;
        case 0x22ccd8u: goto label_22ccd8;
        case 0x22ccdcu: goto label_22ccdc;
        case 0x22cce0u: goto label_22cce0;
        case 0x22cce4u: goto label_22cce4;
        case 0x22cce8u: goto label_22cce8;
        case 0x22ccecu: goto label_22ccec;
        case 0x22ccf0u: goto label_22ccf0;
        case 0x22ccf4u: goto label_22ccf4;
        case 0x22ccf8u: goto label_22ccf8;
        case 0x22ccfcu: goto label_22ccfc;
        case 0x22cd00u: goto label_22cd00;
        case 0x22cd04u: goto label_22cd04;
        case 0x22cd08u: goto label_22cd08;
        case 0x22cd0cu: goto label_22cd0c;
        case 0x22cd10u: goto label_22cd10;
        case 0x22cd14u: goto label_22cd14;
        case 0x22cd18u: goto label_22cd18;
        case 0x22cd1cu: goto label_22cd1c;
        case 0x22cd20u: goto label_22cd20;
        case 0x22cd24u: goto label_22cd24;
        case 0x22cd28u: goto label_22cd28;
        case 0x22cd2cu: goto label_22cd2c;
        case 0x22cd30u: goto label_22cd30;
        case 0x22cd34u: goto label_22cd34;
        case 0x22cd38u: goto label_22cd38;
        case 0x22cd3cu: goto label_22cd3c;
        case 0x22cd40u: goto label_22cd40;
        case 0x22cd44u: goto label_22cd44;
        case 0x22cd48u: goto label_22cd48;
        case 0x22cd4cu: goto label_22cd4c;
        case 0x22cd50u: goto label_22cd50;
        case 0x22cd54u: goto label_22cd54;
        case 0x22cd58u: goto label_22cd58;
        case 0x22cd5cu: goto label_22cd5c;
        case 0x22cd60u: goto label_22cd60;
        case 0x22cd64u: goto label_22cd64;
        case 0x22cd68u: goto label_22cd68;
        case 0x22cd6cu: goto label_22cd6c;
        case 0x22cd70u: goto label_22cd70;
        case 0x22cd74u: goto label_22cd74;
        default: break;
    }

    ctx->pc = 0x22cb00u;

label_22cb00:
    // 0x22cb00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22cb04:
    // 0x22cb04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22cb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22cb08:
    // 0x22cb08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22cb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22cb0c:
    // 0x22cb0c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22cb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22cb10:
    // 0x22cb10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22cb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22cb14:
    // 0x22cb14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22cb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22cb18:
    // 0x22cb18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22cb1c:
    // 0x22cb1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22cb1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22cb20:
    // 0x22cb20: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22cb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_22cb24:
    // 0x22cb24: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22cb28:
    // 0x22cb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22cb2c:
    // 0x22cb2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22cb30:
    // 0x22cb30: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22cb30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22cb34:
    // 0x22cb34: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22cb38:
    // 0x22cb38: 0x40f809  jalr        $v0
label_22cb3c:
    if (ctx->pc == 0x22CB3Cu) {
        ctx->pc = 0x22CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB38u;
        // 0x22cb3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB40u;
        goto label_22cb40;
    }
    ctx->pc = 0x22CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CB40u);
        ctx->pc = 0x22CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB38u;
        // 0x22cb3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CB38u, 0x22CB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CB40u;
label_22cb40:
    // 0x22cb40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22cb44:
    // 0x22cb44: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22cb44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22cb48:
    // 0x22cb48: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22cb4c:
    // 0x22cb4c: 0x40f809  jalr        $v0
label_22cb50:
    if (ctx->pc == 0x22CB50u) {
        ctx->pc = 0x22CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB4Cu;
        // 0x22cb50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB54u;
        goto label_22cb54;
    }
    ctx->pc = 0x22CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CB54u);
        ctx->pc = 0x22CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB4Cu;
        // 0x22cb50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CB4Cu, 0x22CB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CB54u;
label_22cb54:
    // 0x22cb54: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_22cb58:
    if (ctx->pc == 0x22CB58u) {
        ctx->pc = 0x22CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB54u;
        // 0x22cb58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB5Cu;
        goto label_22cb5c;
    }
    ctx->pc = 0x22CB54u;
    {
        const bool branch_taken_0x22cb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cb54) {
            ctx->pc = 0x22CB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CB54u;
            // 0x22cb58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB78u;
            goto label_22cb78;
        }
    }
    ctx->pc = 0x22CB5Cu;
label_22cb5c:
    // 0x22cb5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22cb60:
    // 0x22cb60: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22cb60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22cb64:
    // 0x22cb64: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22cb68:
    // 0x22cb68: 0x40f809  jalr        $v0
label_22cb6c:
    if (ctx->pc == 0x22CB6Cu) {
        ctx->pc = 0x22CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB68u;
        // 0x22cb6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB70u;
        goto label_22cb70;
    }
    ctx->pc = 0x22CB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CB70u);
        ctx->pc = 0x22CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB68u;
        // 0x22cb6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CB68u, 0x22CB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CB70u;
label_22cb70:
    // 0x22cb70: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22cb70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22cb74:
    // 0x22cb74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cb78:
    // 0x22cb78: 0xc089988  jal         func_226620
label_22cb7c:
    if (ctx->pc == 0x22CB7Cu) {
        ctx->pc = 0x22CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB78u;
        // 0x22cb7c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB80u;
        goto label_22cb80;
    }
    ctx->pc = 0x22CB78u;
    SET_GPR_U32(ctx, 31, 0x22CB80u);
    ctx->pc = 0x22CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB78u;
    // 0x22cb7c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CB78u, 0x22CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB80u;
label_22cb80:
    // 0x22cb80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22cb84:
    // 0x22cb84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cb88:
    // 0x22cb88: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22cb8c:
    // 0x22cb8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22cb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22cb90:
    // 0x22cb90: 0xc095018  jal         func_254060
label_22cb94:
    if (ctx->pc == 0x22CB94u) {
        ctx->pc = 0x22CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB90u;
        // 0x22cb94: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB98u;
        goto label_22cb98;
    }
    ctx->pc = 0x22CB90u;
    SET_GPR_U32(ctx, 31, 0x22CB98u);
    ctx->pc = 0x22CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB90u;
    // 0x22cb94: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22CB90u, 0x22CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB98u;
label_22cb98:
    // 0x22cb98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22cb98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22cb9c:
    // 0x22cb9c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22cba0:
    // 0x22cba0: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_22cba4:
    if (ctx->pc == 0x22CBA4u) {
        ctx->pc = 0x22CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBA0u;
        // 0x22cba4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBA8u;
        goto label_22cba8;
    }
    ctx->pc = 0x22CBA0u;
    {
        const bool branch_taken_0x22cba0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBA0u;
        // 0x22cba4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cba0) {
            ctx->pc = 0x22CBB0u;
            goto label_22cbb0;
        }
    }
    ctx->pc = 0x22CBA8u;
label_22cba8:
    // 0x22cba8: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_22cbac:
    if (ctx->pc == 0x22CBACu) {
        ctx->pc = 0x22CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBA8u;
        // 0x22cbac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBB0u;
        goto label_22cbb0;
    }
    ctx->pc = 0x22CBA8u;
    {
        const bool branch_taken_0x22cba8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBA8u;
        // 0x22cbac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cba8) {
            ctx->pc = 0x22CBC0u;
            goto label_22cbc0;
        }
    }
    ctx->pc = 0x22CBB0u;
label_22cbb0:
    // 0x22cbb0: 0xc094fca  jal         func_253F28
label_22cbb4:
    if (ctx->pc == 0x22CBB4u) {
        ctx->pc = 0x22CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBB0u;
        // 0x22cbb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBB8u;
        goto label_22cbb8;
    }
    ctx->pc = 0x22CBB0u;
    SET_GPR_U32(ctx, 31, 0x22CBB8u);
    ctx->pc = 0x22CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBB0u;
    // 0x22cbb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22CBB0u, 0x22CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBB8u;
label_22cbb8:
    // 0x22cbb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_22cbbc:
    if (ctx->pc == 0x22CBBCu) {
        ctx->pc = 0x22CBC0u;
        goto label_22cbc0;
    }
    ctx->pc = 0x22CBB8u;
    {
        const bool branch_taken_0x22cbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cbb8) {
            ctx->pc = 0x22CBD4u;
            goto label_22cbd4;
        }
    }
    ctx->pc = 0x22CBC0u;
label_22cbc0:
    // 0x22cbc0: 0xc094fde  jal         func_253F78
label_22cbc4:
    if (ctx->pc == 0x22CBC4u) {
        ctx->pc = 0x22CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBC0u;
        // 0x22cbc4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBC8u;
        goto label_22cbc8;
    }
    ctx->pc = 0x22CBC0u;
    SET_GPR_U32(ctx, 31, 0x22CBC8u);
    ctx->pc = 0x22CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBC0u;
    // 0x22cbc4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22CBC0u, 0x22CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBC8u;
label_22cbc8:
    // 0x22cbc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cbcc:
    // 0x22cbcc: 0xc094fde  jal         func_253F78
label_22cbd0:
    if (ctx->pc == 0x22CBD0u) {
        ctx->pc = 0x22CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBCCu;
        // 0x22cbd0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBD4u;
        goto label_22cbd4;
    }
    ctx->pc = 0x22CBCCu;
    SET_GPR_U32(ctx, 31, 0x22CBD4u);
    ctx->pc = 0x22CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBCCu;
    // 0x22cbd0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22CBCCu, 0x22CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBD4u;
label_22cbd4:
    // 0x22cbd4: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
label_22cbd8:
    if (ctx->pc == 0x22CBD8u) {
        ctx->pc = 0x22CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBD4u;
        // 0x22cbd8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBDCu;
        goto label_22cbdc;
    }
    ctx->pc = 0x22CBD4u;
    {
        const bool branch_taken_0x22cbd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBD4u;
        // 0x22cbd8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbd4) {
            ctx->pc = 0x22CCD0u;
            goto label_22ccd0;
        }
    }
    ctx->pc = 0x22CBDCu;
label_22cbdc:
    // 0x22cbdc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22cbe0:
    // 0x22cbe0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22cbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22cbe4:
    // 0x22cbe4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22cbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22cbe8:
    // 0x22cbe8: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22cbe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22cbec:
    // 0x22cbec: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22cbf0:
    // 0x22cbf0: 0x40f809  jalr        $v0
label_22cbf4:
    if (ctx->pc == 0x22CBF4u) {
        ctx->pc = 0x22CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBF0u;
        // 0x22cbf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBF8u;
        goto label_22cbf8;
    }
    ctx->pc = 0x22CBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CBF8u);
        ctx->pc = 0x22CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBF0u;
        // 0x22cbf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CBF0u, 0x22CBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CBF8u;
label_22cbf8:
    // 0x22cbf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22cbfc:
    // 0x22cbfc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22cbfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22cc00:
    // 0x22cc00: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22cc04:
    // 0x22cc04: 0x40f809  jalr        $v0
label_22cc08:
    if (ctx->pc == 0x22CC08u) {
        ctx->pc = 0x22CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC04u;
        // 0x22cc08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC0Cu;
        goto label_22cc0c;
    }
    ctx->pc = 0x22CC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CC0Cu);
        ctx->pc = 0x22CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC04u;
        // 0x22cc08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CC04u, 0x22CC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CC0Cu;
label_22cc0c:
    // 0x22cc0c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_22cc10:
    if (ctx->pc == 0x22CC10u) {
        ctx->pc = 0x22CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC0Cu;
        // 0x22cc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC14u;
        goto label_22cc14;
    }
    ctx->pc = 0x22CC0Cu;
    {
        const bool branch_taken_0x22cc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc0c) {
            ctx->pc = 0x22CC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CC0Cu;
            // 0x22cc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CC30u;
            goto label_22cc30;
        }
    }
    ctx->pc = 0x22CC14u;
label_22cc14:
    // 0x22cc14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22cc18:
    // 0x22cc18: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22cc18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22cc1c:
    // 0x22cc1c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22cc20:
    // 0x22cc20: 0x40f809  jalr        $v0
label_22cc24:
    if (ctx->pc == 0x22CC24u) {
        ctx->pc = 0x22CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC20u;
        // 0x22cc24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC28u;
        goto label_22cc28;
    }
    ctx->pc = 0x22CC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CC28u);
        ctx->pc = 0x22CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC20u;
        // 0x22cc24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CC20u, 0x22CC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CC28u;
label_22cc28:
    // 0x22cc28: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22cc28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22cc2c:
    // 0x22cc2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cc30:
    // 0x22cc30: 0xc089988  jal         func_226620
label_22cc34:
    if (ctx->pc == 0x22CC34u) {
        ctx->pc = 0x22CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC30u;
        // 0x22cc34: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC38u;
        goto label_22cc38;
    }
    ctx->pc = 0x22CC30u;
    SET_GPR_U32(ctx, 31, 0x22CC38u);
    ctx->pc = 0x22CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC30u;
    // 0x22cc34: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CC30u, 0x22CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC38u;
label_22cc38:
    // 0x22cc38: 0x8e62bd30  lw          $v0, -0x42D0($s3)
    ctx->pc = 0x22cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
label_22cc3c:
    // 0x22cc3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cc40:
    // 0x22cc40: 0xc095018  jal         func_254060
label_22cc44:
    if (ctx->pc == 0x22CC44u) {
        ctx->pc = 0x22CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC40u;
        // 0x22cc44: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC48u;
        goto label_22cc48;
    }
    ctx->pc = 0x22CC40u;
    SET_GPR_U32(ctx, 31, 0x22CC48u);
    ctx->pc = 0x22CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC40u;
    // 0x22cc44: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22CC40u, 0x22CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC48u;
label_22cc48:
    // 0x22cc48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22cc48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22cc4c:
    // 0x22cc4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22cc50:
    // 0x22cc50: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_22cc54:
    if (ctx->pc == 0x22CC54u) {
        ctx->pc = 0x22CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC50u;
        // 0x22cc54: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC58u;
        goto label_22cc58;
    }
    ctx->pc = 0x22CC50u;
    {
        const bool branch_taken_0x22cc50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC50u;
        // 0x22cc54: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc50) {
            ctx->pc = 0x22CC60u;
            goto label_22cc60;
        }
    }
    ctx->pc = 0x22CC58u;
label_22cc58:
    // 0x22cc58: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_22cc5c:
    if (ctx->pc == 0x22CC5Cu) {
        ctx->pc = 0x22CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC58u;
        // 0x22cc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC60u;
        goto label_22cc60;
    }
    ctx->pc = 0x22CC58u;
    {
        const bool branch_taken_0x22cc58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC58u;
        // 0x22cc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc58) {
            ctx->pc = 0x22CC70u;
            goto label_22cc70;
        }
    }
    ctx->pc = 0x22CC60u;
label_22cc60:
    // 0x22cc60: 0xc094fca  jal         func_253F28
label_22cc64:
    if (ctx->pc == 0x22CC64u) {
        ctx->pc = 0x22CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC60u;
        // 0x22cc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC68u;
        goto label_22cc68;
    }
    ctx->pc = 0x22CC60u;
    SET_GPR_U32(ctx, 31, 0x22CC68u);
    ctx->pc = 0x22CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC60u;
    // 0x22cc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22CC60u, 0x22CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC68u;
label_22cc68:
    // 0x22cc68: 0x10000007  b           . + 4 + (0x7 << 2)
label_22cc6c:
    if (ctx->pc == 0x22CC6Cu) {
        ctx->pc = 0x22CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC68u;
        // 0x22cc6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC70u;
        goto label_22cc70;
    }
    ctx->pc = 0x22CC68u;
    {
        const bool branch_taken_0x22cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC68u;
        // 0x22cc6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc68) {
            ctx->pc = 0x22CC88u;
            goto label_22cc88;
        }
    }
    ctx->pc = 0x22CC70u;
label_22cc70:
    // 0x22cc70: 0xc094fde  jal         func_253F78
label_22cc74:
    if (ctx->pc == 0x22CC74u) {
        ctx->pc = 0x22CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC70u;
        // 0x22cc74: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC78u;
        goto label_22cc78;
    }
    ctx->pc = 0x22CC70u;
    SET_GPR_U32(ctx, 31, 0x22CC78u);
    ctx->pc = 0x22CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC70u;
    // 0x22cc74: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22CC70u, 0x22CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC78u;
label_22cc78:
    // 0x22cc78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cc7c:
    // 0x22cc7c: 0xc094fde  jal         func_253F78
label_22cc80:
    if (ctx->pc == 0x22CC80u) {
        ctx->pc = 0x22CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC7Cu;
        // 0x22cc80: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC84u;
        goto label_22cc84;
    }
    ctx->pc = 0x22CC7Cu;
    SET_GPR_U32(ctx, 31, 0x22CC84u);
    ctx->pc = 0x22CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC7Cu;
    // 0x22cc80: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22CC7Cu, 0x22CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC84u;
label_22cc84:
    // 0x22cc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cc88:
    // 0x22cc88: 0xc08997c  jal         func_2265F0
label_22cc8c:
    if (ctx->pc == 0x22CC8Cu) {
        ctx->pc = 0x22CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC88u;
        // 0x22cc8c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC90u;
        goto label_22cc90;
    }
    ctx->pc = 0x22CC88u;
    SET_GPR_U32(ctx, 31, 0x22CC90u);
    ctx->pc = 0x22CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC88u;
    // 0x22cc8c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22CC88u, 0x22CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC90u;
label_22cc90:
    // 0x22cc90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22cc94:
    if (ctx->pc == 0x22CC94u) {
        ctx->pc = 0x22CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC90u;
        // 0x22cc94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC98u;
        goto label_22cc98;
    }
    ctx->pc = 0x22CC90u;
    {
        const bool branch_taken_0x22cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC90u;
        // 0x22cc94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc90) {
            ctx->pc = 0x22CCA8u;
            goto label_22cca8;
        }
    }
    ctx->pc = 0x22CC98u;
label_22cc98:
    // 0x22cc98: 0xc08abd2  jal         func_22AF48
label_22cc9c:
    if (ctx->pc == 0x22CC9Cu) {
        ctx->pc = 0x22CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC98u;
        // 0x22cc9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCA0u;
        goto label_22cca0;
    }
    ctx->pc = 0x22CC98u;
    SET_GPR_U32(ctx, 31, 0x22CCA0u);
    ctx->pc = 0x22CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC98u;
    // 0x22cc9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AF48u, 0x22CC98u, 0x22CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCA0u;
label_22cca0:
    // 0x22cca0: 0x10000009  b           . + 4 + (0x9 << 2)
label_22cca4:
    if (ctx->pc == 0x22CCA4u) {
        ctx->pc = 0x22CCA8u;
        goto label_22cca8;
    }
    ctx->pc = 0x22CCA0u;
    {
        const bool branch_taken_0x22cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cca0) {
            ctx->pc = 0x22CCC8u;
            goto label_22ccc8;
        }
    }
    ctx->pc = 0x22CCA8u;
label_22cca8:
    // 0x22cca8: 0xc08997c  jal         func_2265F0
label_22ccac:
    if (ctx->pc == 0x22CCACu) {
        ctx->pc = 0x22CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCA8u;
        // 0x22ccac: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCB0u;
        goto label_22ccb0;
    }
    ctx->pc = 0x22CCA8u;
    SET_GPR_U32(ctx, 31, 0x22CCB0u);
    ctx->pc = 0x22CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCA8u;
    // 0x22ccac: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22CCA8u, 0x22CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCB0u;
label_22ccb0:
    // 0x22ccb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22ccb4:
    if (ctx->pc == 0x22CCB4u) {
        ctx->pc = 0x22CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCB0u;
        // 0x22ccb4: 0x3a42000e  xori        $v0, $s2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCB8u;
        goto label_22ccb8;
    }
    ctx->pc = 0x22CCB0u;
    {
        const bool branch_taken_0x22ccb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCB0u;
        // 0x22ccb4: 0x3a42000e  xori        $v0, $s2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccb0) {
            ctx->pc = 0x22CCC8u;
            goto label_22ccc8;
        }
    }
    ctx->pc = 0x22CCB8u;
label_22ccb8:
    // 0x22ccb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22ccbc:
    if (ctx->pc == 0x22CCBCu) {
        ctx->pc = 0x22CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCB8u;
        // 0x22ccbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCC0u;
        goto label_22ccc0;
    }
    ctx->pc = 0x22CCB8u;
    {
        const bool branch_taken_0x22ccb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCB8u;
        // 0x22ccbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccb8) {
            ctx->pc = 0x22CCC8u;
            goto label_22ccc8;
        }
    }
    ctx->pc = 0x22CCC0u;
label_22ccc0:
    // 0x22ccc0: 0xc094fb4  jal         func_253ED0
label_22ccc4:
    if (ctx->pc == 0x22CCC4u) {
        ctx->pc = 0x22CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCC0u;
        // 0x22ccc4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCC8u;
        goto label_22ccc8;
    }
    ctx->pc = 0x22CCC0u;
    SET_GPR_U32(ctx, 31, 0x22CCC8u);
    ctx->pc = 0x22CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCC0u;
    // 0x22ccc4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22CCC0u, 0x22CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCC8u;
label_22ccc8:
    // 0x22ccc8: 0xc08bf92  jal         func_22FE48
label_22cccc:
    if (ctx->pc == 0x22CCCCu) {
        ctx->pc = 0x22CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCC8u;
        // 0x22cccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCD0u;
        goto label_22ccd0;
    }
    ctx->pc = 0x22CCC8u;
    SET_GPR_U32(ctx, 31, 0x22CCD0u);
    ctx->pc = 0x22CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCC8u;
    // 0x22cccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22CCC8u, 0x22CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCD0u;
label_22ccd0:
    // 0x22ccd0: 0xc08bf92  jal         func_22FE48
label_22ccd4:
    if (ctx->pc == 0x22CCD4u) {
        ctx->pc = 0x22CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCD0u;
        // 0x22ccd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCD8u;
        goto label_22ccd8;
    }
    ctx->pc = 0x22CCD0u;
    SET_GPR_U32(ctx, 31, 0x22CCD8u);
    ctx->pc = 0x22CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCD0u;
    // 0x22ccd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22CCD0u, 0x22CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCD8u;
label_22ccd8:
    // 0x22ccd8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x22ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22ccdc:
    // 0x22ccdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cce0:
    // 0x22cce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cce4:
    // 0x22cce4: 0xc087b0e  jal         func_21EC38
label_22cce8:
    if (ctx->pc == 0x22CCE8u) {
        ctx->pc = 0x22CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCE4u;
        // 0x22cce8: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCECu;
        goto label_22ccec;
    }
    ctx->pc = 0x22CCE4u;
    SET_GPR_U32(ctx, 31, 0x22CCECu);
    ctx->pc = 0x22CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCE4u;
    // 0x22cce8: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x22CCE4u, 0x22CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCECu;
label_22ccec:
    // 0x22ccec: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x22ccecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22ccf0:
    // 0x22ccf0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22ccf0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22ccf4:
    // 0x22ccf4: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_22ccf8:
    if (ctx->pc == 0x22CCF8u) {
        ctx->pc = 0x22CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCF4u;
        // 0x22ccf8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCFCu;
        goto label_22ccfc;
    }
    ctx->pc = 0x22CCF4u;
    {
        const bool branch_taken_0x22ccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ccf4) {
            ctx->pc = 0x22CCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CCF4u;
            // 0x22ccf8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CD60u;
            goto label_22cd60;
        }
    }
    ctx->pc = 0x22CCFCu;
label_22ccfc:
    // 0x22ccfc: 0xc048892  jal         func_122248
label_22cd00:
    if (ctx->pc == 0x22CD00u) {
        ctx->pc = 0x22CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCFCu;
        // 0x22cd00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD04u;
        goto label_22cd04;
    }
    ctx->pc = 0x22CCFCu;
    SET_GPR_U32(ctx, 31, 0x22CD04u);
    ctx->pc = 0x22CD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCFCu;
    // 0x22cd00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x22CCFCu, 0x22CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD04u;
label_22cd04:
    // 0x22cd04: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_22cd08:
    if (ctx->pc == 0x22CD08u) {
        ctx->pc = 0x22CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD04u;
        // 0x22cd08: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD0Cu;
        goto label_22cd0c;
    }
    ctx->pc = 0x22CD04u;
    {
        const bool branch_taken_0x22cd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd04) {
            ctx->pc = 0x22CD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CD04u;
            // 0x22cd08: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CD60u;
            goto label_22cd60;
        }
    }
    ctx->pc = 0x22CD0Cu;
label_22cd0c:
    // 0x22cd0c: 0xc047e72  jal         func_11F9C8
label_22cd10:
    if (ctx->pc == 0x22CD10u) {
        ctx->pc = 0x22CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD0Cu;
        // 0x22cd10: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD14u;
        goto label_22cd14;
    }
    ctx->pc = 0x22CD0Cu;
    SET_GPR_U32(ctx, 31, 0x22CD14u);
    ctx->pc = 0x22CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD0Cu;
    // 0x22cd10: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22CD0Cu, 0x22CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD14u;
label_22cd14:
    // 0x22cd14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_22cd18:
    if (ctx->pc == 0x22CD18u) {
        ctx->pc = 0x22CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD14u;
        // 0x22cd18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD1Cu;
        goto label_22cd1c;
    }
    ctx->pc = 0x22CD14u;
    {
        const bool branch_taken_0x22cd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD14u;
        // 0x22cd18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd14) {
            ctx->pc = 0x22CD60u;
            goto label_22cd60;
        }
    }
    ctx->pc = 0x22CD1Cu;
label_22cd1c:
    // 0x22cd1c: 0xc047e72  jal         func_11F9C8
label_22cd20:
    if (ctx->pc == 0x22CD20u) {
        ctx->pc = 0x22CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD1Cu;
        // 0x22cd20: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD24u;
        goto label_22cd24;
    }
    ctx->pc = 0x22CD1Cu;
    SET_GPR_U32(ctx, 31, 0x22CD24u);
    ctx->pc = 0x22CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD1Cu;
    // 0x22cd20: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22CD1Cu, 0x22CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD24u;
label_22cd24:
    // 0x22cd24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22cd28:
    // 0x22cd28: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x22cd28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_22cd2c:
    // 0x22cd2c: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x22cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_22cd30:
    // 0x22cd30: 0xa0f809  jalr        $a1
label_22cd34:
    if (ctx->pc == 0x22CD34u) {
        ctx->pc = 0x22CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD30u;
        // 0x22cd34: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD38u;
        goto label_22cd38;
    }
    ctx->pc = 0x22CD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x22CD38u);
        ctx->pc = 0x22CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD30u;
        // 0x22cd34: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CD30u, 0x22CD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CD38u;
label_22cd38:
    // 0x22cd38: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x22cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22cd3c:
    // 0x22cd3c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_22cd40:
    if (ctx->pc == 0x22CD40u) {
        ctx->pc = 0x22CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD3Cu;
        // 0x22cd40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD44u;
        goto label_22cd44;
    }
    ctx->pc = 0x22CD3Cu;
    {
        const bool branch_taken_0x22cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD3Cu;
        // 0x22cd40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd3c) {
            ctx->pc = 0x22CD60u;
            goto label_22cd60;
        }
    }
    ctx->pc = 0x22CD44u;
label_22cd44:
    // 0x22cd44: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x22cd44u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22cd48:
    // 0x22cd48: 0xc047f60  jal         func_11FD80
label_22cd4c:
    if (ctx->pc == 0x22CD4Cu) {
        ctx->pc = 0x22CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD48u;
        // 0x22cd4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD50u;
        goto label_22cd50;
    }
    ctx->pc = 0x22CD48u;
    SET_GPR_U32(ctx, 31, 0x22CD50u);
    ctx->pc = 0x22CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD48u;
    // 0x22cd4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x22CD48u, 0x22CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD50u;
label_22cd50:
    // 0x22cd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cd54:
    // 0x22cd54: 0xac400248  sw          $zero, 0x248($v0)
    ctx->pc = 0x22cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
label_22cd58:
    // 0x22cd58: 0xac43024c  sw          $v1, 0x24C($v0)
    ctx->pc = 0x22cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 588), GPR_U32(ctx, 3));
label_22cd5c:
    // 0x22cd5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22cd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22cd60:
    // 0x22cd60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22cd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22cd64:
    // 0x22cd64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22cd64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22cd68:
    // 0x22cd68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22cd68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22cd6c:
    // 0x22cd6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22cd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22cd70:
    // 0x22cd70: 0x3e00008  jr          $ra
label_22cd74:
    if (ctx->pc == 0x22CD74u) {
        ctx->pc = 0x22CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD70u;
        // 0x22cd74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD78u;
        goto label_fallthrough_0x22cd70;
    }
    ctx->pc = 0x22CD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD70u;
        // 0x22cd74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22cd70:
    ctx->pc = 0x22CD78u;
}
