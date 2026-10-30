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

// Function: sub_004CC898
// Address: 0x4cc898 - 0x4ccae8
void sub_004CC898_0x4cc898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC898_0x4cc898");
#endif

    switch (ctx->pc) {
        case 0x4cc898u: goto label_4cc898;
        case 0x4cc89cu: goto label_4cc89c;
        case 0x4cc8a0u: goto label_4cc8a0;
        case 0x4cc8a4u: goto label_4cc8a4;
        case 0x4cc8a8u: goto label_4cc8a8;
        case 0x4cc8acu: goto label_4cc8ac;
        case 0x4cc8b0u: goto label_4cc8b0;
        case 0x4cc8b4u: goto label_4cc8b4;
        case 0x4cc8b8u: goto label_4cc8b8;
        case 0x4cc8bcu: goto label_4cc8bc;
        case 0x4cc8c0u: goto label_4cc8c0;
        case 0x4cc8c4u: goto label_4cc8c4;
        case 0x4cc8c8u: goto label_4cc8c8;
        case 0x4cc8ccu: goto label_4cc8cc;
        case 0x4cc8d0u: goto label_4cc8d0;
        case 0x4cc8d4u: goto label_4cc8d4;
        case 0x4cc8d8u: goto label_4cc8d8;
        case 0x4cc8dcu: goto label_4cc8dc;
        case 0x4cc8e0u: goto label_4cc8e0;
        case 0x4cc8e4u: goto label_4cc8e4;
        case 0x4cc8e8u: goto label_4cc8e8;
        case 0x4cc8ecu: goto label_4cc8ec;
        case 0x4cc8f0u: goto label_4cc8f0;
        case 0x4cc8f4u: goto label_4cc8f4;
        case 0x4cc8f8u: goto label_4cc8f8;
        case 0x4cc8fcu: goto label_4cc8fc;
        case 0x4cc900u: goto label_4cc900;
        case 0x4cc904u: goto label_4cc904;
        case 0x4cc908u: goto label_4cc908;
        case 0x4cc90cu: goto label_4cc90c;
        case 0x4cc910u: goto label_4cc910;
        case 0x4cc914u: goto label_4cc914;
        case 0x4cc918u: goto label_4cc918;
        case 0x4cc91cu: goto label_4cc91c;
        case 0x4cc920u: goto label_4cc920;
        case 0x4cc924u: goto label_4cc924;
        case 0x4cc928u: goto label_4cc928;
        case 0x4cc92cu: goto label_4cc92c;
        case 0x4cc930u: goto label_4cc930;
        case 0x4cc934u: goto label_4cc934;
        case 0x4cc938u: goto label_4cc938;
        case 0x4cc93cu: goto label_4cc93c;
        case 0x4cc940u: goto label_4cc940;
        case 0x4cc944u: goto label_4cc944;
        case 0x4cc948u: goto label_4cc948;
        case 0x4cc94cu: goto label_4cc94c;
        case 0x4cc950u: goto label_4cc950;
        case 0x4cc954u: goto label_4cc954;
        case 0x4cc958u: goto label_4cc958;
        case 0x4cc95cu: goto label_4cc95c;
        case 0x4cc960u: goto label_4cc960;
        case 0x4cc964u: goto label_4cc964;
        case 0x4cc968u: goto label_4cc968;
        case 0x4cc96cu: goto label_4cc96c;
        case 0x4cc970u: goto label_4cc970;
        case 0x4cc974u: goto label_4cc974;
        case 0x4cc978u: goto label_4cc978;
        case 0x4cc97cu: goto label_4cc97c;
        case 0x4cc980u: goto label_4cc980;
        case 0x4cc984u: goto label_4cc984;
        case 0x4cc988u: goto label_4cc988;
        case 0x4cc98cu: goto label_4cc98c;
        case 0x4cc990u: goto label_4cc990;
        case 0x4cc994u: goto label_4cc994;
        case 0x4cc998u: goto label_4cc998;
        case 0x4cc99cu: goto label_4cc99c;
        case 0x4cc9a0u: goto label_4cc9a0;
        case 0x4cc9a4u: goto label_4cc9a4;
        case 0x4cc9a8u: goto label_4cc9a8;
        case 0x4cc9acu: goto label_4cc9ac;
        case 0x4cc9b0u: goto label_4cc9b0;
        case 0x4cc9b4u: goto label_4cc9b4;
        case 0x4cc9b8u: goto label_4cc9b8;
        case 0x4cc9bcu: goto label_4cc9bc;
        case 0x4cc9c0u: goto label_4cc9c0;
        case 0x4cc9c4u: goto label_4cc9c4;
        case 0x4cc9c8u: goto label_4cc9c8;
        case 0x4cc9ccu: goto label_4cc9cc;
        case 0x4cc9d0u: goto label_4cc9d0;
        case 0x4cc9d4u: goto label_4cc9d4;
        case 0x4cc9d8u: goto label_4cc9d8;
        case 0x4cc9dcu: goto label_4cc9dc;
        case 0x4cc9e0u: goto label_4cc9e0;
        case 0x4cc9e4u: goto label_4cc9e4;
        case 0x4cc9e8u: goto label_4cc9e8;
        case 0x4cc9ecu: goto label_4cc9ec;
        case 0x4cc9f0u: goto label_4cc9f0;
        case 0x4cc9f4u: goto label_4cc9f4;
        case 0x4cc9f8u: goto label_4cc9f8;
        case 0x4cc9fcu: goto label_4cc9fc;
        case 0x4cca00u: goto label_4cca00;
        case 0x4cca04u: goto label_4cca04;
        case 0x4cca08u: goto label_4cca08;
        case 0x4cca0cu: goto label_4cca0c;
        case 0x4cca10u: goto label_4cca10;
        case 0x4cca14u: goto label_4cca14;
        case 0x4cca18u: goto label_4cca18;
        case 0x4cca1cu: goto label_4cca1c;
        case 0x4cca20u: goto label_4cca20;
        case 0x4cca24u: goto label_4cca24;
        case 0x4cca28u: goto label_4cca28;
        case 0x4cca2cu: goto label_4cca2c;
        case 0x4cca30u: goto label_4cca30;
        case 0x4cca34u: goto label_4cca34;
        case 0x4cca38u: goto label_4cca38;
        case 0x4cca3cu: goto label_4cca3c;
        case 0x4cca40u: goto label_4cca40;
        case 0x4cca44u: goto label_4cca44;
        case 0x4cca48u: goto label_4cca48;
        case 0x4cca4cu: goto label_4cca4c;
        case 0x4cca50u: goto label_4cca50;
        case 0x4cca54u: goto label_4cca54;
        case 0x4cca58u: goto label_4cca58;
        case 0x4cca5cu: goto label_4cca5c;
        case 0x4cca60u: goto label_4cca60;
        case 0x4cca64u: goto label_4cca64;
        case 0x4cca68u: goto label_4cca68;
        case 0x4cca6cu: goto label_4cca6c;
        case 0x4cca70u: goto label_4cca70;
        case 0x4cca74u: goto label_4cca74;
        case 0x4cca78u: goto label_4cca78;
        case 0x4cca7cu: goto label_4cca7c;
        case 0x4cca80u: goto label_4cca80;
        case 0x4cca84u: goto label_4cca84;
        case 0x4cca88u: goto label_4cca88;
        case 0x4cca8cu: goto label_4cca8c;
        case 0x4cca90u: goto label_4cca90;
        case 0x4cca94u: goto label_4cca94;
        case 0x4cca98u: goto label_4cca98;
        case 0x4cca9cu: goto label_4cca9c;
        case 0x4ccaa0u: goto label_4ccaa0;
        case 0x4ccaa4u: goto label_4ccaa4;
        case 0x4ccaa8u: goto label_4ccaa8;
        case 0x4ccaacu: goto label_4ccaac;
        case 0x4ccab0u: goto label_4ccab0;
        case 0x4ccab4u: goto label_4ccab4;
        case 0x4ccab8u: goto label_4ccab8;
        case 0x4ccabcu: goto label_4ccabc;
        case 0x4ccac0u: goto label_4ccac0;
        case 0x4ccac4u: goto label_4ccac4;
        case 0x4ccac8u: goto label_4ccac8;
        case 0x4ccaccu: goto label_4ccacc;
        case 0x4ccad0u: goto label_4ccad0;
        case 0x4ccad4u: goto label_4ccad4;
        case 0x4ccad8u: goto label_4ccad8;
        case 0x4ccadcu: goto label_4ccadc;
        case 0x4ccae0u: goto label_4ccae0;
        case 0x4ccae4u: goto label_4ccae4;
        default: break;
    }

    ctx->pc = 0x4cc898u;

label_4cc898:
    // 0x4cc898: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cc898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4cc89c:
    // 0x4cc89c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cc89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4cc8a0:
    // 0x4cc8a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cc8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4cc8a4:
    // 0x4cc8a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cc8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4cc8a8:
    // 0x4cc8a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4cc8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cc8ac:
    // 0x4cc8ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cc8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4cc8b0:
    // 0x4cc8b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4cc8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cc8b4:
    // 0x4cc8b4: 0x8c433960  lw          $v1, 0x3960($v0)
    ctx->pc = 0x4cc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14688)));
label_4cc8b8:
    // 0x4cc8b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4cc8b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cc8bc:
    // 0x4cc8bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cc8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4cc8c0:
    // 0x4cc8c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cc8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4cc8c4:
    // 0x4cc8c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cc8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4cc8c8:
    // 0x4cc8c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cc8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4cc8cc:
    // 0x4cc8cc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cc8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4cc8d0:
    // 0x4cc8d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_4cc8d4:
    if (ctx->pc == 0x4CC8D4u) {
        ctx->pc = 0x4CC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC8D0u;
        // 0x4cc8d4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC8D8u;
        goto label_4cc8d8;
    }
    ctx->pc = 0x4CC8D0u;
    {
        const bool branch_taken_0x4cc8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC8D0u;
        // 0x4cc8d4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc8d0) {
            ctx->pc = 0x4CC8E0u;
            goto label_4cc8e0;
        }
    }
    ctx->pc = 0x4CC8D8u;
label_4cc8d8:
    // 0x4cc8d8: 0x10000078  b           . + 4 + (0x78 << 2)
label_4cc8dc:
    if (ctx->pc == 0x4CC8DCu) {
        ctx->pc = 0x4CC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC8D8u;
        // 0x4cc8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC8E0u;
        goto label_4cc8e0;
    }
    ctx->pc = 0x4CC8D8u;
    {
        const bool branch_taken_0x4cc8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC8D8u;
        // 0x4cc8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc8d8) {
            ctx->pc = 0x4CCABCu;
            goto label_4ccabc;
        }
    }
    ctx->pc = 0x4CC8E0u;
label_4cc8e0:
    // 0x4cc8e0: 0xc110cb0  jal         func_4432C0
label_4cc8e4:
    if (ctx->pc == 0x4CC8E4u) {
        ctx->pc = 0x4CC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC8E0u;
        // 0x4cc8e4: 0x3c170071  lui         $s7, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC8E8u;
        goto label_4cc8e8;
    }
    ctx->pc = 0x4CC8E0u;
    SET_GPR_U32(ctx, 31, 0x4CC8E8u);
    ctx->pc = 0x4CC8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC8E0u;
    // 0x4cc8e4: 0x3c170071  lui         $s7, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CC8E0u, 0x4CC8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC8E8u;
label_4cc8e8:
    // 0x4cc8e8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4cc8e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc8ec:
    // 0x4cc8ec: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cc8f0:
    // 0x4cc8f0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cc8f4:
    // 0x4cc8f4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4cc8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4cc8f8:
    // 0x4cc8f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4cc8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc8fc:
    // 0x4cc8fc: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x4cc8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_4cc900:
    // 0x4cc900: 0x244246d8  addiu       $v0, $v0, 0x46D8
    ctx->pc = 0x4cc900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18136));
label_4cc904:
    // 0x4cc904: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x4cc904u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_4cc908:
    // 0x4cc908: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x4cc908u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4cc90c:
    // 0x4cc90c: 0x246346b8  addiu       $v1, $v1, 0x46B8
    ctx->pc = 0x4cc90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18104));
label_4cc910:
    // 0x4cc910: 0x1243000c  beq         $s2, $v1, . + 4 + (0xC << 2)
label_4cc914:
    if (ctx->pc == 0x4CC914u) {
        ctx->pc = 0x4CC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC910u;
        // 0x4cc914: 0x3c160071  lui         $s6, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC918u;
        goto label_4cc918;
    }
    ctx->pc = 0x4CC910u;
    {
        const bool branch_taken_0x4cc910 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x4CC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC910u;
        // 0x4cc914: 0x3c160071  lui         $s6, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc910) {
            ctx->pc = 0x4CC944u;
            goto label_4cc944;
        }
    }
    ctx->pc = 0x4CC918u;
label_4cc918:
    // 0x4cc918: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4cc918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cc91c:
    // 0x4cc91c: 0x0  nop
    ctx->pc = 0x4cc91cu;
    // NOP
label_4cc920:
    // 0x4cc920: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4cc920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4cc924:
    // 0x4cc924: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4cc924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_4cc928:
    // 0x4cc928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4cc92c:
    if (ctx->pc == 0x4CC92Cu) {
        ctx->pc = 0x4CC930u;
        goto label_4cc930;
    }
    ctx->pc = 0x4CC928u;
    {
        const bool branch_taken_0x4cc928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc928) {
            ctx->pc = 0x4CC938u;
            goto label_4cc938;
        }
    }
    ctx->pc = 0x4CC930u;
label_4cc930:
    // 0x4cc930: 0xae50001c  sw          $s0, 0x1C($s2)
    ctx->pc = 0x4cc930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 16));
label_4cc934:
    // 0x4cc934: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x4cc934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cc938:
    // 0x4cc938: 0x8e520018  lw          $s2, 0x18($s2)
    ctx->pc = 0x4cc938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4cc93c:
    // 0x4cc93c: 0x1643fff8  bne         $s2, $v1, . + 4 + (-0x8 << 2)
label_4cc940:
    if (ctx->pc == 0x4CC940u) {
        ctx->pc = 0x4CC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC93Cu;
        // 0x4cc940: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC944u;
        goto label_4cc944;
    }
    ctx->pc = 0x4CC93Cu;
    {
        const bool branch_taken_0x4cc93c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x4CC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC93Cu;
        // 0x4cc940: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc93c) {
            ctx->pc = 0x4CC920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc920;
        }
    }
    ctx->pc = 0x4CC944u;
label_4cc944:
    // 0x4cc944: 0x24a246b8  addiu       $v0, $a1, 0x46B8
    ctx->pc = 0x4cc944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 18104));
label_4cc948:
    // 0x4cc948: 0x24c346d8  addiu       $v1, $a2, 0x46D8
    ctx->pc = 0x4cc948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 18136));
label_4cc94c:
    // 0x4cc94c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x4cc94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_4cc950:
    // 0x4cc950: 0x25044720  addiu       $a0, $t0, 0x4720
    ctx->pc = 0x4cc950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 18208));
label_4cc954:
    // 0x4cc954: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x4cc954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_4cc958:
    // 0x4cc958: 0x24e246f8  addiu       $v0, $a3, 0x46F8
    ctx->pc = 0x4cc958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18168));
label_4cc95c:
    // 0x4cc95c: 0x8c910020  lw          $s1, 0x20($a0)
    ctx->pc = 0x4cc95cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_4cc960:
    // 0x4cc960: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
label_4cc964:
    if (ctx->pc == 0x4CC964u) {
        ctx->pc = 0x4CC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC960u;
        // 0x4cc964: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC968u;
        goto label_4cc968;
    }
    ctx->pc = 0x4CC960u;
    {
        const bool branch_taken_0x4cc960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC960u;
        // 0x4cc964: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc960) {
            ctx->pc = 0x4CC994u;
            goto label_4cc994;
        }
    }
    ctx->pc = 0x4CC968u;
label_4cc968:
    // 0x4cc968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4cc968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc96c:
    // 0x4cc96c: 0x0  nop
    ctx->pc = 0x4cc96cu;
    // NOP
label_4cc970:
    // 0x4cc970: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x4cc970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_4cc974:
    // 0x4cc974: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cc974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4cc978:
    // 0x4cc978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4cc97c:
    if (ctx->pc == 0x4CC97Cu) {
        ctx->pc = 0x4CC980u;
        goto label_4cc980;
    }
    ctx->pc = 0x4CC978u;
    {
        const bool branch_taken_0x4cc978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc978) {
            ctx->pc = 0x4CC988u;
            goto label_4cc988;
        }
    }
    ctx->pc = 0x4CC980u;
label_4cc980:
    // 0x4cc980: 0xae350024  sw          $s5, 0x24($s1)
    ctx->pc = 0x4cc980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 21));
label_4cc984:
    // 0x4cc984: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x4cc984u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cc988:
    // 0x4cc988: 0x8e310020  lw          $s1, 0x20($s1)
    ctx->pc = 0x4cc988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4cc98c:
    // 0x4cc98c: 0x1624fff8  bne         $s1, $a0, . + 4 + (-0x8 << 2)
label_4cc990:
    if (ctx->pc == 0x4CC990u) {
        ctx->pc = 0x4CC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC98Cu;
        // 0x4cc990: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC994u;
        goto label_4cc994;
    }
    ctx->pc = 0x4CC98Cu;
    {
        const bool branch_taken_0x4cc98c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x4CC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC98Cu;
        // 0x4cc990: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc98c) {
            ctx->pc = 0x4CC970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc970;
        }
    }
    ctx->pc = 0x4CC994u;
label_4cc994:
    // 0x4cc994: 0x24e346f8  addiu       $v1, $a3, 0x46F8
    ctx->pc = 0x4cc994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18168));
label_4cc998:
    // 0x4cc998: 0x25024720  addiu       $v0, $t0, 0x4720
    ctx->pc = 0x4cc998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 18208));
label_4cc99c:
    // 0x4cc99c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x4cc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_4cc9a0:
    // 0x4cc9a0: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x4cc9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_4cc9a4:
    // 0x4cc9a4: 0x8ef247c8  lw          $s2, 0x47C8($s7)
    ctx->pc = 0x4cc9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18376)));
label_4cc9a8:
    // 0x4cc9a8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_4cc9ac:
    if (ctx->pc == 0x4CC9ACu) {
        ctx->pc = 0x4CC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC9A8u;
        // 0x4cc9ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC9B0u;
        goto label_4cc9b0;
    }
    ctx->pc = 0x4CC9A8u;
    {
        const bool branch_taken_0x4cc9a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC9A8u;
        // 0x4cc9ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc9a8) {
            ctx->pc = 0x4CC9B8u;
            goto label_4cc9b8;
        }
    }
    ctx->pc = 0x4CC9B0u;
label_4cc9b0:
    // 0x4cc9b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4cc9b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4cc9b4:
    // 0x4cc9b4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4cc9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4cc9b8:
    // 0x4cc9b8: 0x8ed147cc  lw          $s1, 0x47CC($s6)
    ctx->pc = 0x4cc9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18380)));
label_4cc9bc:
    // 0x4cc9bc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4cc9c0:
    if (ctx->pc == 0x4CC9C0u) {
        ctx->pc = 0x4CC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC9BCu;
        // 0x4cc9c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC9C4u;
        goto label_4cc9c4;
    }
    ctx->pc = 0x4CC9BCu;
    {
        const bool branch_taken_0x4cc9bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC9BCu;
        // 0x4cc9c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc9bc) {
            ctx->pc = 0x4CC9CCu;
            goto label_4cc9cc;
        }
    }
    ctx->pc = 0x4CC9C4u;
label_4cc9c4:
    // 0x4cc9c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4cc9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4cc9c8:
    // 0x4cc9c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cc9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4cc9cc:
    // 0x4cc9cc: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_4cc9d0:
    if (ctx->pc == 0x4CC9D0u) {
        ctx->pc = 0x4CC9D4u;
        goto label_4cc9d4;
    }
    ctx->pc = 0x4CC9CCu;
    {
        const bool branch_taken_0x4cc9cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc9cc) {
            ctx->pc = 0x4CC9DCu;
            goto label_4cc9dc;
        }
    }
    ctx->pc = 0x4CC9D4u;
label_4cc9d4:
    // 0x4cc9d4: 0xc110cc4  jal         func_443310
label_4cc9d8:
    if (ctx->pc == 0x4CC9D8u) {
        ctx->pc = 0x4CC9DCu;
        goto label_4cc9dc;
    }
    ctx->pc = 0x4CC9D4u;
    SET_GPR_U32(ctx, 31, 0x4CC9DCu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CC9D4u, 0x4CC9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC9DCu;
label_4cc9dc:
    // 0x4cc9dc: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4cc9e0:
    if (ctx->pc == 0x4CC9E0u) {
        ctx->pc = 0x4CC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC9DCu;
        // 0x4cc9e0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC9E4u;
        goto label_4cc9e4;
    }
    ctx->pc = 0x4CC9DCu;
    {
        const bool branch_taken_0x4cc9dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc9dc) {
            ctx->pc = 0x4CC9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CC9DCu;
            // 0x4cc9e0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CCA1Cu;
            goto label_4cca1c;
        }
    }
    ctx->pc = 0x4CC9E4u;
label_4cc9e4:
    // 0x4cc9e4: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cc9e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
label_4cc9e8:
    // 0x4cc9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cc9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cc9ec:
    // 0x4cc9ec: 0x0  nop
    ctx->pc = 0x4cc9ecu;
    // NOP
label_4cc9f0:
    // 0x4cc9f0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4cc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4cc9f4:
    // 0x4cc9f4: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x4cc9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4cc9f8:
    // 0x4cc9f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4cc9fc:
    if (ctx->pc == 0x4CC9FCu) {
        ctx->pc = 0x4CC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC9F8u;
        // 0x4cc9fc: 0x8e823964  lw          $v0, 0x3964($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCA00u;
        goto label_4cca00;
    }
    ctx->pc = 0x4CC9F8u;
    {
        const bool branch_taken_0x4cc9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC9F8u;
        // 0x4cc9fc: 0x8e823964  lw          $v0, 0x3964($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc9f8) {
            ctx->pc = 0x4CCA10u;
            goto label_4cca10;
        }
    }
    ctx->pc = 0x4CCA00u;
label_4cca00:
    // 0x4cca00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4cca04:
    if (ctx->pc == 0x4CCA04u) {
        ctx->pc = 0x4CCA08u;
        goto label_4cca08;
    }
    ctx->pc = 0x4CCA00u;
    {
        const bool branch_taken_0x4cca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cca00) {
            ctx->pc = 0x4CCA10u;
            goto label_4cca10;
        }
    }
    ctx->pc = 0x4CCA08u;
label_4cca08:
    // 0x4cca08: 0x60f809  jalr        $v1
label_4cca0c:
    if (ctx->pc == 0x4CCA0Cu) {
        ctx->pc = 0x4CCA10u;
        goto label_4cca10;
    }
    ctx->pc = 0x4CCA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4CCA10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCA08u, 0x4CCA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CCA10u;
label_4cca10:
    // 0x4cca10: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_4cca14:
    if (ctx->pc == 0x4CCA14u) {
        ctx->pc = 0x4CCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA10u;
        // 0x4cca14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCA18u;
        goto label_4cca18;
    }
    ctx->pc = 0x4CCA10u;
    {
        const bool branch_taken_0x4cca10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA10u;
        // 0x4cca14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cca10) {
            ctx->pc = 0x4CC9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc9f0;
        }
    }
    ctx->pc = 0x4CCA18u;
label_4cca18:
    // 0x4cca18: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x4cca18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4cca1c:
    // 0x4cca1c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_4cca20:
    if (ctx->pc == 0x4CCA20u) {
        ctx->pc = 0x4CCA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA1Cu;
        // 0x4cca20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCA24u;
        goto label_4cca24;
    }
    ctx->pc = 0x4CCA1Cu;
    {
        const bool branch_taken_0x4cca1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA1Cu;
        // 0x4cca20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cca1c) {
            ctx->pc = 0x4CCA50u;
            goto label_4cca50;
        }
    }
    ctx->pc = 0x4CCA24u;
label_4cca24:
    // 0x4cca24: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cca24u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
label_4cca28:
    // 0x4cca28: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4cca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4cca2c:
    // 0x4cca2c: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x4cca2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4cca30:
    // 0x4cca30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4cca34:
    if (ctx->pc == 0x4CCA34u) {
        ctx->pc = 0x4CCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA30u;
        // 0x4cca34: 0x8e823964  lw          $v0, 0x3964($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCA38u;
        goto label_4cca38;
    }
    ctx->pc = 0x4CCA30u;
    {
        const bool branch_taken_0x4cca30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA30u;
        // 0x4cca34: 0x8e823964  lw          $v0, 0x3964($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cca30) {
            ctx->pc = 0x4CCA48u;
            goto label_4cca48;
        }
    }
    ctx->pc = 0x4CCA38u;
label_4cca38:
    // 0x4cca38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4cca3c:
    if (ctx->pc == 0x4CCA3Cu) {
        ctx->pc = 0x4CCA40u;
        goto label_4cca40;
    }
    ctx->pc = 0x4CCA38u;
    {
        const bool branch_taken_0x4cca38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cca38) {
            ctx->pc = 0x4CCA48u;
            goto label_4cca48;
        }
    }
    ctx->pc = 0x4CCA40u;
label_4cca40:
    // 0x4cca40: 0x60f809  jalr        $v1
label_4cca44:
    if (ctx->pc == 0x4CCA44u) {
        ctx->pc = 0x4CCA48u;
        goto label_4cca48;
    }
    ctx->pc = 0x4CCA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4CCA48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCA40u, 0x4CCA48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CCA48u;
label_4cca48:
    // 0x4cca48: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_4cca4c:
    if (ctx->pc == 0x4CCA4Cu) {
        ctx->pc = 0x4CCA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA48u;
        // 0x4cca4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCA50u;
        goto label_4cca50;
    }
    ctx->pc = 0x4CCA48u;
    {
        const bool branch_taken_0x4cca48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CCA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA48u;
        // 0x4cca4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cca48) {
            ctx->pc = 0x4CCA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cca28;
        }
    }
    ctx->pc = 0x4CCA50u;
label_4cca50:
    // 0x4cca50: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_4cca54:
    if (ctx->pc == 0x4CCA54u) {
        ctx->pc = 0x4CCA58u;
        goto label_4cca58;
    }
    ctx->pc = 0x4CCA50u;
    {
        const bool branch_taken_0x4cca50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cca50) {
            ctx->pc = 0x4CCA84u;
            goto label_4cca84;
        }
    }
    ctx->pc = 0x4CCA58u;
label_4cca58:
    // 0x4cca58: 0x8ee247c8  lw          $v0, 0x47C8($s7)
    ctx->pc = 0x4cca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18376)));
label_4cca5c:
    // 0x4cca5c: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_4cca60:
    if (ctx->pc == 0x4CCA60u) {
        ctx->pc = 0x4CCA64u;
        goto label_4cca64;
    }
    ctx->pc = 0x4CCA5Cu;
    {
        const bool branch_taken_0x4cca5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x4cca5c) {
            ctx->pc = 0x4CCA84u;
            goto label_4cca84;
        }
    }
    ctx->pc = 0x4CCA64u;
label_4cca64:
    // 0x4cca64: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x4cca64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4cca68:
    // 0x4cca68: 0x8c6247c8  lw          $v0, 0x47C8($v1)
    ctx->pc = 0x4cca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18376)));
label_4cca6c:
    // 0x4cca6c: 0x0  nop
    ctx->pc = 0x4cca6cu;
    // NOP
label_4cca70:
    // 0x4cca70: 0x0  nop
    ctx->pc = 0x4cca70u;
    // NOP
label_4cca74:
    // 0x4cca74: 0x0  nop
    ctx->pc = 0x4cca74u;
    // NOP
label_4cca78:
    // 0x4cca78: 0x0  nop
    ctx->pc = 0x4cca78u;
    // NOP
label_4cca7c:
    // 0x4cca7c: 0x1242fffa  beq         $s2, $v0, . + 4 + (-0x6 << 2)
label_4cca80:
    if (ctx->pc == 0x4CCA80u) {
        ctx->pc = 0x4CCA84u;
        goto label_4cca84;
    }
    ctx->pc = 0x4CCA7Cu;
    {
        const bool branch_taken_0x4cca7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cca7c) {
            ctx->pc = 0x4CCA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cca68;
        }
    }
    ctx->pc = 0x4CCA84u;
label_4cca84:
    // 0x4cca84: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_4cca88:
    if (ctx->pc == 0x4CCA88u) {
        ctx->pc = 0x4CCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA84u;
        // 0x4cca88: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCA8Cu;
        goto label_4cca8c;
    }
    ctx->pc = 0x4CCA84u;
    {
        const bool branch_taken_0x4cca84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA84u;
        // 0x4cca88: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cca84) {
            ctx->pc = 0x4CCABCu;
            goto label_4ccabc;
        }
    }
    ctx->pc = 0x4CCA8Cu;
label_4cca8c:
    // 0x4cca8c: 0x8ec247cc  lw          $v0, 0x47CC($s6)
    ctx->pc = 0x4cca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18380)));
label_4cca90:
    // 0x4cca90: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_4cca94:
    if (ctx->pc == 0x4CCA94u) {
        ctx->pc = 0x4CCA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA90u;
        // 0x4cca94: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCA98u;
        goto label_4cca98;
    }
    ctx->pc = 0x4CCA90u;
    {
        const bool branch_taken_0x4cca90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CCA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCA90u;
        // 0x4cca94: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cca90) {
            ctx->pc = 0x4CCABCu;
            goto label_4ccabc;
        }
    }
    ctx->pc = 0x4CCA98u;
label_4cca98:
    // 0x4cca98: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x4cca98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4cca9c:
    // 0x4cca9c: 0x0  nop
    ctx->pc = 0x4cca9cu;
    // NOP
label_4ccaa0:
    // 0x4ccaa0: 0x8c6247cc  lw          $v0, 0x47CC($v1)
    ctx->pc = 0x4ccaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18380)));
label_4ccaa4:
    // 0x4ccaa4: 0x0  nop
    ctx->pc = 0x4ccaa4u;
    // NOP
label_4ccaa8:
    // 0x4ccaa8: 0x0  nop
    ctx->pc = 0x4ccaa8u;
    // NOP
label_4ccaac:
    // 0x4ccaac: 0x0  nop
    ctx->pc = 0x4ccaacu;
    // NOP
label_4ccab0:
    // 0x4ccab0: 0x0  nop
    ctx->pc = 0x4ccab0u;
    // NOP
label_4ccab4:
    // 0x4ccab4: 0x1222fffa  beq         $s1, $v0, . + 4 + (-0x6 << 2)
label_4ccab8:
    if (ctx->pc == 0x4CCAB8u) {
        ctx->pc = 0x4CCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCAB4u;
        // 0x4ccab8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCABCu;
        goto label_4ccabc;
    }
    ctx->pc = 0x4CCAB4u;
    {
        const bool branch_taken_0x4ccab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCAB4u;
        // 0x4ccab8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccab4) {
            ctx->pc = 0x4CCAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ccaa0;
        }
    }
    ctx->pc = 0x4CCABCu;
label_4ccabc:
    // 0x4ccabc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ccabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ccac0:
    // 0x4ccac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ccac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4ccac4:
    // 0x4ccac4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ccac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ccac8:
    // 0x4ccac8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ccac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4ccacc:
    // 0x4ccacc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ccaccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ccad0:
    // 0x4ccad0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ccad0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4ccad4:
    // 0x4ccad4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ccad4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ccad8:
    // 0x4ccad8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ccad8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4ccadc:
    // 0x4ccadc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ccadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ccae0:
    // 0x4ccae0: 0x3e00008  jr          $ra
label_4ccae4:
    if (ctx->pc == 0x4CCAE4u) {
        ctx->pc = 0x4CCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCAE0u;
        // 0x4ccae4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCAE8u;
        goto label_fallthrough_0x4ccae0;
    }
    ctx->pc = 0x4CCAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCAE0u;
        // 0x4ccae4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ccae0:
    ctx->pc = 0x4CCAE8u;
}
