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

// Function: sub_00398130
// Address: 0x398130 - 0x3982a0
void sub_00398130_0x398130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398130_0x398130");
#endif

    switch (ctx->pc) {
        case 0x398130u: goto label_398130;
        case 0x398134u: goto label_398134;
        case 0x398138u: goto label_398138;
        case 0x39813cu: goto label_39813c;
        case 0x398140u: goto label_398140;
        case 0x398144u: goto label_398144;
        case 0x398148u: goto label_398148;
        case 0x39814cu: goto label_39814c;
        case 0x398150u: goto label_398150;
        case 0x398154u: goto label_398154;
        case 0x398158u: goto label_398158;
        case 0x39815cu: goto label_39815c;
        case 0x398160u: goto label_398160;
        case 0x398164u: goto label_398164;
        case 0x398168u: goto label_398168;
        case 0x39816cu: goto label_39816c;
        case 0x398170u: goto label_398170;
        case 0x398174u: goto label_398174;
        case 0x398178u: goto label_398178;
        case 0x39817cu: goto label_39817c;
        case 0x398180u: goto label_398180;
        case 0x398184u: goto label_398184;
        case 0x398188u: goto label_398188;
        case 0x39818cu: goto label_39818c;
        case 0x398190u: goto label_398190;
        case 0x398194u: goto label_398194;
        case 0x398198u: goto label_398198;
        case 0x39819cu: goto label_39819c;
        case 0x3981a0u: goto label_3981a0;
        case 0x3981a4u: goto label_3981a4;
        case 0x3981a8u: goto label_3981a8;
        case 0x3981acu: goto label_3981ac;
        case 0x3981b0u: goto label_3981b0;
        case 0x3981b4u: goto label_3981b4;
        case 0x3981b8u: goto label_3981b8;
        case 0x3981bcu: goto label_3981bc;
        case 0x3981c0u: goto label_3981c0;
        case 0x3981c4u: goto label_3981c4;
        case 0x3981c8u: goto label_3981c8;
        case 0x3981ccu: goto label_3981cc;
        case 0x3981d0u: goto label_3981d0;
        case 0x3981d4u: goto label_3981d4;
        case 0x3981d8u: goto label_3981d8;
        case 0x3981dcu: goto label_3981dc;
        case 0x3981e0u: goto label_3981e0;
        case 0x3981e4u: goto label_3981e4;
        case 0x3981e8u: goto label_3981e8;
        case 0x3981ecu: goto label_3981ec;
        case 0x3981f0u: goto label_3981f0;
        case 0x3981f4u: goto label_3981f4;
        case 0x3981f8u: goto label_3981f8;
        case 0x3981fcu: goto label_3981fc;
        case 0x398200u: goto label_398200;
        case 0x398204u: goto label_398204;
        case 0x398208u: goto label_398208;
        case 0x39820cu: goto label_39820c;
        case 0x398210u: goto label_398210;
        case 0x398214u: goto label_398214;
        case 0x398218u: goto label_398218;
        case 0x39821cu: goto label_39821c;
        case 0x398220u: goto label_398220;
        case 0x398224u: goto label_398224;
        case 0x398228u: goto label_398228;
        case 0x39822cu: goto label_39822c;
        case 0x398230u: goto label_398230;
        case 0x398234u: goto label_398234;
        case 0x398238u: goto label_398238;
        case 0x39823cu: goto label_39823c;
        case 0x398240u: goto label_398240;
        case 0x398244u: goto label_398244;
        case 0x398248u: goto label_398248;
        case 0x39824cu: goto label_39824c;
        case 0x398250u: goto label_398250;
        case 0x398254u: goto label_398254;
        case 0x398258u: goto label_398258;
        case 0x39825cu: goto label_39825c;
        case 0x398260u: goto label_398260;
        case 0x398264u: goto label_398264;
        case 0x398268u: goto label_398268;
        case 0x39826cu: goto label_39826c;
        case 0x398270u: goto label_398270;
        case 0x398274u: goto label_398274;
        case 0x398278u: goto label_398278;
        case 0x39827cu: goto label_39827c;
        case 0x398280u: goto label_398280;
        case 0x398284u: goto label_398284;
        case 0x398288u: goto label_398288;
        case 0x39828cu: goto label_39828c;
        case 0x398290u: goto label_398290;
        case 0x398294u: goto label_398294;
        case 0x398298u: goto label_398298;
        case 0x39829cu: goto label_39829c;
        default: break;
    }

    ctx->pc = 0x398130u;

label_398130:
    // 0x398130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x398130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_398134:
    // 0x398134: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x398134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_398138:
    // 0x398138: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x398138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_39813c:
    // 0x39813c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39813cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398140:
    // 0x398140: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x398140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_398144:
    // 0x398144: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x398144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_398148:
    // 0x398148: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x398148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_39814c:
    // 0x39814c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_398150:
    // 0x398150: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x398150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_398154:
    // 0x398154: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_398158:
    if (ctx->pc == 0x398158u) {
        ctx->pc = 0x398158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398154u;
        // 0x398158: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39815Cu;
        goto label_39815c;
    }
    ctx->pc = 0x398154u;
    {
        const bool branch_taken_0x398154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398154u;
        // 0x398158: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398154) {
            ctx->pc = 0x3981BCu;
            goto label_3981bc;
        }
    }
    ctx->pc = 0x39815Cu;
label_39815c:
    // 0x39815c: 0x26140020  addiu       $s4, $s0, 0x20
    ctx->pc = 0x39815cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_398160:
    // 0x398160: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x398160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398164:
    // 0x398164: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x398164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398168:
    // 0x398168: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x398168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_39816c:
    // 0x39816c: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x39816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_398170:
    // 0x398170: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x398170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_398174:
    // 0x398174: 0x31d82  srl         $v1, $v1, 22
    ctx->pc = 0x398174u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 22));
label_398178:
    // 0x398178: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x398178u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_39817c:
    // 0x39817c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x39817cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_398180:
    // 0x398180: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x398180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_398184:
    // 0x398184: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x398184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_398188:
    // 0x398188: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x398188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
label_39818c:
    // 0x39818c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398190:
    // 0x398190: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x398190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_398194:
    // 0x398194: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x398194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_398198:
    // 0x398198: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
label_39819c:
    if (ctx->pc == 0x39819Cu) {
        ctx->pc = 0x39819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398198u;
        // 0x39819c: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981A0u;
        goto label_3981a0;
    }
    ctx->pc = 0x398198u;
    {
        const bool branch_taken_0x398198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x398198) {
            ctx->pc = 0x39819Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398198u;
            // 0x39819c: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3981ACu;
            goto label_3981ac;
        }
    }
    ctx->pc = 0x3981A0u;
label_3981a0:
    // 0x3981a0: 0xc0e650a  jal         func_399428
label_3981a4:
    if (ctx->pc == 0x3981A4u) {
        ctx->pc = 0x3981A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981A0u;
        // 0x3981a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981A8u;
        goto label_3981a8;
    }
    ctx->pc = 0x3981A0u;
    SET_GPR_U32(ctx, 31, 0x3981A8u);
    ctx->pc = 0x3981A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3981A0u;
    // 0x3981a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399428u, 0x3981A0u, 0x3981A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3981A8u;
label_3981a8:
    // 0x3981a8: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x3981a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_3981ac:
    // 0x3981ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3981acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3981b0:
    // 0x3981b0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3981b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3981b4:
    // 0x3981b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_3981b8:
    if (ctx->pc == 0x3981B8u) {
        ctx->pc = 0x3981B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981B4u;
        // 0x3981b8: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981BCu;
        goto label_3981bc;
    }
    ctx->pc = 0x3981B4u;
    {
        const bool branch_taken_0x3981b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3981B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981B4u;
        // 0x3981b8: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3981b4) {
            ctx->pc = 0x398168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398168;
        }
    }
    ctx->pc = 0x3981BCu;
label_3981bc:
    // 0x3981bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3981bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3981c0:
    // 0x3981c0: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x3981c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3981c4:
    // 0x3981c4: 0x26080050  addiu       $t0, $s0, 0x50
    ctx->pc = 0x3981c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3981c8:
    // 0x3981c8: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x3981c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_3981cc:
    // 0x3981cc: 0xa71018  mult        $v0, $a1, $a3
    ctx->pc = 0x3981ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3981d0:
    // 0x3981d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3981d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3981d4:
    // 0x3981d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3981d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3981d8:
    // 0x3981d8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x3981d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3981dc:
    // 0x3981dc: 0x0  nop
    ctx->pc = 0x3981dcu;
    // NOP
label_3981e0:
    // 0x3981e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3981e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3981e4:
    // 0x3981e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3981e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3981e8:
    // 0x3981e8: 0x2c82001a  sltiu       $v0, $a0, 0x1A
    ctx->pc = 0x3981e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_3981ec:
    // 0x3981ec: 0x0  nop
    ctx->pc = 0x3981ecu;
    // NOP
label_3981f0:
    // 0x3981f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_3981f4:
    if (ctx->pc == 0x3981F4u) {
        ctx->pc = 0x3981F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981F0u;
        // 0x3981f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981F8u;
        goto label_3981f8;
    }
    ctx->pc = 0x3981F0u;
    {
        const bool branch_taken_0x3981f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3981F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981F0u;
        // 0x3981f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3981f0) {
            ctx->pc = 0x3981E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3981e0;
        }
    }
    ctx->pc = 0x3981F8u;
label_3981f8:
    // 0x3981f8: 0x2ca200ff  sltiu       $v0, $a1, 0xFF
    ctx->pc = 0x3981f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
label_3981fc:
    // 0x3981fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_398200:
    if (ctx->pc == 0x398200u) {
        ctx->pc = 0x398200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981FCu;
        // 0x398200: 0xa71018  mult        $v0, $a1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x398204u;
        goto label_398204;
    }
    ctx->pc = 0x3981FCu;
    {
        const bool branch_taken_0x3981fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981FCu;
        // 0x398200: 0xa71018  mult        $v0, $a1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3981fc) {
            ctx->pc = 0x3981D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3981d0;
        }
    }
    ctx->pc = 0x398204u;
label_398204:
    // 0x398204: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x398204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_398208:
    // 0x398208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x398208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39820c:
    // 0x39820c: 0x0  nop
    ctx->pc = 0x39820cu;
    // NOP
label_398210:
    // 0x398210: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x398210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_398214:
    // 0x398214: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x398214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_398218:
    // 0x398218: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x398218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_39821c:
    // 0x39821c: 0x0  nop
    ctx->pc = 0x39821cu;
    // NOP
label_398220:
    // 0x398220: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_398224:
    if (ctx->pc == 0x398224u) {
        ctx->pc = 0x398224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398220u;
        // 0x398224: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398228u;
        goto label_398228;
    }
    ctx->pc = 0x398220u;
    {
        const bool branch_taken_0x398220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398220u;
        // 0x398224: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398220) {
            ctx->pc = 0x398210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398210;
        }
    }
    ctx->pc = 0x398228u;
label_398228:
    // 0x398228: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x398228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_39822c:
    // 0x39822c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39822cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_398230:
    // 0x398230: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x398230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_398234:
    // 0x398234: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x398234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_398238:
    // 0x398238: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x398238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_39823c:
    // 0x39823c: 0x24c61188  addiu       $a2, $a2, 0x1188
    ctx->pc = 0x39823cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4488));
label_398240:
    // 0x398240: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x398240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_398244:
    // 0x398244: 0x24070124  addiu       $a3, $zero, 0x124
    ctx->pc = 0x398244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_398248:
    // 0x398248: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x398248u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_39824c:
    // 0x39824c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x39824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_398250:
    // 0x398250: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x398250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_398254:
    // 0x398254: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x398254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_398258:
    // 0x398258: 0x40f809  jalr        $v0
label_39825c:
    if (ctx->pc == 0x39825Cu) {
        ctx->pc = 0x39825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398258u;
        // 0x39825c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398260u;
        goto label_398260;
    }
    ctx->pc = 0x398258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398260u);
        ctx->pc = 0x39825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398258u;
        // 0x39825c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398258u, 0x398260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398260u;
label_398260:
    // 0x398260: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x398260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_398264:
    // 0x398264: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x398264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_398268:
    // 0x398268: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x398268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
label_39826c:
    // 0x39826c: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x39826cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
label_398270:
    // 0x398270: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x398270u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
label_398274:
    // 0x398274: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x398274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_398278:
    // 0x398278: 0xa603001c  sh          $v1, 0x1C($s0)
    ctx->pc = 0x398278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
label_39827c:
    // 0x39827c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39827cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_398280:
    // 0x398280: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x398280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_398284:
    // 0x398284: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x398284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_398288:
    // 0x398288: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x398288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39828c:
    // 0x39828c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39828cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_398290:
    // 0x398290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_398294:
    // 0x398294: 0x3e00008  jr          $ra
label_398298:
    if (ctx->pc == 0x398298u) {
        ctx->pc = 0x398298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398294u;
        // 0x398298: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39829Cu;
        goto label_39829c;
    }
    ctx->pc = 0x398294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398294u;
        // 0x398298: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39829Cu;
label_39829c:
    // 0x39829c: 0x0  nop
    ctx->pc = 0x39829cu;
    // NOP
    ctx->pc = 0x3982a0u;
}
