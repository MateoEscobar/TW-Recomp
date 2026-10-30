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

// Function: sub_0030C0D0
// Address: 0x30c0d0 - 0x30c284
void sub_0030C0D0_0x30c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C0D0_0x30c0d0");
#endif

    switch (ctx->pc) {
        case 0x30c0d0u: goto label_30c0d0;
        case 0x30c0d4u: goto label_30c0d4;
        case 0x30c0d8u: goto label_30c0d8;
        case 0x30c0dcu: goto label_30c0dc;
        case 0x30c0e0u: goto label_30c0e0;
        case 0x30c0e4u: goto label_30c0e4;
        case 0x30c0e8u: goto label_30c0e8;
        case 0x30c0ecu: goto label_30c0ec;
        case 0x30c0f0u: goto label_30c0f0;
        case 0x30c0f4u: goto label_30c0f4;
        case 0x30c0f8u: goto label_30c0f8;
        case 0x30c0fcu: goto label_30c0fc;
        case 0x30c100u: goto label_30c100;
        case 0x30c104u: goto label_30c104;
        case 0x30c108u: goto label_30c108;
        case 0x30c10cu: goto label_30c10c;
        case 0x30c110u: goto label_30c110;
        case 0x30c114u: goto label_30c114;
        case 0x30c118u: goto label_30c118;
        case 0x30c11cu: goto label_30c11c;
        case 0x30c120u: goto label_30c120;
        case 0x30c124u: goto label_30c124;
        case 0x30c128u: goto label_30c128;
        case 0x30c12cu: goto label_30c12c;
        case 0x30c130u: goto label_30c130;
        case 0x30c134u: goto label_30c134;
        case 0x30c138u: goto label_30c138;
        case 0x30c13cu: goto label_30c13c;
        case 0x30c140u: goto label_30c140;
        case 0x30c144u: goto label_30c144;
        case 0x30c148u: goto label_30c148;
        case 0x30c14cu: goto label_30c14c;
        case 0x30c150u: goto label_30c150;
        case 0x30c154u: goto label_30c154;
        case 0x30c158u: goto label_30c158;
        case 0x30c15cu: goto label_30c15c;
        case 0x30c160u: goto label_30c160;
        case 0x30c164u: goto label_30c164;
        case 0x30c168u: goto label_30c168;
        case 0x30c16cu: goto label_30c16c;
        case 0x30c170u: goto label_30c170;
        case 0x30c174u: goto label_30c174;
        case 0x30c178u: goto label_30c178;
        case 0x30c17cu: goto label_30c17c;
        case 0x30c180u: goto label_30c180;
        case 0x30c184u: goto label_30c184;
        case 0x30c188u: goto label_30c188;
        case 0x30c18cu: goto label_30c18c;
        case 0x30c190u: goto label_30c190;
        case 0x30c194u: goto label_30c194;
        case 0x30c198u: goto label_30c198;
        case 0x30c19cu: goto label_30c19c;
        case 0x30c1a0u: goto label_30c1a0;
        case 0x30c1a4u: goto label_30c1a4;
        case 0x30c1a8u: goto label_30c1a8;
        case 0x30c1acu: goto label_30c1ac;
        case 0x30c1b0u: goto label_30c1b0;
        case 0x30c1b4u: goto label_30c1b4;
        case 0x30c1b8u: goto label_30c1b8;
        case 0x30c1bcu: goto label_30c1bc;
        case 0x30c1c0u: goto label_30c1c0;
        case 0x30c1c4u: goto label_30c1c4;
        case 0x30c1c8u: goto label_30c1c8;
        case 0x30c1ccu: goto label_30c1cc;
        case 0x30c1d0u: goto label_30c1d0;
        case 0x30c1d4u: goto label_30c1d4;
        case 0x30c1d8u: goto label_30c1d8;
        case 0x30c1dcu: goto label_30c1dc;
        case 0x30c1e0u: goto label_30c1e0;
        case 0x30c1e4u: goto label_30c1e4;
        case 0x30c1e8u: goto label_30c1e8;
        case 0x30c1ecu: goto label_30c1ec;
        case 0x30c1f0u: goto label_30c1f0;
        case 0x30c1f4u: goto label_30c1f4;
        case 0x30c1f8u: goto label_30c1f8;
        case 0x30c1fcu: goto label_30c1fc;
        case 0x30c200u: goto label_30c200;
        case 0x30c204u: goto label_30c204;
        case 0x30c208u: goto label_30c208;
        case 0x30c20cu: goto label_30c20c;
        case 0x30c210u: goto label_30c210;
        case 0x30c214u: goto label_30c214;
        case 0x30c218u: goto label_30c218;
        case 0x30c21cu: goto label_30c21c;
        case 0x30c220u: goto label_30c220;
        case 0x30c224u: goto label_30c224;
        case 0x30c228u: goto label_30c228;
        case 0x30c22cu: goto label_30c22c;
        case 0x30c230u: goto label_30c230;
        case 0x30c234u: goto label_30c234;
        case 0x30c238u: goto label_30c238;
        case 0x30c23cu: goto label_30c23c;
        case 0x30c240u: goto label_30c240;
        case 0x30c244u: goto label_30c244;
        case 0x30c248u: goto label_30c248;
        case 0x30c24cu: goto label_30c24c;
        case 0x30c250u: goto label_30c250;
        case 0x30c254u: goto label_30c254;
        case 0x30c258u: goto label_30c258;
        case 0x30c25cu: goto label_30c25c;
        case 0x30c260u: goto label_30c260;
        case 0x30c264u: goto label_30c264;
        case 0x30c268u: goto label_30c268;
        case 0x30c26cu: goto label_30c26c;
        case 0x30c270u: goto label_30c270;
        case 0x30c274u: goto label_30c274;
        case 0x30c278u: goto label_30c278;
        case 0x30c27cu: goto label_30c27c;
        case 0x30c280u: goto label_30c280;
        default: break;
    }

    ctx->pc = 0x30c0d0u;

label_30c0d0:
    // 0x30c0d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30c0d4:
    // 0x30c0d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30c0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_30c0d8:
    // 0x30c0d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30c0dc:
    // 0x30c0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30c0e0:
    // 0x30c0e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30c0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_30c0e4:
    // 0x30c0e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30c0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_30c0e8:
    // 0x30c0e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30c0e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30c0ec:
    // 0x30c0ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30c0f0:
    // 0x30c0f0: 0xc08a61a  jal         func_229868
label_30c0f4:
    if (ctx->pc == 0x30C0F4u) {
        ctx->pc = 0x30C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0F0u;
        // 0x30c0f4: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C0F8u;
        goto label_30c0f8;
    }
    ctx->pc = 0x30C0F0u;
    SET_GPR_U32(ctx, 31, 0x30C0F8u);
    ctx->pc = 0x30C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C0F0u;
    // 0x30c0f4: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30C0F0u, 0x30C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C0F8u;
label_30c0f8:
    // 0x30c0f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30c0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c0fc:
    // 0x30c0fc: 0x12400062  beqz        $s2, . + 4 + (0x62 << 2)
label_30c100:
    if (ctx->pc == 0x30C100u) {
        ctx->pc = 0x30C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0FCu;
        // 0x30c100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C104u;
        goto label_30c104;
    }
    ctx->pc = 0x30C0FCu;
    {
        const bool branch_taken_0x30c0fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0FCu;
        // 0x30c100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0fc) {
            ctx->pc = 0x30C288u;
            return;
        }
    }
    ctx->pc = 0x30C104u;
label_30c104:
    // 0x30c104: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x30c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_30c108:
    // 0x30c108: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x30c108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30c10c:
    // 0x30c10c: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x30c10cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_30c110:
    // 0x30c110: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_30c114:
    if (ctx->pc == 0x30C114u) {
        ctx->pc = 0x30C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C110u;
        // 0x30c114: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C118u;
        goto label_30c118;
    }
    ctx->pc = 0x30C110u;
    {
        const bool branch_taken_0x30c110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C110u;
        // 0x30c114: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c110) {
            ctx->pc = 0x30C284u;
            return;
        }
    }
    ctx->pc = 0x30C118u;
label_30c118:
    // 0x30c118: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30c118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30c11c:
    // 0x30c11c: 0x2442c050  addiu       $v0, $v0, -0x3FB0
    ctx->pc = 0x30c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950992));
label_30c120:
    // 0x30c120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30c124:
    // 0x30c124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30c128:
    // 0x30c128: 0x800008  jr          $a0
label_30c12c:
    if (ctx->pc == 0x30C12Cu) {
        ctx->pc = 0x30C130u;
        goto label_30c130;
    }
    ctx->pc = 0x30C128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30C130u: goto label_30c130;
            case 0x30C144u: goto label_30c144;
            case 0x30C154u: goto label_30c154;
            case 0x30C190u: goto label_30c190;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C128u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30C130u;
label_30c130:
    // 0x30c130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30c134:
    // 0x30c134: 0xc0c2fa4  jal         func_30BE90
label_30c138:
    if (ctx->pc == 0x30C138u) {
        ctx->pc = 0x30C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C134u;
        // 0x30c138: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C13Cu;
        goto label_30c13c;
    }
    ctx->pc = 0x30C134u;
    SET_GPR_U32(ctx, 31, 0x30C13Cu);
    ctx->pc = 0x30C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C134u;
    // 0x30c138: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BE90u, 0x30C134u, 0x30C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C13Cu;
label_30c13c:
    // 0x30c13c: 0x10000052  b           . + 4 + (0x52 << 2)
label_30c140:
    if (ctx->pc == 0x30C140u) {
        ctx->pc = 0x30C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C13Cu;
        // 0x30c140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C144u;
        goto label_30c144;
    }
    ctx->pc = 0x30C13Cu;
    {
        const bool branch_taken_0x30c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C13Cu;
        // 0x30c140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c13c) {
            ctx->pc = 0x30C288u;
            return;
        }
    }
    ctx->pc = 0x30C144u;
label_30c144:
    // 0x30c144: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x30c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_30c148:
    // 0x30c148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c14c:
    // 0x30c14c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_30c150:
    if (ctx->pc == 0x30C150u) {
        ctx->pc = 0x30C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C14Cu;
        // 0x30c150: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C154u;
        goto label_30c154;
    }
    ctx->pc = 0x30C14Cu;
    {
        const bool branch_taken_0x30c14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c14c) {
            ctx->pc = 0x30C150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C14Cu;
            // 0x30c150: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C168u;
            goto label_30c168;
        }
    }
    ctx->pc = 0x30C154u;
label_30c154:
    // 0x30c154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30c158:
    // 0x30c158: 0xc0c2e52  jal         func_30B948
label_30c15c:
    if (ctx->pc == 0x30C15Cu) {
        ctx->pc = 0x30C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C158u;
        // 0x30c15c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C160u;
        goto label_30c160;
    }
    ctx->pc = 0x30C158u;
    SET_GPR_U32(ctx, 31, 0x30C160u);
    ctx->pc = 0x30C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C158u;
    // 0x30c15c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B948u, 0x30C158u, 0x30C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C160u;
label_30c160:
    // 0x30c160: 0x10000049  b           . + 4 + (0x49 << 2)
label_30c164:
    if (ctx->pc == 0x30C164u) {
        ctx->pc = 0x30C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C160u;
        // 0x30c164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C168u;
        goto label_30c168;
    }
    ctx->pc = 0x30C160u;
    {
        const bool branch_taken_0x30c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C160u;
        // 0x30c164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c160) {
            ctx->pc = 0x30C288u;
            return;
        }
    }
    ctx->pc = 0x30C168u;
label_30c168:
    // 0x30c168: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_30c16c:
    if (ctx->pc == 0x30C16Cu) {
        ctx->pc = 0x30C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C168u;
        // 0x30c16c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C170u;
        goto label_30c170;
    }
    ctx->pc = 0x30C168u;
    {
        const bool branch_taken_0x30c168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C168u;
        // 0x30c16c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c168) {
            ctx->pc = 0x30C288u;
            return;
        }
    }
    ctx->pc = 0x30C170u;
label_30c170:
    // 0x30c170: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x30c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_30c174:
    // 0x30c174: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30c174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c178:
    // 0x30c178: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30c178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30c17c:
    // 0x30c17c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30c180:
    // 0x30c180: 0x60f809  jalr        $v1
label_30c184:
    if (ctx->pc == 0x30C184u) {
        ctx->pc = 0x30C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C180u;
        // 0x30c184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C188u;
        goto label_30c188;
    }
    ctx->pc = 0x30C180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30C188u);
        ctx->pc = 0x30C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C180u;
        // 0x30c184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C180u, 0x30C188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C188u;
label_30c188:
    // 0x30c188: 0x1000003f  b           . + 4 + (0x3F << 2)
label_30c18c:
    if (ctx->pc == 0x30C18Cu) {
        ctx->pc = 0x30C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C188u;
        // 0x30c18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C190u;
        goto label_30c190;
    }
    ctx->pc = 0x30C188u;
    {
        const bool branch_taken_0x30c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C188u;
        // 0x30c18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c188) {
            ctx->pc = 0x30C288u;
            return;
        }
    }
    ctx->pc = 0x30C190u;
label_30c190:
    // 0x30c190: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x30c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_30c194:
    // 0x30c194: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x30c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
label_30c198:
    // 0x30c198: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x30c198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_30c19c:
    // 0x30c19c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_30c1a0:
    if (ctx->pc == 0x30C1A0u) {
        ctx->pc = 0x30C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C19Cu;
        // 0x30c1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1A4u;
        goto label_30c1a4;
    }
    ctx->pc = 0x30C19Cu;
    {
        const bool branch_taken_0x30c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C19Cu;
        // 0x30c1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c19c) {
            ctx->pc = 0x30C288u;
            return;
        }
    }
    ctx->pc = 0x30C1A4u;
label_30c1a4:
    // 0x30c1a4: 0xc087502  jal         func_21D408
label_30c1a8:
    if (ctx->pc == 0x30C1A8u) {
        ctx->pc = 0x30C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1A4u;
        // 0x30c1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1ACu;
        goto label_30c1ac;
    }
    ctx->pc = 0x30C1A4u;
    SET_GPR_U32(ctx, 31, 0x30C1ACu);
    ctx->pc = 0x30C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C1A4u;
    // 0x30c1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30C1A4u, 0x30C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C1ACu;
label_30c1ac:
    // 0x30c1ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c1b0:
    // 0x30c1b0: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x30c1b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_30c1b4:
    // 0x30c1b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30c1b8:
    if (ctx->pc == 0x30C1B8u) {
        ctx->pc = 0x30C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1B4u;
        // 0x30c1b8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1BCu;
        goto label_30c1bc;
    }
    ctx->pc = 0x30C1B4u;
    {
        const bool branch_taken_0x30c1b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1B4u;
        // 0x30c1b8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1b4) {
            ctx->pc = 0x30C1C8u;
            goto label_30c1c8;
        }
    }
    ctx->pc = 0x30C1BCu;
label_30c1bc:
    // 0x30c1bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_30c1c0:
    // 0x30c1c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_30c1c4:
    if (ctx->pc == 0x30C1C4u) {
        ctx->pc = 0x30C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1C0u;
        // 0x30c1c4: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1C8u;
        goto label_30c1c8;
    }
    ctx->pc = 0x30C1C0u;
    {
        const bool branch_taken_0x30c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1C0u;
        // 0x30c1c4: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1c0) {
            ctx->pc = 0x30C1CCu;
            goto label_30c1cc;
        }
    }
    ctx->pc = 0x30C1C8u;
label_30c1c8:
    // 0x30c1c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c1cc:
    // 0x30c1cc: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
label_30c1d0:
    if (ctx->pc == 0x30C1D0u) {
        ctx->pc = 0x30C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1CCu;
        // 0x30c1d0: 0x8202002e  lb          $v0, 0x2E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1D4u;
        goto label_30c1d4;
    }
    ctx->pc = 0x30C1CCu;
    {
        const bool branch_taken_0x30c1cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c1cc) {
            ctx->pc = 0x30C1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C1CCu;
            // 0x30c1d0: 0x8202002e  lb          $v0, 0x2E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C204u;
            goto label_30c204;
        }
    }
    ctx->pc = 0x30C1D4u;
label_30c1d4:
    // 0x30c1d4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x30c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_30c1d8:
    // 0x30c1d8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30c1d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30c1dc:
    // 0x30c1dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30c1e0:
    // 0x30c1e0: 0x40f809  jalr        $v0
label_30c1e4:
    if (ctx->pc == 0x30C1E4u) {
        ctx->pc = 0x30C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1E0u;
        // 0x30c1e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1E8u;
        goto label_30c1e8;
    }
    ctx->pc = 0x30C1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30C1E8u);
        ctx->pc = 0x30C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1E0u;
        // 0x30c1e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C1E0u, 0x30C1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C1E8u;
label_30c1e8:
    // 0x30c1e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30c1e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c1ec:
    // 0x30c1ec: 0x24020092  addiu       $v0, $zero, 0x92
    ctx->pc = 0x30c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_30c1f0:
    // 0x30c1f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_30c1f4:
    if (ctx->pc == 0x30C1F4u) {
        ctx->pc = 0x30C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1F0u;
        // 0x30c1f4: 0x24020088  addiu       $v0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1F8u;
        goto label_30c1f8;
    }
    ctx->pc = 0x30C1F0u;
    {
        const bool branch_taken_0x30c1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1F0u;
        // 0x30c1f4: 0x24020088  addiu       $v0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1f0) {
            ctx->pc = 0x30C200u;
            goto label_30c200;
        }
    }
    ctx->pc = 0x30C1F8u;
label_30c1f8:
    // 0x30c1f8: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_30c1fc:
    if (ctx->pc == 0x30C1FCu) {
        ctx->pc = 0x30C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1F8u;
        // 0x30c1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C200u;
        goto label_30c200;
    }
    ctx->pc = 0x30C1F8u;
    {
        const bool branch_taken_0x30c1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1F8u;
        // 0x30c1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1f8) {
            ctx->pc = 0x30C288u;
            return;
        }
    }
    ctx->pc = 0x30C200u;
label_30c200:
    // 0x30c200: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x30c200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_30c204:
    // 0x30c204: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_30c208:
    if (ctx->pc == 0x30C208u) {
        ctx->pc = 0x30C20Cu;
        goto label_30c20c;
    }
    ctx->pc = 0x30C204u;
    {
        const bool branch_taken_0x30c204 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30c204) {
            ctx->pc = 0x30C240u;
            goto label_30c240;
        }
    }
    ctx->pc = 0x30C20Cu;
label_30c20c:
    // 0x30c20c: 0xc0a36c2  jal         func_28DB08
label_30c210:
    if (ctx->pc == 0x30C210u) {
        ctx->pc = 0x30C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C20Cu;
        // 0x30c210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C214u;
        goto label_30c214;
    }
    ctx->pc = 0x30C20Cu;
    SET_GPR_U32(ctx, 31, 0x30C214u);
    ctx->pc = 0x30C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C20Cu;
    // 0x30c210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x30C20Cu, 0x30C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C214u;
label_30c214:
    // 0x30c214: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x30c214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30c218:
    // 0x30c218: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30c218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30c21c:
    // 0x30c21c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x30c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30c220:
    // 0x30c220: 0xa0f809  jalr        $a1
label_30c224:
    if (ctx->pc == 0x30C224u) {
        ctx->pc = 0x30C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C220u;
        // 0x30c224: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C228u;
        goto label_30c228;
    }
    ctx->pc = 0x30C220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x30C228u);
        ctx->pc = 0x30C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C220u;
        // 0x30c224: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C220u, 0x30C228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C228u;
label_30c228:
    // 0x30c228: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30c22c:
    // 0x30c22c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x30c22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_30c230:
    // 0x30c230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_30c234:
    if (ctx->pc == 0x30C234u) {
        ctx->pc = 0x30C238u;
        goto label_30c238;
    }
    ctx->pc = 0x30C230u;
    {
        const bool branch_taken_0x30c230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c230) {
            ctx->pc = 0x30C240u;
            goto label_30c240;
        }
    }
    ctx->pc = 0x30C238u;
label_30c238:
    // 0x30c238: 0xc0a36c8  jal         func_28DB20
label_30c23c:
    if (ctx->pc == 0x30C23Cu) {
        ctx->pc = 0x30C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C238u;
        // 0x30c23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C240u;
        goto label_30c240;
    }
    ctx->pc = 0x30C238u;
    SET_GPR_U32(ctx, 31, 0x30C240u);
    ctx->pc = 0x30C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C238u;
    // 0x30c23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x30C238u, 0x30C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C240u;
label_30c240:
    // 0x30c240: 0xc0e409a  jal         func_390268
label_30c244:
    if (ctx->pc == 0x30C244u) {
        ctx->pc = 0x30C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C240u;
        // 0x30c244: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C248u;
        goto label_30c248;
    }
    ctx->pc = 0x30C240u;
    SET_GPR_U32(ctx, 31, 0x30C248u);
    ctx->pc = 0x30C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C240u;
    // 0x30c244: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30C240u, 0x30C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C248u;
label_30c248:
    // 0x30c248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30c24c:
    // 0x30c24c: 0xc0a34d6  jal         func_28D358
label_30c250:
    if (ctx->pc == 0x30C250u) {
        ctx->pc = 0x30C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C24Cu;
        // 0x30c250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C254u;
        goto label_30c254;
    }
    ctx->pc = 0x30C24Cu;
    SET_GPR_U32(ctx, 31, 0x30C254u);
    ctx->pc = 0x30C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C24Cu;
    // 0x30c250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x30C24Cu, 0x30C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C254u;
label_30c254:
    // 0x30c254: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30c254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c258:
    // 0x30c258: 0xc08a10a  jal         func_228428
label_30c25c:
    if (ctx->pc == 0x30C25Cu) {
        ctx->pc = 0x30C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C258u;
        // 0x30c25c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C260u;
        goto label_30c260;
    }
    ctx->pc = 0x30C258u;
    SET_GPR_U32(ctx, 31, 0x30C260u);
    ctx->pc = 0x30C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C258u;
    // 0x30c25c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x30C258u, 0x30C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C260u;
label_30c260:
    // 0x30c260: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_30c264:
    if (ctx->pc == 0x30C264u) {
        ctx->pc = 0x30C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C260u;
        // 0x30c264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C268u;
        goto label_30c268;
    }
    ctx->pc = 0x30C260u;
    {
        const bool branch_taken_0x30c260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C260u;
        // 0x30c264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c260) {
            ctx->pc = 0x30C288u;
            return;
        }
    }
    ctx->pc = 0x30C268u;
label_30c268:
    // 0x30c268: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x30c268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30c26c:
    // 0x30c26c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_30c270:
    if (ctx->pc == 0x30C270u) {
        ctx->pc = 0x30C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C26Cu;
        // 0x30c270: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C274u;
        goto label_30c274;
    }
    ctx->pc = 0x30C26Cu;
    {
        const bool branch_taken_0x30c26c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c26c) {
            ctx->pc = 0x30C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C26Cu;
            // 0x30c270: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C28Cu;
            return;
        }
    }
    ctx->pc = 0x30C274u;
label_30c274:
    // 0x30c274: 0x10b10004  beq         $a1, $s1, . + 4 + (0x4 << 2)
label_30c278:
    if (ctx->pc == 0x30C278u) {
        ctx->pc = 0x30C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C274u;
        // 0x30c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C27Cu;
        goto label_30c27c;
    }
    ctx->pc = 0x30C274u;
    {
        const bool branch_taken_0x30c274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x30C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C274u;
        // 0x30c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c274) {
            ctx->pc = 0x30C288u;
            return;
        }
    }
    ctx->pc = 0x30C27Cu;
label_30c27c:
    // 0x30c27c: 0xc0a33f8  jal         func_28CFE0
label_30c280:
    if (ctx->pc == 0x30C280u) {
        ctx->pc = 0x30C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C27Cu;
        // 0x30c280: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C284u;
        goto label_fallthrough_0x30c27c;
    }
    ctx->pc = 0x30C27Cu;
    SET_GPR_U32(ctx, 31, 0x30C284u);
    ctx->pc = 0x30C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C27Cu;
    // 0x30c280: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x30C27Cu, 0x30C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x30c27c:
    ctx->pc = 0x30C284u;
}
