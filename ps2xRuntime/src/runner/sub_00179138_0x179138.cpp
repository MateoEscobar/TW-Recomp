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

// Function: sub_00179138
// Address: 0x179138 - 0x179250
void sub_00179138_0x179138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179138_0x179138");
#endif

    switch (ctx->pc) {
        case 0x179138u: goto label_179138;
        case 0x17913cu: goto label_17913c;
        case 0x179140u: goto label_179140;
        case 0x179144u: goto label_179144;
        case 0x179148u: goto label_179148;
        case 0x17914cu: goto label_17914c;
        case 0x179150u: goto label_179150;
        case 0x179154u: goto label_179154;
        case 0x179158u: goto label_179158;
        case 0x17915cu: goto label_17915c;
        case 0x179160u: goto label_179160;
        case 0x179164u: goto label_179164;
        case 0x179168u: goto label_179168;
        case 0x17916cu: goto label_17916c;
        case 0x179170u: goto label_179170;
        case 0x179174u: goto label_179174;
        case 0x179178u: goto label_179178;
        case 0x17917cu: goto label_17917c;
        case 0x179180u: goto label_179180;
        case 0x179184u: goto label_179184;
        case 0x179188u: goto label_179188;
        case 0x17918cu: goto label_17918c;
        case 0x179190u: goto label_179190;
        case 0x179194u: goto label_179194;
        case 0x179198u: goto label_179198;
        case 0x17919cu: goto label_17919c;
        case 0x1791a0u: goto label_1791a0;
        case 0x1791a4u: goto label_1791a4;
        case 0x1791a8u: goto label_1791a8;
        case 0x1791acu: goto label_1791ac;
        case 0x1791b0u: goto label_1791b0;
        case 0x1791b4u: goto label_1791b4;
        case 0x1791b8u: goto label_1791b8;
        case 0x1791bcu: goto label_1791bc;
        case 0x1791c0u: goto label_1791c0;
        case 0x1791c4u: goto label_1791c4;
        case 0x1791c8u: goto label_1791c8;
        case 0x1791ccu: goto label_1791cc;
        case 0x1791d0u: goto label_1791d0;
        case 0x1791d4u: goto label_1791d4;
        case 0x1791d8u: goto label_1791d8;
        case 0x1791dcu: goto label_1791dc;
        case 0x1791e0u: goto label_1791e0;
        case 0x1791e4u: goto label_1791e4;
        case 0x1791e8u: goto label_1791e8;
        case 0x1791ecu: goto label_1791ec;
        case 0x1791f0u: goto label_1791f0;
        case 0x1791f4u: goto label_1791f4;
        case 0x1791f8u: goto label_1791f8;
        case 0x1791fcu: goto label_1791fc;
        case 0x179200u: goto label_179200;
        case 0x179204u: goto label_179204;
        case 0x179208u: goto label_179208;
        case 0x17920cu: goto label_17920c;
        case 0x179210u: goto label_179210;
        case 0x179214u: goto label_179214;
        case 0x179218u: goto label_179218;
        case 0x17921cu: goto label_17921c;
        case 0x179220u: goto label_179220;
        case 0x179224u: goto label_179224;
        case 0x179228u: goto label_179228;
        case 0x17922cu: goto label_17922c;
        case 0x179230u: goto label_179230;
        case 0x179234u: goto label_179234;
        case 0x179238u: goto label_179238;
        case 0x17923cu: goto label_17923c;
        case 0x179240u: goto label_179240;
        case 0x179244u: goto label_179244;
        case 0x179248u: goto label_179248;
        case 0x17924cu: goto label_17924c;
        default: break;
    }

    ctx->pc = 0x179138u;

label_179138:
    // 0x179138: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x179138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_17913c:
    // 0x17913c: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x17913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_179140:
    // 0x179140: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x179140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_179144:
    // 0x179144: 0x24061c20  addiu       $a2, $zero, 0x1C20
    ctx->pc = 0x179144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7200));
label_179148:
    // 0x179148: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x179148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17914c:
    // 0x17914c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17914cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179150:
    // 0x179150: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x179150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_179154:
    // 0x179154: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x179154u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_179158:
    // 0x179158: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x179158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_17915c:
    // 0x17915c: 0x26930040  addiu       $s3, $s4, 0x40
    ctx->pc = 0x17915cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_179160:
    // 0x179160: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x179160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_179164:
    // 0x179164: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x179164u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_179168:
    // 0x179168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17916c:
    // 0x17916c: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x17916cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
label_179170:
    // 0x179170: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x179170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_179174:
    // 0x179174: 0x26102060  addiu       $s0, $s0, 0x2060
    ctx->pc = 0x179174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8288));
label_179178:
    // 0x179178: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x179178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_17917c:
    // 0x17917c: 0x26312068  addiu       $s1, $s1, 0x2068
    ctx->pc = 0x17917cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8296));
label_179180:
    // 0x179180: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x179180u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_179184:
    // 0x179184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179188:
    // 0x179188: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x179188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17918c:
    // 0x17918c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17918cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179190:
    // 0x179190: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x179190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_179194:
    // 0x179194: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x179194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_179198:
    // 0x179198: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x179198u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17919c:
    // 0x17919c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x17919cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1791a0:
    // 0x1791a0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1791a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1791a4:
    // 0x1791a4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1791a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1791a8:
    // 0x1791a8: 0x40f809  jalr        $v0
label_1791ac:
    if (ctx->pc == 0x1791ACu) {
        ctx->pc = 0x1791ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791A8u;
        // 0x1791ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791B0u;
        goto label_1791b0;
    }
    ctx->pc = 0x1791A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1791B0u);
        ctx->pc = 0x1791ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791A8u;
        // 0x1791ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1791A8u, 0x1791B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1791B0u;
label_1791b0:
    // 0x1791b0: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x1791b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_1791b4:
    // 0x1791b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1791b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1791b8:
    // 0x1791b8: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1791b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1791bc:
    // 0x1791bc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1791bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1791c0:
    // 0x1791c0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1791c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1791c4:
    // 0x1791c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1791c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1791c8:
    // 0x1791c8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1791c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1791cc:
    // 0x1791cc: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x1791ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1791d0:
    // 0x1791d0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1791d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1791d4:
    // 0x1791d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1791d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1791d8:
    // 0x1791d8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1791d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1791dc:
    // 0x1791dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1791dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1791e0:
    // 0x1791e0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1791e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1791e4:
    // 0x1791e4: 0x40f809  jalr        $v0
label_1791e8:
    if (ctx->pc == 0x1791E8u) {
        ctx->pc = 0x1791E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791E4u;
        // 0x1791e8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791ECu;
        goto label_1791ec;
    }
    ctx->pc = 0x1791E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1791ECu);
        ctx->pc = 0x1791E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791E4u;
        // 0x1791e8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1791E4u, 0x1791ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1791ECu;
label_1791ec:
    // 0x1791ec: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1791ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1791f0:
    // 0x1791f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1791f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1791f4:
    // 0x1791f4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1791f8:
    if (ctx->pc == 0x1791F8u) {
        ctx->pc = 0x1791F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791F4u;
        // 0x1791f8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791FCu;
        goto label_1791fc;
    }
    ctx->pc = 0x1791F4u;
    {
        const bool branch_taken_0x1791f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791F4u;
        // 0x1791f8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791f4) {
            ctx->pc = 0x17922Cu;
            goto label_17922c;
        }
    }
    ctx->pc = 0x1791FCu;
label_1791fc:
    // 0x1791fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1791fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179200:
    // 0x179200: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x179200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_179204:
    // 0x179204: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x179204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_179208:
    // 0x179208: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x179208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17920c:
    // 0x17920c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17920cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_179210:
    // 0x179210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_179214:
    // 0x179214: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x179214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_179218:
    // 0x179218: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x179218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17921c:
    // 0x17921c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_179220:
    // 0x179220: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x179220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_179224:
    // 0x179224: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_179228:
    if (ctx->pc == 0x179228u) {
        ctx->pc = 0x179228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179224u;
        // 0x179228: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17922Cu;
        goto label_17922c;
    }
    ctx->pc = 0x179224u;
    {
        const bool branch_taken_0x179224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179224u;
        // 0x179228: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179224) {
            ctx->pc = 0x179200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179200;
        }
    }
    ctx->pc = 0x17922Cu;
label_17922c:
    // 0x17922c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x17922cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_179230:
    // 0x179230: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x179230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_179234:
    // 0x179234: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x179234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_179238:
    // 0x179238: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x179238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17923c:
    // 0x17923c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17923cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179240:
    // 0x179240: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x179240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179244:
    // 0x179244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179248:
    // 0x179248: 0x3e00008  jr          $ra
label_17924c:
    if (ctx->pc == 0x17924Cu) {
        ctx->pc = 0x17924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179248u;
        // 0x17924c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179250u;
        goto label_fallthrough_0x179248;
    }
    ctx->pc = 0x179248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179248u;
        // 0x17924c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x179248:
    ctx->pc = 0x179250u;
}
