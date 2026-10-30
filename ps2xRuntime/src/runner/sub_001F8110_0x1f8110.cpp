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

// Function: sub_001F8110
// Address: 0x1f8110 - 0x1f82c0
void sub_001F8110_0x1f8110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8110_0x1f8110");
#endif

    switch (ctx->pc) {
        case 0x1f8110u: goto label_1f8110;
        case 0x1f8114u: goto label_1f8114;
        case 0x1f8118u: goto label_1f8118;
        case 0x1f811cu: goto label_1f811c;
        case 0x1f8120u: goto label_1f8120;
        case 0x1f8124u: goto label_1f8124;
        case 0x1f8128u: goto label_1f8128;
        case 0x1f812cu: goto label_1f812c;
        case 0x1f8130u: goto label_1f8130;
        case 0x1f8134u: goto label_1f8134;
        case 0x1f8138u: goto label_1f8138;
        case 0x1f813cu: goto label_1f813c;
        case 0x1f8140u: goto label_1f8140;
        case 0x1f8144u: goto label_1f8144;
        case 0x1f8148u: goto label_1f8148;
        case 0x1f814cu: goto label_1f814c;
        case 0x1f8150u: goto label_1f8150;
        case 0x1f8154u: goto label_1f8154;
        case 0x1f8158u: goto label_1f8158;
        case 0x1f815cu: goto label_1f815c;
        case 0x1f8160u: goto label_1f8160;
        case 0x1f8164u: goto label_1f8164;
        case 0x1f8168u: goto label_1f8168;
        case 0x1f816cu: goto label_1f816c;
        case 0x1f8170u: goto label_1f8170;
        case 0x1f8174u: goto label_1f8174;
        case 0x1f8178u: goto label_1f8178;
        case 0x1f817cu: goto label_1f817c;
        case 0x1f8180u: goto label_1f8180;
        case 0x1f8184u: goto label_1f8184;
        case 0x1f8188u: goto label_1f8188;
        case 0x1f818cu: goto label_1f818c;
        case 0x1f8190u: goto label_1f8190;
        case 0x1f8194u: goto label_1f8194;
        case 0x1f8198u: goto label_1f8198;
        case 0x1f819cu: goto label_1f819c;
        case 0x1f81a0u: goto label_1f81a0;
        case 0x1f81a4u: goto label_1f81a4;
        case 0x1f81a8u: goto label_1f81a8;
        case 0x1f81acu: goto label_1f81ac;
        case 0x1f81b0u: goto label_1f81b0;
        case 0x1f81b4u: goto label_1f81b4;
        case 0x1f81b8u: goto label_1f81b8;
        case 0x1f81bcu: goto label_1f81bc;
        case 0x1f81c0u: goto label_1f81c0;
        case 0x1f81c4u: goto label_1f81c4;
        case 0x1f81c8u: goto label_1f81c8;
        case 0x1f81ccu: goto label_1f81cc;
        case 0x1f81d0u: goto label_1f81d0;
        case 0x1f81d4u: goto label_1f81d4;
        case 0x1f81d8u: goto label_1f81d8;
        case 0x1f81dcu: goto label_1f81dc;
        case 0x1f81e0u: goto label_1f81e0;
        case 0x1f81e4u: goto label_1f81e4;
        case 0x1f81e8u: goto label_1f81e8;
        case 0x1f81ecu: goto label_1f81ec;
        case 0x1f81f0u: goto label_1f81f0;
        case 0x1f81f4u: goto label_1f81f4;
        case 0x1f81f8u: goto label_1f81f8;
        case 0x1f81fcu: goto label_1f81fc;
        case 0x1f8200u: goto label_1f8200;
        case 0x1f8204u: goto label_1f8204;
        case 0x1f8208u: goto label_1f8208;
        case 0x1f820cu: goto label_1f820c;
        case 0x1f8210u: goto label_1f8210;
        case 0x1f8214u: goto label_1f8214;
        case 0x1f8218u: goto label_1f8218;
        case 0x1f821cu: goto label_1f821c;
        case 0x1f8220u: goto label_1f8220;
        case 0x1f8224u: goto label_1f8224;
        case 0x1f8228u: goto label_1f8228;
        case 0x1f822cu: goto label_1f822c;
        case 0x1f8230u: goto label_1f8230;
        case 0x1f8234u: goto label_1f8234;
        case 0x1f8238u: goto label_1f8238;
        case 0x1f823cu: goto label_1f823c;
        case 0x1f8240u: goto label_1f8240;
        case 0x1f8244u: goto label_1f8244;
        case 0x1f8248u: goto label_1f8248;
        case 0x1f824cu: goto label_1f824c;
        case 0x1f8250u: goto label_1f8250;
        case 0x1f8254u: goto label_1f8254;
        case 0x1f8258u: goto label_1f8258;
        case 0x1f825cu: goto label_1f825c;
        case 0x1f8260u: goto label_1f8260;
        case 0x1f8264u: goto label_1f8264;
        case 0x1f8268u: goto label_1f8268;
        case 0x1f826cu: goto label_1f826c;
        case 0x1f8270u: goto label_1f8270;
        case 0x1f8274u: goto label_1f8274;
        case 0x1f8278u: goto label_1f8278;
        case 0x1f827cu: goto label_1f827c;
        case 0x1f8280u: goto label_1f8280;
        case 0x1f8284u: goto label_1f8284;
        case 0x1f8288u: goto label_1f8288;
        case 0x1f828cu: goto label_1f828c;
        case 0x1f8290u: goto label_1f8290;
        case 0x1f8294u: goto label_1f8294;
        case 0x1f8298u: goto label_1f8298;
        case 0x1f829cu: goto label_1f829c;
        case 0x1f82a0u: goto label_1f82a0;
        case 0x1f82a4u: goto label_1f82a4;
        case 0x1f82a8u: goto label_1f82a8;
        case 0x1f82acu: goto label_1f82ac;
        case 0x1f82b0u: goto label_1f82b0;
        case 0x1f82b4u: goto label_1f82b4;
        case 0x1f82b8u: goto label_1f82b8;
        case 0x1f82bcu: goto label_1f82bc;
        default: break;
    }

    ctx->pc = 0x1f8110u;

label_1f8110:
    // 0x1f8110: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f8110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1f8114:
    // 0x1f8114: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1f8114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1f8118:
    // 0x1f8118: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1f8118u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f811c:
    // 0x1f811c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1f811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1f8120:
    // 0x1f8120: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1f8120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1f8124:
    // 0x1f8124: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f8124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f8128:
    // 0x1f8128: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1f8128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1f812c:
    // 0x1f812c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f812cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f8130:
    // 0x1f8130: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1f8130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1f8134:
    // 0x1f8134: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1f8134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1f8138:
    // 0x1f8138: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f8138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f813c:
    // 0x1f813c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f813cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f8140:
    // 0x1f8140: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1f8140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1f8144:
    // 0x1f8144: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1f8144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f8148:
    // 0x1f8148: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1f8148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1f814c:
    // 0x1f814c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1f814cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1f8150:
    // 0x1f8150: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1f8150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1f8154:
    // 0x1f8154: 0x3177ffff  andi        $s7, $t3, 0xFFFF
    ctx->pc = 0x1f8154u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_1f8158:
    // 0x1f8158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f815c:
    // 0x1f815c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1f815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_1f8160:
    // 0x1f8160: 0x97b100b0  lhu         $s1, 0xB0($sp)
    ctx->pc = 0x1f8160u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_1f8164:
    // 0x1f8164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f8164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8168:
    // 0x1f8168: 0xc10904c  jal         func_424130
label_1f816c:
    if (ctx->pc == 0x1F816Cu) {
        ctx->pc = 0x1F816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8168u;
        // 0x1f816c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8170u;
        goto label_1f8170;
    }
    ctx->pc = 0x1F8168u;
    SET_GPR_U32(ctx, 31, 0x1F8170u);
    ctx->pc = 0x1F816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8168u;
    // 0x1f816c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1F8168u, 0x1F8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8170u;
label_1f8170:
    // 0x1f8170: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_1f8174:
    if (ctx->pc == 0x1F8174u) {
        ctx->pc = 0x1F8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8170u;
        // 0x1f8174: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8178u;
        goto label_1f8178;
    }
    ctx->pc = 0x1F8170u;
    {
        const bool branch_taken_0x1f8170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8170u;
        // 0x1f8174: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8170) {
            ctx->pc = 0x1F828Cu;
            goto label_1f828c;
        }
    }
    ctx->pc = 0x1F8178u;
label_1f8178:
    // 0x1f8178: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f8178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f817c:
    // 0x1f817c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1f817cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1f8180:
    // 0x1f8180: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f8180u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f8184:
    // 0x1f8184: 0x24a578f8  addiu       $a1, $a1, 0x78F8
    ctx->pc = 0x1f8184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30968));
label_1f8188:
    // 0x1f8188: 0x25087910  addiu       $t0, $t0, 0x7910
    ctx->pc = 0x1f8188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30992));
label_1f818c:
    // 0x1f818c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f8190:
    // 0x1f8190: 0x240601b4  addiu       $a2, $zero, 0x1B4
    ctx->pc = 0x1f8190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_1f8194:
    // 0x1f8194: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f8194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f8198:
    // 0x1f8198: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1f8198u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1f819c:
    // 0x1f819c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f819cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f81a0:
    // 0x1f81a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f81a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f81a4:
    // 0x1f81a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f81a8:
    // 0x1f81a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f81a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f81ac:
    // 0x1f81ac: 0x40f809  jalr        $v0
label_1f81b0:
    if (ctx->pc == 0x1F81B0u) {
        ctx->pc = 0x1F81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81ACu;
        // 0x1f81b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81B4u;
        goto label_1f81b4;
    }
    ctx->pc = 0x1F81ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F81B4u);
        ctx->pc = 0x1F81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81ACu;
        // 0x1f81b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F81ACu, 0x1F81B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F81B4u;
label_1f81b4:
    // 0x1f81b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f81b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f81b8:
    // 0x1f81b8: 0x12800025  beqz        $s4, . + 4 + (0x25 << 2)
label_1f81bc:
    if (ctx->pc == 0x1F81BCu) {
        ctx->pc = 0x1F81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81B8u;
        // 0x1f81bc: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81C0u;
        goto label_1f81c0;
    }
    ctx->pc = 0x1F81B8u;
    {
        const bool branch_taken_0x1f81b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81B8u;
        // 0x1f81bc: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81b8) {
            ctx->pc = 0x1F8250u;
            goto label_1f8250;
        }
    }
    ctx->pc = 0x1F81C0u;
label_1f81c0:
    // 0x1f81c0: 0xae90000c  sw          $s0, 0xC($s4)
    ctx->pc = 0x1f81c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 16));
label_1f81c4:
    // 0x1f81c4: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x1f81c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
label_1f81c8:
    // 0x1f81c8: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1f81c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1f81cc:
    // 0x1f81cc: 0xae930014  sw          $s3, 0x14($s4)
    ctx->pc = 0x1f81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 19));
label_1f81d0:
    // 0x1f81d0: 0x26107880  addiu       $s0, $s0, 0x7880
    ctx->pc = 0x1f81d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30848));
label_1f81d4:
    // 0x1f81d4: 0xa6910022  sh          $s1, 0x22($s4)
    ctx->pc = 0x1f81d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 17));
label_1f81d8:
    // 0x1f81d8: 0x26930024  addiu       $s3, $s4, 0x24
    ctx->pc = 0x1f81d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_1f81dc:
    // 0x1f81dc: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1f81dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_1f81e0:
    // 0x1f81e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f81e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f81e4:
    // 0x1f81e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f81e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f81e8:
    // 0x1f81e8: 0xae950018  sw          $s5, 0x18($s4)
    ctx->pc = 0x1f81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 21));
label_1f81ec:
    // 0x1f81ec: 0xae96001c  sw          $s6, 0x1C($s4)
    ctx->pc = 0x1f81ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 22));
label_1f81f0:
    // 0x1f81f0: 0xa6970020  sh          $s7, 0x20($s4)
    ctx->pc = 0x1f81f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 23));
label_1f81f4:
    // 0x1f81f4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1f81f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1f81f8:
    // 0x1f81f8: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1f81f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1f81fc:
    // 0x1f81fc: 0xc10b1f8  jal         func_42C7E0
label_1f8200:
    if (ctx->pc == 0x1F8200u) {
        ctx->pc = 0x1F8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81FCu;
        // 0x1f8200: 0xae9e0008  sw          $fp, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8204u;
        goto label_1f8204;
    }
    ctx->pc = 0x1F81FCu;
    SET_GPR_U32(ctx, 31, 0x1F8204u);
    ctx->pc = 0x1F8200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81FCu;
    // 0x1f8200: 0xae9e0008  sw          $fp, 0x8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x1F81FCu, 0x1F8204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8204u;
label_1f8204:
    // 0x1f8204: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1f8204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1f8208:
    // 0x1f8208: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f8208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f820c:
    // 0x1f820c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f820cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8210:
    // 0x1f8210: 0xc10b1f8  jal         func_42C7E0
label_1f8214:
    if (ctx->pc == 0x1F8214u) {
        ctx->pc = 0x1F8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8210u;
        // 0x1f8214: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8218u;
        goto label_1f8218;
    }
    ctx->pc = 0x1F8210u;
    SET_GPR_U32(ctx, 31, 0x1F8218u);
    ctx->pc = 0x1F8214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8210u;
    // 0x1f8214: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x1F8210u, 0x1F8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8218u;
label_1f8218:
    // 0x1f8218: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f821c:
    // 0x1f821c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f821cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8220:
    // 0x1f8220: 0xc10b1f8  jal         func_42C7E0
label_1f8224:
    if (ctx->pc == 0x1F8224u) {
        ctx->pc = 0x1F8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8220u;
        // 0x1f8224: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8228u;
        goto label_1f8228;
    }
    ctx->pc = 0x1F8220u;
    SET_GPR_U32(ctx, 31, 0x1F8228u);
    ctx->pc = 0x1F8224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8220u;
    // 0x1f8224: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x1F8220u, 0x1F8228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8228u;
label_1f8228:
    // 0x1f8228: 0x8fab00b8  lw          $t3, 0xB8($sp)
    ctx->pc = 0x1f8228u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1f822c:
    // 0x1f822c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f8230:
    // 0x1f8230: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f8230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8234:
    // 0x1f8234: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f8234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f8238:
    // 0x1f8238: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1f8238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f823c:
    // 0x1f823c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f823cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f8240:
    // 0x1f8240: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1f8240u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f8244:
    // 0x1f8244: 0xc10ca04  jal         func_432810
label_1f8248:
    if (ctx->pc == 0x1F8248u) {
        ctx->pc = 0x1F8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8244u;
        // 0x1f8248: 0x2405018f  addiu       $a1, $zero, 0x18F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F824Cu;
        goto label_1f824c;
    }
    ctx->pc = 0x1F8244u;
    SET_GPR_U32(ctx, 31, 0x1F824Cu);
    ctx->pc = 0x1F8248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8244u;
    // 0x1f8248: 0x2405018f  addiu       $a1, $zero, 0x18F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1F8244u, 0x1F824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F824Cu;
label_1f824c:
    // 0x1f824c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1f824cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1f8250:
    // 0x1f8250: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f8250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1f8254:
    // 0x1f8254: 0x8c44ee84  lw          $a0, -0x117C($v0)
    ctx->pc = 0x1f8254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962820)));
label_1f8258:
    // 0x1f8258: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1f8258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f825c:
    // 0x1f825c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f8260:
    // 0x1f8260: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1f8264:
    if (ctx->pc == 0x1F8264u) {
        ctx->pc = 0x1F8268u;
        goto label_1f8268;
    }
    ctx->pc = 0x1F8260u;
    {
        const bool branch_taken_0x1f8260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f8260) {
            ctx->pc = 0x1F8284u;
            goto label_1f8284;
        }
    }
    ctx->pc = 0x1F8268u;
label_1f8268:
    // 0x1f8268: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f826c:
    if (ctx->pc == 0x1F826Cu) {
        ctx->pc = 0x1F826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8268u;
        // 0x1f826c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8270u;
        goto label_1f8270;
    }
    ctx->pc = 0x1F8268u;
    {
        const bool branch_taken_0x1f8268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8268u;
        // 0x1f826c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8268) {
            ctx->pc = 0x1F8274u;
            goto label_1f8274;
        }
    }
    ctx->pc = 0x1F8270u;
label_1f8270:
    // 0x1f8270: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f8270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1f8274:
    // 0x1f8274: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f8274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f8278:
    // 0x1f8278: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f8278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f827c:
    // 0x1f827c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f8280:
    if (ctx->pc == 0x1F8280u) {
        ctx->pc = 0x1F8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F827Cu;
        // 0x1f8280: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8284u;
        goto label_1f8284;
    }
    ctx->pc = 0x1F827Cu;
    {
        const bool branch_taken_0x1f827c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F827Cu;
        // 0x1f8280: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f827c) {
            ctx->pc = 0x1F828Cu;
            goto label_1f828c;
        }
    }
    ctx->pc = 0x1F8284u;
label_1f8284:
    // 0x1f8284: 0xc13ab46  jal         func_4EAD18
label_1f8288:
    if (ctx->pc == 0x1F8288u) {
        ctx->pc = 0x1F8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8284u;
        // 0x1f8288: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F828Cu;
        goto label_1f828c;
    }
    ctx->pc = 0x1F8284u;
    SET_GPR_U32(ctx, 31, 0x1F828Cu);
    ctx->pc = 0x1F8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8284u;
    // 0x1f8288: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAD18u, 0x1F8284u, 0x1F828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F828Cu;
label_1f828c:
    // 0x1f828c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1f828cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f8290:
    // 0x1f8290: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1f8290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f8294:
    // 0x1f8294: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1f8294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f8298:
    // 0x1f8298: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1f8298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f829c:
    // 0x1f829c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f829cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f82a0:
    // 0x1f82a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f82a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f82a4:
    // 0x1f82a4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1f82a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f82a8:
    // 0x1f82a8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1f82a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f82ac:
    // 0x1f82ac: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1f82acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f82b0:
    // 0x1f82b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f82b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f82b4:
    // 0x1f82b4: 0x3e00008  jr          $ra
label_1f82b8:
    if (ctx->pc == 0x1F82B8u) {
        ctx->pc = 0x1F82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82B4u;
        // 0x1f82b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F82BCu;
        goto label_1f82bc;
    }
    ctx->pc = 0x1F82B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82B4u;
        // 0x1f82b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F82B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F82BCu;
label_1f82bc:
    // 0x1f82bc: 0x0  nop
    ctx->pc = 0x1f82bcu;
    // NOP
    ctx->pc = 0x1f82c0u;
}
