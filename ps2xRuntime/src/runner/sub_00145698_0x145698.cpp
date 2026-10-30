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

// Function: sub_00145698
// Address: 0x145698 - 0x145780
void sub_00145698_0x145698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145698_0x145698");
#endif

    switch (ctx->pc) {
        case 0x145698u: goto label_145698;
        case 0x14569cu: goto label_14569c;
        case 0x1456a0u: goto label_1456a0;
        case 0x1456a4u: goto label_1456a4;
        case 0x1456a8u: goto label_1456a8;
        case 0x1456acu: goto label_1456ac;
        case 0x1456b0u: goto label_1456b0;
        case 0x1456b4u: goto label_1456b4;
        case 0x1456b8u: goto label_1456b8;
        case 0x1456bcu: goto label_1456bc;
        case 0x1456c0u: goto label_1456c0;
        case 0x1456c4u: goto label_1456c4;
        case 0x1456c8u: goto label_1456c8;
        case 0x1456ccu: goto label_1456cc;
        case 0x1456d0u: goto label_1456d0;
        case 0x1456d4u: goto label_1456d4;
        case 0x1456d8u: goto label_1456d8;
        case 0x1456dcu: goto label_1456dc;
        case 0x1456e0u: goto label_1456e0;
        case 0x1456e4u: goto label_1456e4;
        case 0x1456e8u: goto label_1456e8;
        case 0x1456ecu: goto label_1456ec;
        case 0x1456f0u: goto label_1456f0;
        case 0x1456f4u: goto label_1456f4;
        case 0x1456f8u: goto label_1456f8;
        case 0x1456fcu: goto label_1456fc;
        case 0x145700u: goto label_145700;
        case 0x145704u: goto label_145704;
        case 0x145708u: goto label_145708;
        case 0x14570cu: goto label_14570c;
        case 0x145710u: goto label_145710;
        case 0x145714u: goto label_145714;
        case 0x145718u: goto label_145718;
        case 0x14571cu: goto label_14571c;
        case 0x145720u: goto label_145720;
        case 0x145724u: goto label_145724;
        case 0x145728u: goto label_145728;
        case 0x14572cu: goto label_14572c;
        case 0x145730u: goto label_145730;
        case 0x145734u: goto label_145734;
        case 0x145738u: goto label_145738;
        case 0x14573cu: goto label_14573c;
        case 0x145740u: goto label_145740;
        case 0x145744u: goto label_145744;
        case 0x145748u: goto label_145748;
        case 0x14574cu: goto label_14574c;
        case 0x145750u: goto label_145750;
        case 0x145754u: goto label_145754;
        case 0x145758u: goto label_145758;
        case 0x14575cu: goto label_14575c;
        case 0x145760u: goto label_145760;
        case 0x145764u: goto label_145764;
        case 0x145768u: goto label_145768;
        case 0x14576cu: goto label_14576c;
        case 0x145770u: goto label_145770;
        case 0x145774u: goto label_145774;
        case 0x145778u: goto label_145778;
        case 0x14577cu: goto label_14577c;
        default: break;
    }

    ctx->pc = 0x145698u;

label_145698:
    // 0x145698: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x145698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_14569c:
    // 0x14569c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1456a0:
    // 0x1456a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1456a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1456a4:
    // 0x1456a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1456a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1456a8:
    // 0x1456a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1456a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1456ac:
    // 0x1456ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1456acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1456b0:
    // 0x1456b0: 0x11902b  sltu        $s2, $zero, $s1
    ctx->pc = 0x1456b0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1456b4:
    // 0x1456b4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1456b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1456b8:
    // 0x1456b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1456b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1456bc:
    // 0x1456bc: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1456bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1456c0:
    // 0x1456c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1456c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1456c4:
    // 0x1456c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1456c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1456c8:
    // 0x1456c8: 0xc06ba26  jal         func_1AE898
label_1456cc:
    if (ctx->pc == 0x1456CCu) {
        ctx->pc = 0x1456CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456C8u;
        // 0x1456cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1456D0u;
        goto label_1456d0;
    }
    ctx->pc = 0x1456C8u;
    SET_GPR_U32(ctx, 31, 0x1456D0u);
    ctx->pc = 0x1456CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1456C8u;
    // 0x1456cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1456C8u, 0x1456D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456D0u;
label_1456d0:
    // 0x1456d0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1456d4:
    if (ctx->pc == 0x1456D4u) {
        ctx->pc = 0x1456D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456D0u;
        // 0x1456d4: 0x119180  sll         $s2, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1456D8u;
        goto label_1456d8;
    }
    ctx->pc = 0x1456D0u;
    {
        const bool branch_taken_0x1456d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1456d0) {
            ctx->pc = 0x1456D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1456D0u;
            // 0x1456d4: 0x119180  sll         $s2, $s1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145708u;
            goto label_145708;
        }
    }
    ctx->pc = 0x1456D8u;
label_1456d8:
    // 0x1456d8: 0x80450019  lb          $a1, 0x19($v0)
    ctx->pc = 0x1456d8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_1456dc:
    // 0x1456dc: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x1456dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1456e0:
    // 0x1456e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1456e4:
    if (ctx->pc == 0x1456E4u) {
        ctx->pc = 0x1456E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456E0u;
        // 0x1456e4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1456E8u;
        goto label_1456e8;
    }
    ctx->pc = 0x1456E0u;
    {
        const bool branch_taken_0x1456e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1456E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456E0u;
        // 0x1456e4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456e0) {
            ctx->pc = 0x145704u;
            goto label_145704;
        }
    }
    ctx->pc = 0x1456E8u;
label_1456e8:
    // 0x1456e8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1456e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_1456ec:
    // 0x1456ec: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1456ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1456f0:
    // 0x1456f0: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x1456f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_1456f4:
    // 0x1456f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1456f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1456f8:
    // 0x1456f8: 0x84820042  lh          $v0, 0x42($a0)
    ctx->pc = 0x1456f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
label_1456fc:
    // 0x1456fc: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1456fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_145700:
    // 0x145700: 0xa2880a  movz        $s1, $a1, $v0
    ctx->pc = 0x145700u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_145704:
    // 0x145704: 0x119180  sll         $s2, $s1, 6
    ctx->pc = 0x145704u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_145708:
    // 0x145708: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_14570c:
    if (ctx->pc == 0x14570Cu) {
        ctx->pc = 0x14570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145708u;
        // 0x14570c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145710u;
        goto label_145710;
    }
    ctx->pc = 0x145708u;
    {
        const bool branch_taken_0x145708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145708u;
        // 0x14570c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145708) {
            ctx->pc = 0x14572Cu;
            goto label_14572c;
        }
    }
    ctx->pc = 0x145710u;
label_145710:
    // 0x145710: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x145710u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_145714:
    // 0x145714: 0x0  nop
    ctx->pc = 0x145714u;
    // NOP
label_145718:
    // 0x145718: 0x0  nop
    ctx->pc = 0x145718u;
    // NOP
label_14571c:
    // 0x14571c: 0x0  nop
    ctx->pc = 0x14571cu;
    // NOP
label_145720:
    // 0x145720: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_145724:
    if (ctx->pc == 0x145724u) {
        ctx->pc = 0x145724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145720u;
        // 0x145724: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145728u;
        goto label_145728;
    }
    ctx->pc = 0x145720u;
    {
        const bool branch_taken_0x145720 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x145724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145720u;
        // 0x145724: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145720) {
            ctx->pc = 0x145710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145710;
        }
    }
    ctx->pc = 0x145728u;
label_145728:
    // 0x145728: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x145728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_14572c:
    // 0x14572c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_145730:
    // 0x145730: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x145730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145734:
    // 0x145734: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x145734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_145738:
    // 0x145738: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x145738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14573c:
    // 0x14573c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x14573cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_145740:
    // 0x145740: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x145740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_145744:
    // 0x145744: 0x40f809  jalr        $v0
label_145748:
    if (ctx->pc == 0x145748u) {
        ctx->pc = 0x145748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145744u;
        // 0x145748: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14574Cu;
        goto label_14574c;
    }
    ctx->pc = 0x145744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14574Cu);
        ctx->pc = 0x145748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145744u;
        // 0x145748: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145744u, 0x14574Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14574Cu;
label_14574c:
    // 0x14574c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14574cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_145750:
    // 0x145750: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x145750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_145754:
    // 0x145754: 0x2463da90  addiu       $v1, $v1, -0x2570
    ctx->pc = 0x145754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957712));
label_145758:
    // 0x145758: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x145758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_14575c:
    // 0x14575c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_145760:
    // 0x145760: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x145760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_145764:
    // 0x145764: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x145764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_145768:
    // 0x145768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14576c:
    // 0x14576c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14576cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_145770:
    // 0x145770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145774:
    // 0x145774: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x145774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_145778:
    // 0x145778: 0x3e00008  jr          $ra
label_14577c:
    if (ctx->pc == 0x14577Cu) {
        ctx->pc = 0x14577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145778u;
        // 0x14577c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145780u;
        goto label_fallthrough_0x145778;
    }
    ctx->pc = 0x145778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145778u;
        // 0x14577c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x145778:
    ctx->pc = 0x145780u;
}
