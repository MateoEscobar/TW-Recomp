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

// Function: sub_003DED88
// Address: 0x3ded88 - 0x3deef0
void sub_003DED88_0x3ded88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DED88_0x3ded88");
#endif

    switch (ctx->pc) {
        case 0x3ded88u: goto label_3ded88;
        case 0x3ded8cu: goto label_3ded8c;
        case 0x3ded90u: goto label_3ded90;
        case 0x3ded94u: goto label_3ded94;
        case 0x3ded98u: goto label_3ded98;
        case 0x3ded9cu: goto label_3ded9c;
        case 0x3deda0u: goto label_3deda0;
        case 0x3deda4u: goto label_3deda4;
        case 0x3deda8u: goto label_3deda8;
        case 0x3dedacu: goto label_3dedac;
        case 0x3dedb0u: goto label_3dedb0;
        case 0x3dedb4u: goto label_3dedb4;
        case 0x3dedb8u: goto label_3dedb8;
        case 0x3dedbcu: goto label_3dedbc;
        case 0x3dedc0u: goto label_3dedc0;
        case 0x3dedc4u: goto label_3dedc4;
        case 0x3dedc8u: goto label_3dedc8;
        case 0x3dedccu: goto label_3dedcc;
        case 0x3dedd0u: goto label_3dedd0;
        case 0x3dedd4u: goto label_3dedd4;
        case 0x3dedd8u: goto label_3dedd8;
        case 0x3deddcu: goto label_3deddc;
        case 0x3dede0u: goto label_3dede0;
        case 0x3dede4u: goto label_3dede4;
        case 0x3dede8u: goto label_3dede8;
        case 0x3dedecu: goto label_3dedec;
        case 0x3dedf0u: goto label_3dedf0;
        case 0x3dedf4u: goto label_3dedf4;
        case 0x3dedf8u: goto label_3dedf8;
        case 0x3dedfcu: goto label_3dedfc;
        case 0x3dee00u: goto label_3dee00;
        case 0x3dee04u: goto label_3dee04;
        case 0x3dee08u: goto label_3dee08;
        case 0x3dee0cu: goto label_3dee0c;
        case 0x3dee10u: goto label_3dee10;
        case 0x3dee14u: goto label_3dee14;
        case 0x3dee18u: goto label_3dee18;
        case 0x3dee1cu: goto label_3dee1c;
        case 0x3dee20u: goto label_3dee20;
        case 0x3dee24u: goto label_3dee24;
        case 0x3dee28u: goto label_3dee28;
        case 0x3dee2cu: goto label_3dee2c;
        case 0x3dee30u: goto label_3dee30;
        case 0x3dee34u: goto label_3dee34;
        case 0x3dee38u: goto label_3dee38;
        case 0x3dee3cu: goto label_3dee3c;
        case 0x3dee40u: goto label_3dee40;
        case 0x3dee44u: goto label_3dee44;
        case 0x3dee48u: goto label_3dee48;
        case 0x3dee4cu: goto label_3dee4c;
        case 0x3dee50u: goto label_3dee50;
        case 0x3dee54u: goto label_3dee54;
        case 0x3dee58u: goto label_3dee58;
        case 0x3dee5cu: goto label_3dee5c;
        case 0x3dee60u: goto label_3dee60;
        case 0x3dee64u: goto label_3dee64;
        case 0x3dee68u: goto label_3dee68;
        case 0x3dee6cu: goto label_3dee6c;
        case 0x3dee70u: goto label_3dee70;
        case 0x3dee74u: goto label_3dee74;
        case 0x3dee78u: goto label_3dee78;
        case 0x3dee7cu: goto label_3dee7c;
        case 0x3dee80u: goto label_3dee80;
        case 0x3dee84u: goto label_3dee84;
        case 0x3dee88u: goto label_3dee88;
        case 0x3dee8cu: goto label_3dee8c;
        case 0x3dee90u: goto label_3dee90;
        case 0x3dee94u: goto label_3dee94;
        case 0x3dee98u: goto label_3dee98;
        case 0x3dee9cu: goto label_3dee9c;
        case 0x3deea0u: goto label_3deea0;
        case 0x3deea4u: goto label_3deea4;
        case 0x3deea8u: goto label_3deea8;
        case 0x3deeacu: goto label_3deeac;
        case 0x3deeb0u: goto label_3deeb0;
        case 0x3deeb4u: goto label_3deeb4;
        case 0x3deeb8u: goto label_3deeb8;
        case 0x3deebcu: goto label_3deebc;
        case 0x3deec0u: goto label_3deec0;
        case 0x3deec4u: goto label_3deec4;
        case 0x3deec8u: goto label_3deec8;
        case 0x3deeccu: goto label_3deecc;
        case 0x3deed0u: goto label_3deed0;
        case 0x3deed4u: goto label_3deed4;
        case 0x3deed8u: goto label_3deed8;
        case 0x3deedcu: goto label_3deedc;
        case 0x3deee0u: goto label_3deee0;
        case 0x3deee4u: goto label_3deee4;
        case 0x3deee8u: goto label_3deee8;
        case 0x3deeecu: goto label_3deeec;
        default: break;
    }

    ctx->pc = 0x3ded88u;

label_3ded88:
    // 0x3ded88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ded88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ded8c:
    // 0x3ded8c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3ded8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3ded90:
    // 0x3ded90: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3ded90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3ded94:
    // 0x3ded94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ded94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ded98:
    // 0x3ded98: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3ded98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3ded9c:
    // 0x3ded9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ded9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3deda0:
    // 0x3deda0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3deda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3deda4:
    // 0x3deda4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3deda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3deda8:
    // 0x3deda8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3deda8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dedac:
    // 0x3dedac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dedacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dedb0:
    // 0x3dedb0: 0x40f809  jalr        $v0
label_3dedb4:
    if (ctx->pc == 0x3DEDB4u) {
        ctx->pc = 0x3DEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDB0u;
        // 0x3dedb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEDB8u;
        goto label_3dedb8;
    }
    ctx->pc = 0x3DEDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DEDB8u);
        ctx->pc = 0x3DEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDB0u;
        // 0x3dedb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEDB0u, 0x3DEDB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DEDB8u;
label_3dedb8:
    // 0x3dedb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dedb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dedbc:
    // 0x3dedbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dedbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dedc0:
    // 0x3dedc0: 0xc0e858c  jal         func_3A1630
label_3dedc4:
    if (ctx->pc == 0x3DEDC4u) {
        ctx->pc = 0x3DEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDC0u;
        // 0x3dedc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEDC8u;
        goto label_3dedc8;
    }
    ctx->pc = 0x3DEDC0u;
    SET_GPR_U32(ctx, 31, 0x3DEDC8u);
    ctx->pc = 0x3DEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEDC0u;
    // 0x3dedc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DEDC0u, 0x3DEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEDC8u;
label_3dedc8:
    // 0x3dedc8: 0x3c021040  lui         $v0, 0x1040
    ctx->pc = 0x3dedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4160 << 16));
label_3dedcc:
    // 0x3dedcc: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3dedccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3dedd0:
    // 0x3dedd0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3dedd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3dedd4:
    // 0x3dedd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dedd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dedd8:
    // 0x3dedd8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3dedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3deddc:
    // 0x3deddc: 0xc0ea12a  jal         func_3A84A8
label_3dede0:
    if (ctx->pc == 0x3DEDE0u) {
        ctx->pc = 0x3DEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDDCu;
        // 0x3dede0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEDE4u;
        goto label_3dede4;
    }
    ctx->pc = 0x3DEDDCu;
    SET_GPR_U32(ctx, 31, 0x3DEDE4u);
    ctx->pc = 0x3DEDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEDDCu;
    // 0x3dede0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DEDDCu, 0x3DEDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEDE4u;
label_3dede4:
    // 0x3dede4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dede4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dede8:
    // 0x3dede8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dedec:
    // 0x3dedec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dedecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dedf0:
    // 0x3dedf0: 0xc0ea12a  jal         func_3A84A8
label_3dedf4:
    if (ctx->pc == 0x3DEDF4u) {
        ctx->pc = 0x3DEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDF0u;
        // 0x3dedf4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEDF8u;
        goto label_3dedf8;
    }
    ctx->pc = 0x3DEDF0u;
    SET_GPR_U32(ctx, 31, 0x3DEDF8u);
    ctx->pc = 0x3DEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEDF0u;
    // 0x3dedf4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DEDF0u, 0x3DEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEDF8u;
label_3dedf8:
    // 0x3dedf8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3dedf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dedfc:
    // 0x3dedfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3dedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3dee00:
    // 0x3dee00: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3dee00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3dee04:
    // 0x3dee04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dee04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dee08:
    // 0x3dee08: 0xc1073cc  jal         func_41CF30
label_3dee0c:
    if (ctx->pc == 0x3DEE0Cu) {
        ctx->pc = 0x3DEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE08u;
        // 0x3dee0c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEE10u;
        goto label_3dee10;
    }
    ctx->pc = 0x3DEE08u;
    SET_GPR_U32(ctx, 31, 0x3DEE10u);
    ctx->pc = 0x3DEE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE08u;
    // 0x3dee0c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3DEE08u, 0x3DEE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE10u;
label_3dee10:
    // 0x3dee10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3dee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3dee14:
    // 0x3dee14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3dee18:
    if (ctx->pc == 0x3DEE18u) {
        ctx->pc = 0x3DEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE14u;
        // 0x3dee18: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEE1Cu;
        goto label_3dee1c;
    }
    ctx->pc = 0x3DEE14u;
    {
        const bool branch_taken_0x3dee14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE14u;
        // 0x3dee18: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dee14) {
            ctx->pc = 0x3DEE34u;
            goto label_3dee34;
        }
    }
    ctx->pc = 0x3DEE1Cu;
label_3dee1c:
    // 0x3dee1c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3dee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3dee20:
    // 0x3dee20: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3dee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3dee24:
    // 0x3dee24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3dee24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3dee28:
    // 0x3dee28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3dee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3dee2c:
    // 0x3dee2c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dee30:
    // 0x3dee30: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3dee30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dee34:
    // 0x3dee34: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3dee34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3dee38:
    // 0x3dee38: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3dee38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3dee3c:
    // 0x3dee3c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3dee3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3dee40:
    // 0x3dee40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3dee40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3dee44:
    // 0x3dee44: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3dee44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dee48:
    // 0x3dee48: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3dee48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3dee4c:
    // 0x3dee4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3dee4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3dee50:
    // 0x3dee50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dee50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dee54:
    // 0x3dee54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dee54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dee58:
    // 0x3dee58: 0xc0cd518  jal         func_335460
label_3dee5c:
    if (ctx->pc == 0x3DEE5Cu) {
        ctx->pc = 0x3DEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE58u;
        // 0x3dee5c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEE60u;
        goto label_3dee60;
    }
    ctx->pc = 0x3DEE58u;
    SET_GPR_U32(ctx, 31, 0x3DEE60u);
    ctx->pc = 0x3DEE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE58u;
    // 0x3dee5c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DEE58u, 0x3DEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE60u;
label_3dee60:
    // 0x3dee60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3dee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3dee64:
    // 0x3dee64: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3dee64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3dee68:
    // 0x3dee68: 0xc136b24  jal         func_4DAC90
label_3dee6c:
    if (ctx->pc == 0x3DEE6Cu) {
        ctx->pc = 0x3DEE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE68u;
        // 0x3dee6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEE70u;
        goto label_3dee70;
    }
    ctx->pc = 0x3DEE68u;
    SET_GPR_U32(ctx, 31, 0x3DEE70u);
    ctx->pc = 0x3DEE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE68u;
    // 0x3dee6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DEE68u, 0x3DEE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE70u;
label_3dee70:
    // 0x3dee70: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3dee70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dee74:
    // 0x3dee74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dee74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dee78:
    // 0x3dee78: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x3dee78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_3dee7c:
    // 0x3dee7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3dee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dee80:
    // 0x3dee80: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3dee80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3dee84:
    // 0x3dee84: 0xc0cd4ee  jal         func_3353B8
label_3dee88:
    if (ctx->pc == 0x3DEE88u) {
        ctx->pc = 0x3DEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE84u;
        // 0x3dee88: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEE8Cu;
        goto label_3dee8c;
    }
    ctx->pc = 0x3DEE84u;
    SET_GPR_U32(ctx, 31, 0x3DEE8Cu);
    ctx->pc = 0x3DEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE84u;
    // 0x3dee88: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DEE84u, 0x3DEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE8Cu;
label_3dee8c:
    // 0x3dee8c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3dee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3dee90:
    // 0x3dee90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dee90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dee94:
    // 0x3dee94: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x3dee94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_3dee98:
    // 0x3dee98: 0xc0e9404  jal         func_3A5010
label_3dee9c:
    if (ctx->pc == 0x3DEE9Cu) {
        ctx->pc = 0x3DEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE98u;
        // 0x3dee9c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEEA0u;
        goto label_3deea0;
    }
    ctx->pc = 0x3DEE98u;
    SET_GPR_U32(ctx, 31, 0x3DEEA0u);
    ctx->pc = 0x3DEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE98u;
    // 0x3dee9c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DEE98u, 0x3DEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEEA0u;
label_3deea0:
    // 0x3deea0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3deea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3deea4:
    // 0x3deea4: 0x3c02a4a4  lui         $v0, 0xA4A4
    ctx->pc = 0x3deea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42148 << 16));
label_3deea8:
    // 0x3deea8: 0x3442a4ff  ori         $v0, $v0, 0xA4FF
    ctx->pc = 0x3deea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42239);
label_3deeac:
    // 0x3deeac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3deeacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3deeb0:
    // 0x3deeb0: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x3deeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
label_3deeb4:
    // 0x3deeb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3deeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3deeb8:
    // 0x3deeb8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3deeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3deebc:
    // 0x3deebc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3deebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3deec0:
    // 0x3deec0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3deec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3deec4:
    // 0x3deec4: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3deec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3deec8:
    // 0x3deec8: 0xc0cd518  jal         func_335460
label_3deecc:
    if (ctx->pc == 0x3DEECCu) {
        ctx->pc = 0x3DEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEEC8u;
        // 0x3deecc: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEED0u;
        goto label_3deed0;
    }
    ctx->pc = 0x3DEEC8u;
    SET_GPR_U32(ctx, 31, 0x3DEED0u);
    ctx->pc = 0x3DEECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEEC8u;
    // 0x3deecc: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DEEC8u, 0x3DEED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEED0u;
label_3deed0:
    // 0x3deed0: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3deed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3deed4:
    // 0x3deed4: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x3deed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3deed8:
    // 0x3deed8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3deed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3deedc:
    // 0x3deedc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3deedcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3deee0:
    // 0x3deee0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3deee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3deee4:
    // 0x3deee4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3deee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3deee8:
    // 0x3deee8: 0x3e00008  jr          $ra
label_3deeec:
    if (ctx->pc == 0x3DEEECu) {
        ctx->pc = 0x3DEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEEE8u;
        // 0x3deeec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEEF0u;
        goto label_fallthrough_0x3deee8;
    }
    ctx->pc = 0x3DEEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEEE8u;
        // 0x3deeec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3deee8:
    ctx->pc = 0x3DEEF0u;
}
