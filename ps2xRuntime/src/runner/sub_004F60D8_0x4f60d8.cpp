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

// Function: sub_004F60D8
// Address: 0x4f60d8 - 0x4f61b0
void sub_004F60D8_0x4f60d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F60D8_0x4f60d8");
#endif

    switch (ctx->pc) {
        case 0x4f60d8u: goto label_4f60d8;
        case 0x4f60dcu: goto label_4f60dc;
        case 0x4f60e0u: goto label_4f60e0;
        case 0x4f60e4u: goto label_4f60e4;
        case 0x4f60e8u: goto label_4f60e8;
        case 0x4f60ecu: goto label_4f60ec;
        case 0x4f60f0u: goto label_4f60f0;
        case 0x4f60f4u: goto label_4f60f4;
        case 0x4f60f8u: goto label_4f60f8;
        case 0x4f60fcu: goto label_4f60fc;
        case 0x4f6100u: goto label_4f6100;
        case 0x4f6104u: goto label_4f6104;
        case 0x4f6108u: goto label_4f6108;
        case 0x4f610cu: goto label_4f610c;
        case 0x4f6110u: goto label_4f6110;
        case 0x4f6114u: goto label_4f6114;
        case 0x4f6118u: goto label_4f6118;
        case 0x4f611cu: goto label_4f611c;
        case 0x4f6120u: goto label_4f6120;
        case 0x4f6124u: goto label_4f6124;
        case 0x4f6128u: goto label_4f6128;
        case 0x4f612cu: goto label_4f612c;
        case 0x4f6130u: goto label_4f6130;
        case 0x4f6134u: goto label_4f6134;
        case 0x4f6138u: goto label_4f6138;
        case 0x4f613cu: goto label_4f613c;
        case 0x4f6140u: goto label_4f6140;
        case 0x4f6144u: goto label_4f6144;
        case 0x4f6148u: goto label_4f6148;
        case 0x4f614cu: goto label_4f614c;
        case 0x4f6150u: goto label_4f6150;
        case 0x4f6154u: goto label_4f6154;
        case 0x4f6158u: goto label_4f6158;
        case 0x4f615cu: goto label_4f615c;
        case 0x4f6160u: goto label_4f6160;
        case 0x4f6164u: goto label_4f6164;
        case 0x4f6168u: goto label_4f6168;
        case 0x4f616cu: goto label_4f616c;
        case 0x4f6170u: goto label_4f6170;
        case 0x4f6174u: goto label_4f6174;
        case 0x4f6178u: goto label_4f6178;
        case 0x4f617cu: goto label_4f617c;
        case 0x4f6180u: goto label_4f6180;
        case 0x4f6184u: goto label_4f6184;
        case 0x4f6188u: goto label_4f6188;
        case 0x4f618cu: goto label_4f618c;
        case 0x4f6190u: goto label_4f6190;
        case 0x4f6194u: goto label_4f6194;
        case 0x4f6198u: goto label_4f6198;
        case 0x4f619cu: goto label_4f619c;
        case 0x4f61a0u: goto label_4f61a0;
        case 0x4f61a4u: goto label_4f61a4;
        case 0x4f61a8u: goto label_4f61a8;
        case 0x4f61acu: goto label_4f61ac;
        default: break;
    }

    ctx->pc = 0x4f60d8u;

label_4f60d8:
    // 0x4f60d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f60d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f60dc:
    // 0x4f60dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f60dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f60e0:
    // 0x4f60e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4f60e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4f60e4:
    // 0x4f60e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f60e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f60e8:
    // 0x4f60e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4f60e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4f60ec:
    // 0x4f60ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f60ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f60f0:
    // 0x4f60f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4f60f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4f60f4:
    // 0x4f60f4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4f60f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f60f8:
    // 0x4f60f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4f60f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4f60fc:
    // 0x4f60fc: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_4f6100:
    if (ctx->pc == 0x4F6100u) {
        ctx->pc = 0x4F6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F60FCu;
        // 0x4f6100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F6104u;
        goto label_4f6104;
    }
    ctx->pc = 0x4F60FCu;
    {
        const bool branch_taken_0x4f60fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F60FCu;
        // 0x4f6100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f60fc) {
            ctx->pc = 0x4F618Cu;
            goto label_4f618c;
        }
    }
    ctx->pc = 0x4F6104u;
label_4f6104:
    // 0x4f6104: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x4f6104u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_4f6108:
    // 0x4f6108: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x4f6108u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_4f610c:
    // 0x4f610c: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x4f610cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_4f6110:
    // 0x4f6110: 0x261092c8  addiu       $s0, $s0, -0x6D38
    ctx->pc = 0x4f6110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939336));
label_4f6114:
    // 0x4f6114: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4f6114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f6118:
    // 0x4f6118: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f6118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f611c:
    // 0x4f611c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f6120:
    // 0x4f6120: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x4f6120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_4f6124:
    // 0x4f6124: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f6124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f6128:
    // 0x4f6128: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f6128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f612c:
    // 0x4f612c: 0x60f809  jalr        $v1
label_4f6130:
    if (ctx->pc == 0x4F6130u) {
        ctx->pc = 0x4F6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F612Cu;
        // 0x4f6130: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F6134u;
        goto label_4f6134;
    }
    ctx->pc = 0x4F612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F6134u);
        ctx->pc = 0x4F6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F612Cu;
        // 0x4f6130: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F612Cu, 0x4F6134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F6134u;
label_4f6134:
    // 0x4f6134: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4f6134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4f6138:
    // 0x4f6138: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f6138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f613c:
    // 0x4f613c: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x4f613cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_4f6140:
    // 0x4f6140: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x4f6140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_4f6144:
    // 0x4f6144: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4f6144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f6148:
    // 0x4f6148: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f6148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f614c:
    // 0x4f614c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f614cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f6150:
    // 0x4f6150: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f6150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f6154:
    // 0x4f6154: 0x60f809  jalr        $v1
label_4f6158:
    if (ctx->pc == 0x4F6158u) {
        ctx->pc = 0x4F6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6154u;
        // 0x4f6158: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F615Cu;
        goto label_4f615c;
    }
    ctx->pc = 0x4F6154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F615Cu);
        ctx->pc = 0x4F6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6154u;
        // 0x4f6158: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6154u, 0x4F615Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F615Cu;
label_4f615c:
    // 0x4f615c: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x4f615cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_4f6160:
    // 0x4f6160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f6160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f6164:
    // 0x4f6164: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4f6164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_4f6168:
    // 0x4f6168: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4f6168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f616c:
    // 0x4f616c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x4f616cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_4f6170:
    // 0x4f6170: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4f6170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f6174:
    // 0x4f6174: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x4f6174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_4f6178:
    // 0x4f6178: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f6178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f617c:
    // 0x4f617c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f617cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f6180:
    // 0x4f6180: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f6180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f6184:
    // 0x4f6184: 0x60f809  jalr        $v1
label_4f6188:
    if (ctx->pc == 0x4F6188u) {
        ctx->pc = 0x4F6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6184u;
        // 0x4f6188: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F618Cu;
        goto label_4f618c;
    }
    ctx->pc = 0x4F6184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F618Cu);
        ctx->pc = 0x4F6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6184u;
        // 0x4f6188: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6184u, 0x4F618Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F618Cu;
label_4f618c:
    // 0x4f618c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4f618cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f6190:
    // 0x4f6190: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4f6190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f6194:
    // 0x4f6194: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f6194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f6198:
    // 0x4f6198: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4f6198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f619c:
    // 0x4f619c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4f619cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f61a0:
    // 0x4f61a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f61a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f61a4:
    // 0x4f61a4: 0x3e00008  jr          $ra
label_4f61a8:
    if (ctx->pc == 0x4F61A8u) {
        ctx->pc = 0x4F61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F61A4u;
        // 0x4f61a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F61ACu;
        goto label_4f61ac;
    }
    ctx->pc = 0x4F61A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F61A4u;
        // 0x4f61a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F61A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F61ACu;
label_4f61ac:
    // 0x4f61ac: 0x0  nop
    ctx->pc = 0x4f61acu;
    // NOP
    ctx->pc = 0x4f61b0u;
}
