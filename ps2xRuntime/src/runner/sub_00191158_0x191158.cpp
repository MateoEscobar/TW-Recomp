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

// Function: sub_00191158
// Address: 0x191158 - 0x191230
void sub_00191158_0x191158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191158_0x191158");
#endif

    switch (ctx->pc) {
        case 0x191158u: goto label_191158;
        case 0x19115cu: goto label_19115c;
        case 0x191160u: goto label_191160;
        case 0x191164u: goto label_191164;
        case 0x191168u: goto label_191168;
        case 0x19116cu: goto label_19116c;
        case 0x191170u: goto label_191170;
        case 0x191174u: goto label_191174;
        case 0x191178u: goto label_191178;
        case 0x19117cu: goto label_19117c;
        case 0x191180u: goto label_191180;
        case 0x191184u: goto label_191184;
        case 0x191188u: goto label_191188;
        case 0x19118cu: goto label_19118c;
        case 0x191190u: goto label_191190;
        case 0x191194u: goto label_191194;
        case 0x191198u: goto label_191198;
        case 0x19119cu: goto label_19119c;
        case 0x1911a0u: goto label_1911a0;
        case 0x1911a4u: goto label_1911a4;
        case 0x1911a8u: goto label_1911a8;
        case 0x1911acu: goto label_1911ac;
        case 0x1911b0u: goto label_1911b0;
        case 0x1911b4u: goto label_1911b4;
        case 0x1911b8u: goto label_1911b8;
        case 0x1911bcu: goto label_1911bc;
        case 0x1911c0u: goto label_1911c0;
        case 0x1911c4u: goto label_1911c4;
        case 0x1911c8u: goto label_1911c8;
        case 0x1911ccu: goto label_1911cc;
        case 0x1911d0u: goto label_1911d0;
        case 0x1911d4u: goto label_1911d4;
        case 0x1911d8u: goto label_1911d8;
        case 0x1911dcu: goto label_1911dc;
        case 0x1911e0u: goto label_1911e0;
        case 0x1911e4u: goto label_1911e4;
        case 0x1911e8u: goto label_1911e8;
        case 0x1911ecu: goto label_1911ec;
        case 0x1911f0u: goto label_1911f0;
        case 0x1911f4u: goto label_1911f4;
        case 0x1911f8u: goto label_1911f8;
        case 0x1911fcu: goto label_1911fc;
        case 0x191200u: goto label_191200;
        case 0x191204u: goto label_191204;
        case 0x191208u: goto label_191208;
        case 0x19120cu: goto label_19120c;
        case 0x191210u: goto label_191210;
        case 0x191214u: goto label_191214;
        case 0x191218u: goto label_191218;
        case 0x19121cu: goto label_19121c;
        case 0x191220u: goto label_191220;
        case 0x191224u: goto label_191224;
        case 0x191228u: goto label_191228;
        case 0x19122cu: goto label_19122c;
        default: break;
    }

    ctx->pc = 0x191158u;

label_191158:
    // 0x191158: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x191158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19115c:
    // 0x19115c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_191160:
    // 0x191160: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x191160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_191164:
    // 0x191164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x191164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191168:
    // 0x191168: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x191168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_19116c:
    // 0x19116c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x19116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_191170:
    // 0x191170: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x191170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_191174:
    // 0x191174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191178:
    // 0x191178: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x191178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19117c:
    // 0x19117c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_191180:
    if (ctx->pc == 0x191180u) {
        ctx->pc = 0x191180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19117Cu;
        // 0x191180: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191184u;
        goto label_191184;
    }
    ctx->pc = 0x19117Cu;
    {
        const bool branch_taken_0x19117c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19117Cu;
        // 0x191180: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19117c) {
            ctx->pc = 0x19118Cu;
            goto label_19118c;
        }
    }
    ctx->pc = 0x191184u;
label_191184:
    // 0x191184: 0x10000021  b           . + 4 + (0x21 << 2)
label_191188:
    if (ctx->pc == 0x191188u) {
        ctx->pc = 0x191188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191184u;
        // 0x191188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19118Cu;
        goto label_19118c;
    }
    ctx->pc = 0x191184u;
    {
        const bool branch_taken_0x191184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191184u;
        // 0x191188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191184) {
            ctx->pc = 0x19120Cu;
            goto label_19120c;
        }
    }
    ctx->pc = 0x19118Cu;
label_19118c:
    // 0x19118c: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x19118cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_191190:
    // 0x191190: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_191194:
    // 0x191194: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x191194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191198:
    // 0x191198: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x191198u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_19119c:
    // 0x19119c: 0x265100f4  addiu       $s1, $s2, 0xF4
    ctx->pc = 0x19119cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 244));
label_1911a0:
    // 0x1911a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1911a4:
    // 0x1911a4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1911a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1911a8:
    // 0x1911a8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1911a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1911ac:
    // 0x1911ac: 0x60f809  jalr        $v1
label_1911b0:
    if (ctx->pc == 0x1911B0u) {
        ctx->pc = 0x1911B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911ACu;
        // 0x1911b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911B4u;
        goto label_1911b4;
    }
    ctx->pc = 0x1911ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1911B4u);
        ctx->pc = 0x1911B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911ACu;
        // 0x1911b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1911ACu, 0x1911B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1911B4u;
label_1911b4:
    // 0x1911b4: 0xc11a4fc  jal         func_4693F0
label_1911b8:
    if (ctx->pc == 0x1911B8u) {
        ctx->pc = 0x1911B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911B4u;
        // 0x1911b8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911BCu;
        goto label_1911bc;
    }
    ctx->pc = 0x1911B4u;
    SET_GPR_U32(ctx, 31, 0x1911BCu);
    ctx->pc = 0x1911B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911B4u;
    // 0x1911b8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x1911B4u, 0x1911BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911BCu;
label_1911bc:
    // 0x1911bc: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1911c0:
    // 0x1911c0: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x1911c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1911c4:
    // 0x1911c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1911c8:
    // 0x1911c8: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1911cc:
    // 0x1911cc: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1911d0:
    // 0x1911d0: 0x60f809  jalr        $v1
label_1911d4:
    if (ctx->pc == 0x1911D4u) {
        ctx->pc = 0x1911D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911D0u;
        // 0x1911d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911D8u;
        goto label_1911d8;
    }
    ctx->pc = 0x1911D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1911D8u);
        ctx->pc = 0x1911D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911D0u;
        // 0x1911d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1911D0u, 0x1911D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1911D8u;
label_1911d8:
    // 0x1911d8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1911d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1911dc:
    // 0x1911dc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1911dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1911e0:
    // 0x1911e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1911e4:
    // 0x1911e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1911e8:
    if (ctx->pc == 0x1911E8u) {
        ctx->pc = 0x1911E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911E4u;
        // 0x1911e8: 0x26853278  addiu       $a1, $s4, 0x3278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911ECu;
        goto label_1911ec;
    }
    ctx->pc = 0x1911E4u;
    {
        const bool branch_taken_0x1911e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911E4u;
        // 0x1911e8: 0x26853278  addiu       $a1, $s4, 0x3278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911e4) {
            ctx->pc = 0x1911F8u;
            goto label_1911f8;
        }
    }
    ctx->pc = 0x1911ECu;
label_1911ec:
    // 0x1911ec: 0xc138de0  jal         func_4E3780
label_1911f0:
    if (ctx->pc == 0x1911F0u) {
        ctx->pc = 0x1911F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911ECu;
        // 0x1911f0: 0x240601d4  addiu       $a2, $zero, 0x1D4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911F4u;
        goto label_1911f4;
    }
    ctx->pc = 0x1911ECu;
    SET_GPR_U32(ctx, 31, 0x1911F4u);
    ctx->pc = 0x1911F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911ECu;
    // 0x1911f0: 0x240601d4  addiu       $a2, $zero, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3780u, 0x1911ECu, 0x1911F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911F4u;
label_1911f4:
    // 0x1911f4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1911f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1911f8:
    // 0x1911f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1911f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1911fc:
    // 0x1911fc: 0x1260fff8  beqz        $s3, . + 4 + (-0x8 << 2)
label_191200:
    if (ctx->pc == 0x191200u) {
        ctx->pc = 0x191200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911FCu;
        // 0x191200: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191204u;
        goto label_191204;
    }
    ctx->pc = 0x1911FCu;
    {
        const bool branch_taken_0x1911fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911FCu;
        // 0x191200: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911fc) {
            ctx->pc = 0x1911E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1911e0;
        }
    }
    ctx->pc = 0x191204u;
label_191204:
    // 0x191204: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x191204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_191208:
    // 0x191208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19120c:
    // 0x19120c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19120cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_191210:
    // 0x191210: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x191210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_191214:
    // 0x191214: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x191214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_191218:
    // 0x191218: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x191218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19121c:
    // 0x19121c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x19121cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_191220:
    // 0x191220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191224:
    // 0x191224: 0x3e00008  jr          $ra
label_191228:
    if (ctx->pc == 0x191228u) {
        ctx->pc = 0x191228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191224u;
        // 0x191228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19122Cu;
        goto label_19122c;
    }
    ctx->pc = 0x191224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191224u;
        // 0x191228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19122Cu;
label_19122c:
    // 0x19122c: 0x0  nop
    ctx->pc = 0x19122cu;
    // NOP
    ctx->pc = 0x191230u;
}
