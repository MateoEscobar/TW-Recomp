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

// Function: sub_0046D120
// Address: 0x46d120 - 0x46d238
void sub_0046D120_0x46d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D120_0x46d120");
#endif

    switch (ctx->pc) {
        case 0x46d120u: goto label_46d120;
        case 0x46d124u: goto label_46d124;
        case 0x46d128u: goto label_46d128;
        case 0x46d12cu: goto label_46d12c;
        case 0x46d130u: goto label_46d130;
        case 0x46d134u: goto label_46d134;
        case 0x46d138u: goto label_46d138;
        case 0x46d13cu: goto label_46d13c;
        case 0x46d140u: goto label_46d140;
        case 0x46d144u: goto label_46d144;
        case 0x46d148u: goto label_46d148;
        case 0x46d14cu: goto label_46d14c;
        case 0x46d150u: goto label_46d150;
        case 0x46d154u: goto label_46d154;
        case 0x46d158u: goto label_46d158;
        case 0x46d15cu: goto label_46d15c;
        case 0x46d160u: goto label_46d160;
        case 0x46d164u: goto label_46d164;
        case 0x46d168u: goto label_46d168;
        case 0x46d16cu: goto label_46d16c;
        case 0x46d170u: goto label_46d170;
        case 0x46d174u: goto label_46d174;
        case 0x46d178u: goto label_46d178;
        case 0x46d17cu: goto label_46d17c;
        case 0x46d180u: goto label_46d180;
        case 0x46d184u: goto label_46d184;
        case 0x46d188u: goto label_46d188;
        case 0x46d18cu: goto label_46d18c;
        case 0x46d190u: goto label_46d190;
        case 0x46d194u: goto label_46d194;
        case 0x46d198u: goto label_46d198;
        case 0x46d19cu: goto label_46d19c;
        case 0x46d1a0u: goto label_46d1a0;
        case 0x46d1a4u: goto label_46d1a4;
        case 0x46d1a8u: goto label_46d1a8;
        case 0x46d1acu: goto label_46d1ac;
        case 0x46d1b0u: goto label_46d1b0;
        case 0x46d1b4u: goto label_46d1b4;
        case 0x46d1b8u: goto label_46d1b8;
        case 0x46d1bcu: goto label_46d1bc;
        case 0x46d1c0u: goto label_46d1c0;
        case 0x46d1c4u: goto label_46d1c4;
        case 0x46d1c8u: goto label_46d1c8;
        case 0x46d1ccu: goto label_46d1cc;
        case 0x46d1d0u: goto label_46d1d0;
        case 0x46d1d4u: goto label_46d1d4;
        case 0x46d1d8u: goto label_46d1d8;
        case 0x46d1dcu: goto label_46d1dc;
        case 0x46d1e0u: goto label_46d1e0;
        case 0x46d1e4u: goto label_46d1e4;
        case 0x46d1e8u: goto label_46d1e8;
        case 0x46d1ecu: goto label_46d1ec;
        case 0x46d1f0u: goto label_46d1f0;
        case 0x46d1f4u: goto label_46d1f4;
        case 0x46d1f8u: goto label_46d1f8;
        case 0x46d1fcu: goto label_46d1fc;
        case 0x46d200u: goto label_46d200;
        case 0x46d204u: goto label_46d204;
        case 0x46d208u: goto label_46d208;
        case 0x46d20cu: goto label_46d20c;
        case 0x46d210u: goto label_46d210;
        case 0x46d214u: goto label_46d214;
        case 0x46d218u: goto label_46d218;
        case 0x46d21cu: goto label_46d21c;
        case 0x46d220u: goto label_46d220;
        case 0x46d224u: goto label_46d224;
        case 0x46d228u: goto label_46d228;
        case 0x46d22cu: goto label_46d22c;
        case 0x46d230u: goto label_46d230;
        case 0x46d234u: goto label_46d234;
        default: break;
    }

    ctx->pc = 0x46d120u;

label_46d120:
    // 0x46d120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46d120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_46d124:
    // 0x46d124: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x46d124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_46d128:
    // 0x46d128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46d128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46d12c:
    // 0x46d12c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46d12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46d130:
    // 0x46d130: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x46d130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_46d134:
    // 0x46d134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46d138:
    // 0x46d138: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x46d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46d13c:
    // 0x46d13c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x46d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46d140:
    // 0x46d140: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x46d140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_46d144:
    // 0x46d144: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_46d148:
    if (ctx->pc == 0x46D148u) {
        ctx->pc = 0x46D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D144u;
        // 0x46d148: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D14Cu;
        goto label_46d14c;
    }
    ctx->pc = 0x46D144u;
    {
        const bool branch_taken_0x46d144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D144u;
        // 0x46d148: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d144) {
            ctx->pc = 0x46D160u;
            goto label_46d160;
        }
    }
    ctx->pc = 0x46D14Cu;
label_46d14c:
    // 0x46d14c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x46d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46d150:
    // 0x46d150: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x46d150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46d154:
    // 0x46d154: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x46d154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46d158:
    // 0x46d158: 0x1000001f  b           . + 4 + (0x1F << 2)
label_46d15c:
    if (ctx->pc == 0x46D15Cu) {
        ctx->pc = 0x46D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D158u;
        // 0x46d15c: 0xac920000  sw          $s2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D160u;
        goto label_46d160;
    }
    ctx->pc = 0x46D158u;
    {
        const bool branch_taken_0x46d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D158u;
        // 0x46d15c: 0xac920000  sw          $s2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d158) {
            ctx->pc = 0x46D1D8u;
            goto label_46d1d8;
        }
    }
    ctx->pc = 0x46D160u;
label_46d160:
    // 0x46d160: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x46d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_46d164:
    // 0x46d164: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46d164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46d168:
    // 0x46d168: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_46d16c:
    if (ctx->pc == 0x46D16Cu) {
        ctx->pc = 0x46D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D168u;
        // 0x46d16c: 0x28880  sll         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D170u;
        goto label_46d170;
    }
    ctx->pc = 0x46D168u;
    {
        const bool branch_taken_0x46d168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D168u;
        // 0x46d16c: 0x28880  sll         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d168) {
            ctx->pc = 0x46D190u;
            goto label_46d190;
        }
    }
    ctx->pc = 0x46D170u;
label_46d170:
    // 0x46d170: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46d170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46d174:
    // 0x46d174: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x46d174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_46d178:
    // 0x46d178: 0x8c62ae28  lw          $v0, -0x51D8($v1)
    ctx->pc = 0x46d178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946344)));
label_46d17c:
    // 0x46d17c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46d17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46d180:
    // 0x46d180: 0x40f809  jalr        $v0
label_46d184:
    if (ctx->pc == 0x46D184u) {
        ctx->pc = 0x46D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D180u;
        // 0x46d184: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D188u;
        goto label_46d188;
    }
    ctx->pc = 0x46D180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46D188u);
        ctx->pc = 0x46D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D180u;
        // 0x46d184: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D180u, 0x46D188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D188u;
label_46d188:
    // 0x46d188: 0x10000008  b           . + 4 + (0x8 << 2)
label_46d18c:
    if (ctx->pc == 0x46D18Cu) {
        ctx->pc = 0x46D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D188u;
        // 0x46d18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D190u;
        goto label_46d190;
    }
    ctx->pc = 0x46D188u;
    {
        const bool branch_taken_0x46d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D188u;
        // 0x46d18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d188) {
            ctx->pc = 0x46D1ACu;
            goto label_46d1ac;
        }
    }
    ctx->pc = 0x46D190u;
label_46d190:
    // 0x46d190: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46d190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46d194:
    // 0x46d194: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x46d194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_46d198:
    // 0x46d198: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x46d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_46d19c:
    // 0x46d19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46d1a0:
    // 0x46d1a0: 0x40f809  jalr        $v0
label_46d1a4:
    if (ctx->pc == 0x46D1A4u) {
        ctx->pc = 0x46D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D1A0u;
        // 0x46d1a4: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D1A8u;
        goto label_46d1a8;
    }
    ctx->pc = 0x46D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46D1A8u);
        ctx->pc = 0x46D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D1A0u;
        // 0x46d1a4: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D1A0u, 0x46D1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D1A8u;
label_46d1a8:
    // 0x46d1a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46d1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46d1ac:
    // 0x46d1ac: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_46d1b0:
    if (ctx->pc == 0x46D1B0u) {
        ctx->pc = 0x46D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D1ACu;
        // 0x46d1b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D1B4u;
        goto label_46d1b4;
    }
    ctx->pc = 0x46D1ACu;
    {
        const bool branch_taken_0x46d1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D1ACu;
        // 0x46d1b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d1ac) {
            ctx->pc = 0x46D1F4u;
            goto label_46d1f4;
        }
    }
    ctx->pc = 0x46D1B4u;
label_46d1b4:
    // 0x46d1b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x46d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46d1b8:
    // 0x46d1b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46d1bc:
    // 0x46d1bc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x46d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_46d1c0:
    // 0x46d1c0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x46d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_46d1c4:
    // 0x46d1c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46d1c8:
    // 0x46d1c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x46d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_46d1cc:
    // 0x46d1cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46d1d0:
    // 0x46d1d0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x46d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_46d1d4:
    // 0x46d1d4: 0x0  nop
    ctx->pc = 0x46d1d4u;
    // NOP
label_46d1d8:
    // 0x46d1d8: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x46d1d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_46d1dc:
    // 0x46d1dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46d1e0:
    // 0x46d1e0: 0xa6420018  sh          $v0, 0x18($s2)
    ctx->pc = 0x46d1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 2));
label_46d1e4:
    // 0x46d1e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46d1e8:
    // 0x46d1e8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x46d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46d1ec:
    // 0x46d1ec: 0x1000000a  b           . + 4 + (0xA << 2)
label_46d1f0:
    if (ctx->pc == 0x46D1F0u) {
        ctx->pc = 0x46D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D1ECu;
        // 0x46d1f0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D1F4u;
        goto label_46d1f4;
    }
    ctx->pc = 0x46D1ECu;
    {
        const bool branch_taken_0x46d1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D1ECu;
        // 0x46d1f0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d1ec) {
            ctx->pc = 0x46D218u;
            goto label_46d218;
        }
    }
    ctx->pc = 0x46D1F4u;
label_46d1f4:
    // 0x46d1f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46d1f8:
    // 0x46d1f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x46d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_46d1fc:
    // 0x46d1fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46d1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46d200:
    // 0x46d200: 0xc11eff2  jal         func_47BFC8
label_46d204:
    if (ctx->pc == 0x46D204u) {
        ctx->pc = 0x46D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D200u;
        // 0x46d204: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D208u;
        goto label_46d208;
    }
    ctx->pc = 0x46D200u;
    SET_GPR_U32(ctx, 31, 0x46D208u);
    ctx->pc = 0x46D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D200u;
    // 0x46d204: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46D200u, 0x46D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D208u;
label_46d208:
    // 0x46d208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46d208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46d20c:
    // 0x46d20c: 0xc11f024  jal         func_47C090
label_46d210:
    if (ctx->pc == 0x46D210u) {
        ctx->pc = 0x46D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D20Cu;
        // 0x46d210: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D214u;
        goto label_46d214;
    }
    ctx->pc = 0x46D20Cu;
    SET_GPR_U32(ctx, 31, 0x46D214u);
    ctx->pc = 0x46D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D20Cu;
    // 0x46d210: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46D20Cu, 0x46D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D214u;
label_46d214:
    // 0x46d214: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x46d214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46d218:
    // 0x46d218: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x46d218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46d21c:
    // 0x46d21c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x46d21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46d220:
    // 0x46d220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46d220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46d224:
    // 0x46d224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46d224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46d228:
    // 0x46d228: 0x3e00008  jr          $ra
label_46d22c:
    if (ctx->pc == 0x46D22Cu) {
        ctx->pc = 0x46D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D228u;
        // 0x46d22c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D230u;
        goto label_46d230;
    }
    ctx->pc = 0x46D228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D228u;
        // 0x46d22c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D230u;
label_46d230:
    // 0x46d230: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_46d234:
    // 0x46d234: 0x0  nop
    ctx->pc = 0x46d234u;
    // NOP
    ctx->pc = 0x46d238u;
}
