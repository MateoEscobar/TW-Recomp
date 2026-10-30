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

// Function: sub_001618F0
// Address: 0x1618f0 - 0x1619d0
void sub_001618F0_0x1618f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001618F0_0x1618f0");
#endif

    switch (ctx->pc) {
        case 0x1618f0u: goto label_1618f0;
        case 0x1618f4u: goto label_1618f4;
        case 0x1618f8u: goto label_1618f8;
        case 0x1618fcu: goto label_1618fc;
        case 0x161900u: goto label_161900;
        case 0x161904u: goto label_161904;
        case 0x161908u: goto label_161908;
        case 0x16190cu: goto label_16190c;
        case 0x161910u: goto label_161910;
        case 0x161914u: goto label_161914;
        case 0x161918u: goto label_161918;
        case 0x16191cu: goto label_16191c;
        case 0x161920u: goto label_161920;
        case 0x161924u: goto label_161924;
        case 0x161928u: goto label_161928;
        case 0x16192cu: goto label_16192c;
        case 0x161930u: goto label_161930;
        case 0x161934u: goto label_161934;
        case 0x161938u: goto label_161938;
        case 0x16193cu: goto label_16193c;
        case 0x161940u: goto label_161940;
        case 0x161944u: goto label_161944;
        case 0x161948u: goto label_161948;
        case 0x16194cu: goto label_16194c;
        case 0x161950u: goto label_161950;
        case 0x161954u: goto label_161954;
        case 0x161958u: goto label_161958;
        case 0x16195cu: goto label_16195c;
        case 0x161960u: goto label_161960;
        case 0x161964u: goto label_161964;
        case 0x161968u: goto label_161968;
        case 0x16196cu: goto label_16196c;
        case 0x161970u: goto label_161970;
        case 0x161974u: goto label_161974;
        case 0x161978u: goto label_161978;
        case 0x16197cu: goto label_16197c;
        case 0x161980u: goto label_161980;
        case 0x161984u: goto label_161984;
        case 0x161988u: goto label_161988;
        case 0x16198cu: goto label_16198c;
        case 0x161990u: goto label_161990;
        case 0x161994u: goto label_161994;
        case 0x161998u: goto label_161998;
        case 0x16199cu: goto label_16199c;
        case 0x1619a0u: goto label_1619a0;
        case 0x1619a4u: goto label_1619a4;
        case 0x1619a8u: goto label_1619a8;
        case 0x1619acu: goto label_1619ac;
        case 0x1619b0u: goto label_1619b0;
        case 0x1619b4u: goto label_1619b4;
        case 0x1619b8u: goto label_1619b8;
        case 0x1619bcu: goto label_1619bc;
        case 0x1619c0u: goto label_1619c0;
        case 0x1619c4u: goto label_1619c4;
        case 0x1619c8u: goto label_1619c8;
        case 0x1619ccu: goto label_1619cc;
        default: break;
    }

    ctx->pc = 0x1618f0u;

label_1618f0:
    // 0x1618f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1618f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1618f4:
    // 0x1618f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1618f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1618f8:
    // 0x1618f8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1618f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1618fc:
    // 0x1618fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1618fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_161900:
    // 0x161900: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x161900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_161904:
    // 0x161904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161908:
    // 0x161908: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x161908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_16190c:
    // 0x16190c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x16190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_161910:
    // 0x161910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_161914:
    // 0x161914: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x161914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_161918:
    // 0x161918: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16191c:
    // 0x16191c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16191cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161920:
    // 0x161920: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161924:
    // 0x161924: 0x40f809  jalr        $v0
label_161928:
    if (ctx->pc == 0x161928u) {
        ctx->pc = 0x161928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161924u;
        // 0x161928: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16192Cu;
        goto label_16192c;
    }
    ctx->pc = 0x161924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16192Cu);
        ctx->pc = 0x161928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161924u;
        // 0x161928: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161924u, 0x16192Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16192Cu;
label_16192c:
    // 0x16192c: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x16192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
label_161930:
    // 0x161930: 0x10000005  b           . + 4 + (0x5 << 2)
label_161934:
    if (ctx->pc == 0x161934u) {
        ctx->pc = 0x161934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161930u;
        // 0x161934: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161938u;
        goto label_161938;
    }
    ctx->pc = 0x161930u;
    {
        const bool branch_taken_0x161930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161930u;
        // 0x161934: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161930) {
            ctx->pc = 0x161948u;
            goto label_161948;
        }
    }
    ctx->pc = 0x161938u;
label_161938:
    // 0x161938: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x161938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_16193c:
    // 0x16193c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16193cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_161940:
    // 0x161940: 0x60f809  jalr        $v1
label_161944:
    if (ctx->pc == 0x161944u) {
        ctx->pc = 0x161944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161940u;
        // 0x161944: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161948u;
        goto label_161948;
    }
    ctx->pc = 0x161940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161948u);
        ctx->pc = 0x161944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161940u;
        // 0x161944: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161940u, 0x161948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161948u;
label_161948:
    // 0x161948: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x161948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_16194c:
    // 0x16194c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161950:
    // 0x161950: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161954:
    // 0x161954: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161958:
    // 0x161958: 0x40f809  jalr        $v0
label_16195c:
    if (ctx->pc == 0x16195Cu) {
        ctx->pc = 0x16195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161958u;
        // 0x16195c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161960u;
        goto label_161960;
    }
    ctx->pc = 0x161958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161960u);
        ctx->pc = 0x16195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161958u;
        // 0x16195c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161958u, 0x161960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161960u;
label_161960:
    // 0x161960: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x161960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_161964:
    // 0x161964: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x161964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_161968:
    // 0x161968: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_16196c:
    if (ctx->pc == 0x16196Cu) {
        ctx->pc = 0x16196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161968u;
        // 0x16196c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161970u;
        goto label_161970;
    }
    ctx->pc = 0x161968u;
    {
        const bool branch_taken_0x161968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161968) {
            ctx->pc = 0x16196Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161968u;
            // 0x16196c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161938;
        }
    }
    ctx->pc = 0x161970u;
label_161970:
    // 0x161970: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x161970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161974:
    // 0x161974: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x161974u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_161978:
    // 0x161978: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x161978u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_16197c:
    // 0x16197c: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x16197cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_161980:
    // 0x161980: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x161980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_161984:
    // 0x161984: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
label_161988:
    if (ctx->pc == 0x161988u) {
        ctx->pc = 0x161988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161984u;
        // 0x161988: 0x8e84cd4c  lw          $a0, -0x32B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16198Cu;
        goto label_16198c;
    }
    ctx->pc = 0x161984u;
    {
        const bool branch_taken_0x161984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x161988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161984u;
        // 0x161988: 0x8e84cd4c  lw          $a0, -0x32B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161984) {
            ctx->pc = 0x161998u;
            goto label_161998;
        }
    }
    ctx->pc = 0x16198Cu;
label_16198c:
    // 0x16198c: 0xc062be2  jal         func_18AF88
label_161990:
    if (ctx->pc == 0x161990u) {
        ctx->pc = 0x161990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16198Cu;
        // 0x161990: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161994u;
        goto label_161994;
    }
    ctx->pc = 0x16198Cu;
    SET_GPR_U32(ctx, 31, 0x161994u);
    ctx->pc = 0x161990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16198Cu;
    // 0x161990: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x16198Cu, 0x161994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161994u;
label_161994:
    // 0x161994: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x161994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_161998:
    // 0x161998: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x161998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16199c:
    // 0x16199c: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x16199cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1619a0:
    // 0x1619a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1619a4:
    if (ctx->pc == 0x1619A4u) {
        ctx->pc = 0x1619A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619A0u;
        // 0x1619a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1619A8u;
        goto label_1619a8;
    }
    ctx->pc = 0x1619A0u;
    {
        const bool branch_taken_0x1619a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1619A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619A0u;
        // 0x1619a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619a0) {
            ctx->pc = 0x161980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161980;
        }
    }
    ctx->pc = 0x1619A8u;
label_1619a8:
    // 0x1619a8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1619a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1619ac:
    // 0x1619ac: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1619acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1619b0:
    // 0x1619b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1619b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1619b4:
    // 0x1619b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1619b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1619b8:
    // 0x1619b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1619b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1619bc:
    // 0x1619bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1619bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1619c0:
    // 0x1619c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1619c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1619c4:
    // 0x1619c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1619c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1619c8:
    // 0x1619c8: 0x3e00008  jr          $ra
label_1619cc:
    if (ctx->pc == 0x1619CCu) {
        ctx->pc = 0x1619CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619C8u;
        // 0x1619cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1619D0u;
        goto label_fallthrough_0x1619c8;
    }
    ctx->pc = 0x1619C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1619CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619C8u;
        // 0x1619cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1619C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1619c8:
    ctx->pc = 0x1619D0u;
}
