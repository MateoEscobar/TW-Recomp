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

// Function: sub_001480E0
// Address: 0x1480e0 - 0x148210
void sub_001480E0_0x1480e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001480E0_0x1480e0");
#endif

    switch (ctx->pc) {
        case 0x1480e0u: goto label_1480e0;
        case 0x1480e4u: goto label_1480e4;
        case 0x1480e8u: goto label_1480e8;
        case 0x1480ecu: goto label_1480ec;
        case 0x1480f0u: goto label_1480f0;
        case 0x1480f4u: goto label_1480f4;
        case 0x1480f8u: goto label_1480f8;
        case 0x1480fcu: goto label_1480fc;
        case 0x148100u: goto label_148100;
        case 0x148104u: goto label_148104;
        case 0x148108u: goto label_148108;
        case 0x14810cu: goto label_14810c;
        case 0x148110u: goto label_148110;
        case 0x148114u: goto label_148114;
        case 0x148118u: goto label_148118;
        case 0x14811cu: goto label_14811c;
        case 0x148120u: goto label_148120;
        case 0x148124u: goto label_148124;
        case 0x148128u: goto label_148128;
        case 0x14812cu: goto label_14812c;
        case 0x148130u: goto label_148130;
        case 0x148134u: goto label_148134;
        case 0x148138u: goto label_148138;
        case 0x14813cu: goto label_14813c;
        case 0x148140u: goto label_148140;
        case 0x148144u: goto label_148144;
        case 0x148148u: goto label_148148;
        case 0x14814cu: goto label_14814c;
        case 0x148150u: goto label_148150;
        case 0x148154u: goto label_148154;
        case 0x148158u: goto label_148158;
        case 0x14815cu: goto label_14815c;
        case 0x148160u: goto label_148160;
        case 0x148164u: goto label_148164;
        case 0x148168u: goto label_148168;
        case 0x14816cu: goto label_14816c;
        case 0x148170u: goto label_148170;
        case 0x148174u: goto label_148174;
        case 0x148178u: goto label_148178;
        case 0x14817cu: goto label_14817c;
        case 0x148180u: goto label_148180;
        case 0x148184u: goto label_148184;
        case 0x148188u: goto label_148188;
        case 0x14818cu: goto label_14818c;
        case 0x148190u: goto label_148190;
        case 0x148194u: goto label_148194;
        case 0x148198u: goto label_148198;
        case 0x14819cu: goto label_14819c;
        case 0x1481a0u: goto label_1481a0;
        case 0x1481a4u: goto label_1481a4;
        case 0x1481a8u: goto label_1481a8;
        case 0x1481acu: goto label_1481ac;
        case 0x1481b0u: goto label_1481b0;
        case 0x1481b4u: goto label_1481b4;
        case 0x1481b8u: goto label_1481b8;
        case 0x1481bcu: goto label_1481bc;
        case 0x1481c0u: goto label_1481c0;
        case 0x1481c4u: goto label_1481c4;
        case 0x1481c8u: goto label_1481c8;
        case 0x1481ccu: goto label_1481cc;
        case 0x1481d0u: goto label_1481d0;
        case 0x1481d4u: goto label_1481d4;
        case 0x1481d8u: goto label_1481d8;
        case 0x1481dcu: goto label_1481dc;
        case 0x1481e0u: goto label_1481e0;
        case 0x1481e4u: goto label_1481e4;
        case 0x1481e8u: goto label_1481e8;
        case 0x1481ecu: goto label_1481ec;
        case 0x1481f0u: goto label_1481f0;
        case 0x1481f4u: goto label_1481f4;
        case 0x1481f8u: goto label_1481f8;
        case 0x1481fcu: goto label_1481fc;
        case 0x148200u: goto label_148200;
        case 0x148204u: goto label_148204;
        case 0x148208u: goto label_148208;
        case 0x14820cu: goto label_14820c;
        default: break;
    }

    ctx->pc = 0x1480e0u;

label_1480e0:
    // 0x1480e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1480e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1480e4:
    // 0x1480e4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1480e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1480e8:
    // 0x1480e8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1480e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1480ec:
    // 0x1480ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1480ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1480f0:
    // 0x1480f0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1480f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1480f4:
    // 0x1480f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1480f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1480f8:
    // 0x1480f8: 0x8e02b73c  lw          $v0, -0x48C4($s0)
    ctx->pc = 0x1480f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948668)));
label_1480fc:
    // 0x1480fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1480fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148100:
    // 0x148100: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x148100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_148104:
    // 0x148104: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x148104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_148108:
    // 0x148108: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x148108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_14810c:
    // 0x14810c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_148110:
    if (ctx->pc == 0x148110u) {
        ctx->pc = 0x148110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14810Cu;
        // 0x148110: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148114u;
        goto label_148114;
    }
    ctx->pc = 0x14810Cu;
    {
        const bool branch_taken_0x14810c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14810Cu;
        // 0x148110: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14810c) {
            ctx->pc = 0x1481E0u;
            goto label_1481e0;
        }
    }
    ctx->pc = 0x148114u;
label_148114:
    // 0x148114: 0xc051fc0  jal         func_147F00
label_148118:
    if (ctx->pc == 0x148118u) {
        ctx->pc = 0x14811Cu;
        goto label_14811c;
    }
    ctx->pc = 0x148114u;
    SET_GPR_U32(ctx, 31, 0x14811Cu);
    ctx->pc = 0x147F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F00u, 0x148114u, 0x14811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14811Cu;
label_14811c:
    // 0x14811c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14811cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_148120:
    // 0x148120: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
label_148124:
    if (ctx->pc == 0x148124u) {
        ctx->pc = 0x148124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148120u;
        // 0x148124: 0x8e05b73c  lw          $a1, -0x48C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948668)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148128u;
        goto label_148128;
    }
    ctx->pc = 0x148120u;
    {
        const bool branch_taken_0x148120 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x148124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148120u;
        // 0x148124: 0x8e05b73c  lw          $a1, -0x48C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148120) {
            ctx->pc = 0x1481E0u;
            goto label_1481e0;
        }
    }
    ctx->pc = 0x148128u;
label_148128:
    // 0x148128: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
label_14812c:
    if (ctx->pc == 0x14812Cu) {
        ctx->pc = 0x14812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148128u;
        // 0x14812c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148130u;
        goto label_148130;
    }
    ctx->pc = 0x148128u;
    {
        const bool branch_taken_0x148128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148128u;
        // 0x14812c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148128) {
            ctx->pc = 0x1481E0u;
            goto label_1481e0;
        }
    }
    ctx->pc = 0x148130u;
label_148130:
    // 0x148130: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x148130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_148134:
    // 0x148134: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x148134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_148138:
    // 0x148138: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x148138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_14813c:
    // 0x14813c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x14813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_148140:
    // 0x148140: 0x40f809  jalr        $v0
label_148144:
    if (ctx->pc == 0x148144u) {
        ctx->pc = 0x148144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148140u;
        // 0x148144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148148u;
        goto label_148148;
    }
    ctx->pc = 0x148140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148148u);
        ctx->pc = 0x148144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148140u;
        // 0x148144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148140u, 0x148148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148148u;
label_148148:
    // 0x148148: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_14814c:
    if (ctx->pc == 0x14814Cu) {
        ctx->pc = 0x14814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148148u;
        // 0x14814c: 0x8e502b04  lw          $s0, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148150u;
        goto label_148150;
    }
    ctx->pc = 0x148148u;
    {
        const bool branch_taken_0x148148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148148u;
        // 0x14814c: 0x8e502b04  lw          $s0, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148148) {
            ctx->pc = 0x1481E0u;
            goto label_1481e0;
        }
    }
    ctx->pc = 0x148150u;
label_148150:
    // 0x148150: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x148150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_148154:
    // 0x148154: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x148154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_148158:
    // 0x148158: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_14815c:
    // 0x14815c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x14815cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_148160:
    // 0x148160: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x148160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_148164:
    // 0x148164: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x148164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_148168:
    // 0x148168: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x148168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_14816c:
    // 0x14816c: 0x40f809  jalr        $v0
label_148170:
    if (ctx->pc == 0x148170u) {
        ctx->pc = 0x148170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14816Cu;
        // 0x148170: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148174u;
        goto label_148174;
    }
    ctx->pc = 0x14816Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148174u);
        ctx->pc = 0x148170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14816Cu;
        // 0x148170: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14816Cu, 0x148174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148174u;
label_148174:
    // 0x148174: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x148174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_148178:
    // 0x148178: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x148178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14817c:
    // 0x14817c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_148180:
    // 0x148180: 0x40f809  jalr        $v0
label_148184:
    if (ctx->pc == 0x148184u) {
        ctx->pc = 0x148184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148180u;
        // 0x148184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148188u;
        goto label_148188;
    }
    ctx->pc = 0x148180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148188u);
        ctx->pc = 0x148184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148180u;
        // 0x148184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148180u, 0x148188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148188u;
label_148188:
    // 0x148188: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x148188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_14818c:
    // 0x14818c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14818cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_148190:
    // 0x148190: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x148190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_148194:
    // 0x148194: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x148194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_148198:
    // 0x148198: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x148198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_14819c:
    // 0x14819c: 0x60f809  jalr        $v1
label_1481a0:
    if (ctx->pc == 0x1481A0u) {
        ctx->pc = 0x1481A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14819Cu;
        // 0x1481a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1481A4u;
        goto label_1481a4;
    }
    ctx->pc = 0x14819Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1481A4u);
        ctx->pc = 0x1481A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14819Cu;
        // 0x1481a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14819Cu, 0x1481A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1481A4u;
label_1481a4:
    // 0x1481a4: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x1481a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_1481a8:
    // 0x1481a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1481a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1481ac:
    // 0x1481ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1481acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1481b0:
    // 0x1481b0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1481b4:
    // 0x1481b4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1481b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1481b8:
    // 0x1481b8: 0x60f809  jalr        $v1
label_1481bc:
    if (ctx->pc == 0x1481BCu) {
        ctx->pc = 0x1481BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1481B8u;
        // 0x1481bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1481C0u;
        goto label_1481c0;
    }
    ctx->pc = 0x1481B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1481C0u);
        ctx->pc = 0x1481BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1481B8u;
        // 0x1481bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1481B8u, 0x1481C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1481C0u;
label_1481c0:
    // 0x1481c0: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x1481c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_1481c4:
    // 0x1481c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1481c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1481c8:
    // 0x1481c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1481c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1481cc:
    // 0x1481cc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1481ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1481d0:
    // 0x1481d0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1481d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1481d4:
    // 0x1481d4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1481d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1481d8:
    // 0x1481d8: 0x60f809  jalr        $v1
label_1481dc:
    if (ctx->pc == 0x1481DCu) {
        ctx->pc = 0x1481DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1481D8u;
        // 0x1481dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1481E0u;
        goto label_1481e0;
    }
    ctx->pc = 0x1481D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1481E0u);
        ctx->pc = 0x1481DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1481D8u;
        // 0x1481dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1481D8u, 0x1481E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1481E0u;
label_1481e0:
    // 0x1481e0: 0x92a2001e  lbu         $v0, 0x1E($s5)
    ctx->pc = 0x1481e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 30)));
label_1481e4:
    // 0x1481e4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1481e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1481e8:
    // 0x1481e8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1481e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1481ec:
    // 0x1481ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1481ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1481f0:
    // 0x1481f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1481f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1481f4:
    // 0x1481f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1481f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1481f8:
    // 0x1481f8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1481f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1481fc:
    // 0x1481fc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1481fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_148200:
    // 0x148200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_148204:
    // 0x148204: 0x3e00008  jr          $ra
label_148208:
    if (ctx->pc == 0x148208u) {
        ctx->pc = 0x148208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148204u;
        // 0x148208: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14820Cu;
        goto label_14820c;
    }
    ctx->pc = 0x148204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148204u;
        // 0x148208: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14820Cu;
label_14820c:
    // 0x14820c: 0x0  nop
    ctx->pc = 0x14820cu;
    // NOP
    ctx->pc = 0x148210u;
}
