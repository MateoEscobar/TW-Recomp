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

// Function: sub_00237E98
// Address: 0x237e98 - 0x238030
void sub_00237E98_0x237e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237E98_0x237e98");
#endif

    switch (ctx->pc) {
        case 0x237e98u: goto label_237e98;
        case 0x237e9cu: goto label_237e9c;
        case 0x237ea0u: goto label_237ea0;
        case 0x237ea4u: goto label_237ea4;
        case 0x237ea8u: goto label_237ea8;
        case 0x237eacu: goto label_237eac;
        case 0x237eb0u: goto label_237eb0;
        case 0x237eb4u: goto label_237eb4;
        case 0x237eb8u: goto label_237eb8;
        case 0x237ebcu: goto label_237ebc;
        case 0x237ec0u: goto label_237ec0;
        case 0x237ec4u: goto label_237ec4;
        case 0x237ec8u: goto label_237ec8;
        case 0x237eccu: goto label_237ecc;
        case 0x237ed0u: goto label_237ed0;
        case 0x237ed4u: goto label_237ed4;
        case 0x237ed8u: goto label_237ed8;
        case 0x237edcu: goto label_237edc;
        case 0x237ee0u: goto label_237ee0;
        case 0x237ee4u: goto label_237ee4;
        case 0x237ee8u: goto label_237ee8;
        case 0x237eecu: goto label_237eec;
        case 0x237ef0u: goto label_237ef0;
        case 0x237ef4u: goto label_237ef4;
        case 0x237ef8u: goto label_237ef8;
        case 0x237efcu: goto label_237efc;
        case 0x237f00u: goto label_237f00;
        case 0x237f04u: goto label_237f04;
        case 0x237f08u: goto label_237f08;
        case 0x237f0cu: goto label_237f0c;
        case 0x237f10u: goto label_237f10;
        case 0x237f14u: goto label_237f14;
        case 0x237f18u: goto label_237f18;
        case 0x237f1cu: goto label_237f1c;
        case 0x237f20u: goto label_237f20;
        case 0x237f24u: goto label_237f24;
        case 0x237f28u: goto label_237f28;
        case 0x237f2cu: goto label_237f2c;
        case 0x237f30u: goto label_237f30;
        case 0x237f34u: goto label_237f34;
        case 0x237f38u: goto label_237f38;
        case 0x237f3cu: goto label_237f3c;
        case 0x237f40u: goto label_237f40;
        case 0x237f44u: goto label_237f44;
        case 0x237f48u: goto label_237f48;
        case 0x237f4cu: goto label_237f4c;
        case 0x237f50u: goto label_237f50;
        case 0x237f54u: goto label_237f54;
        case 0x237f58u: goto label_237f58;
        case 0x237f5cu: goto label_237f5c;
        case 0x237f60u: goto label_237f60;
        case 0x237f64u: goto label_237f64;
        case 0x237f68u: goto label_237f68;
        case 0x237f6cu: goto label_237f6c;
        case 0x237f70u: goto label_237f70;
        case 0x237f74u: goto label_237f74;
        case 0x237f78u: goto label_237f78;
        case 0x237f7cu: goto label_237f7c;
        case 0x237f80u: goto label_237f80;
        case 0x237f84u: goto label_237f84;
        case 0x237f88u: goto label_237f88;
        case 0x237f8cu: goto label_237f8c;
        case 0x237f90u: goto label_237f90;
        case 0x237f94u: goto label_237f94;
        case 0x237f98u: goto label_237f98;
        case 0x237f9cu: goto label_237f9c;
        case 0x237fa0u: goto label_237fa0;
        case 0x237fa4u: goto label_237fa4;
        case 0x237fa8u: goto label_237fa8;
        case 0x237facu: goto label_237fac;
        case 0x237fb0u: goto label_237fb0;
        case 0x237fb4u: goto label_237fb4;
        case 0x237fb8u: goto label_237fb8;
        case 0x237fbcu: goto label_237fbc;
        case 0x237fc0u: goto label_237fc0;
        case 0x237fc4u: goto label_237fc4;
        case 0x237fc8u: goto label_237fc8;
        case 0x237fccu: goto label_237fcc;
        case 0x237fd0u: goto label_237fd0;
        case 0x237fd4u: goto label_237fd4;
        case 0x237fd8u: goto label_237fd8;
        case 0x237fdcu: goto label_237fdc;
        case 0x237fe0u: goto label_237fe0;
        case 0x237fe4u: goto label_237fe4;
        case 0x237fe8u: goto label_237fe8;
        case 0x237fecu: goto label_237fec;
        case 0x237ff0u: goto label_237ff0;
        case 0x237ff4u: goto label_237ff4;
        case 0x237ff8u: goto label_237ff8;
        case 0x237ffcu: goto label_237ffc;
        case 0x238000u: goto label_238000;
        case 0x238004u: goto label_238004;
        case 0x238008u: goto label_238008;
        case 0x23800cu: goto label_23800c;
        case 0x238010u: goto label_238010;
        case 0x238014u: goto label_238014;
        case 0x238018u: goto label_238018;
        case 0x23801cu: goto label_23801c;
        case 0x238020u: goto label_238020;
        case 0x238024u: goto label_238024;
        case 0x238028u: goto label_238028;
        case 0x23802cu: goto label_23802c;
        default: break;
    }

    ctx->pc = 0x237e98u;

label_237e98:
    // 0x237e98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x237e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_237e9c:
    // 0x237e9c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_237ea0:
    // 0x237ea0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x237ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_237ea4:
    // 0x237ea4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x237ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_237ea8:
    // 0x237ea8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x237ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_237eac:
    // 0x237eac: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x237eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_237eb0:
    // 0x237eb0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x237eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_237eb4:
    // 0x237eb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x237eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_237eb8:
    // 0x237eb8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x237eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_237ebc:
    // 0x237ebc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_237ec0:
    // 0x237ec0: 0xc0e4060  jal         func_390180
label_237ec4:
    if (ctx->pc == 0x237EC4u) {
        ctx->pc = 0x237EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EC0u;
        // 0x237ec4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EC8u;
        goto label_237ec8;
    }
    ctx->pc = 0x237EC0u;
    SET_GPR_U32(ctx, 31, 0x237EC8u);
    ctx->pc = 0x237EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EC0u;
    // 0x237ec4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237EC0u, 0x237EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EC8u;
label_237ec8:
    // 0x237ec8: 0xc08a61a  jal         func_229868
label_237ecc:
    if (ctx->pc == 0x237ECCu) {
        ctx->pc = 0x237ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EC8u;
        // 0x237ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237ED0u;
        goto label_237ed0;
    }
    ctx->pc = 0x237EC8u;
    SET_GPR_U32(ctx, 31, 0x237ED0u);
    ctx->pc = 0x237ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EC8u;
    // 0x237ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237EC8u, 0x237ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237ED0u;
label_237ed0:
    // 0x237ed0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x237ed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237ed4:
    // 0x237ed4: 0x12a0004c  beqz        $s5, . + 4 + (0x4C << 2)
label_237ed8:
    if (ctx->pc == 0x237ED8u) {
        ctx->pc = 0x237ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ED4u;
        // 0x237ed8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EDCu;
        goto label_237edc;
    }
    ctx->pc = 0x237ED4u;
    {
        const bool branch_taken_0x237ed4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x237ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ED4u;
        // 0x237ed8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ed4) {
            ctx->pc = 0x238008u;
            goto label_238008;
        }
    }
    ctx->pc = 0x237EDCu;
label_237edc:
    // 0x237edc: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x237edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_237ee0:
    // 0x237ee0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x237ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_237ee4:
    // 0x237ee4: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x237ee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_237ee8:
    // 0x237ee8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x237ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_237eec:
    // 0x237eec: 0x40f809  jalr        $v0
label_237ef0:
    if (ctx->pc == 0x237EF0u) {
        ctx->pc = 0x237EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EECu;
        // 0x237ef0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EF4u;
        goto label_237ef4;
    }
    ctx->pc = 0x237EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237EF4u);
        ctx->pc = 0x237EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EECu;
        // 0x237ef0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237EECu, 0x237EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237EF4u;
label_237ef4:
    // 0x237ef4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x237ef4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237ef8:
    // 0x237ef8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x237ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_237efc:
    // 0x237efc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x237efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_237f00:
    // 0x237f00: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x237f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_237f04:
    // 0x237f04: 0x40f809  jalr        $v0
label_237f08:
    if (ctx->pc == 0x237F08u) {
        ctx->pc = 0x237F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F04u;
        // 0x237f08: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F0Cu;
        goto label_237f0c;
    }
    ctx->pc = 0x237F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237F0Cu);
        ctx->pc = 0x237F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F04u;
        // 0x237f08: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237F04u, 0x237F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237F0Cu;
label_237f0c:
    // 0x237f0c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_237f10:
    if (ctx->pc == 0x237F10u) {
        ctx->pc = 0x237F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F0Cu;
        // 0x237f10: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F14u;
        goto label_237f14;
    }
    ctx->pc = 0x237F0Cu;
    {
        const bool branch_taken_0x237f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F0Cu;
        // 0x237f10: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f0c) {
            ctx->pc = 0x23800Cu;
            goto label_23800c;
        }
    }
    ctx->pc = 0x237F14u;
label_237f14:
    // 0x237f14: 0x8eb000d8  lw          $s0, 0xD8($s5)
    ctx->pc = 0x237f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_237f18:
    // 0x237f18: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_237f1c:
    if (ctx->pc == 0x237F1Cu) {
        ctx->pc = 0x237F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F18u;
        // 0x237f1c: 0x26030004  addiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F20u;
        goto label_237f20;
    }
    ctx->pc = 0x237F18u;
    {
        const bool branch_taken_0x237f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F18u;
        // 0x237f1c: 0x26030004  addiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f18) {
            ctx->pc = 0x237FF4u;
            goto label_237ff4;
        }
    }
    ctx->pc = 0x237F20u;
label_237f20:
    // 0x237f20: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x237f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_237f24:
    // 0x237f24: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_237f28:
    if (ctx->pc == 0x237F28u) {
        ctx->pc = 0x237F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F24u;
        // 0x237f28: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F2Cu;
        goto label_237f2c;
    }
    ctx->pc = 0x237F24u;
    {
        const bool branch_taken_0x237f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F24u;
        // 0x237f28: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f24) {
            ctx->pc = 0x237FF4u;
            goto label_237ff4;
        }
    }
    ctx->pc = 0x237F2Cu;
label_237f2c:
    // 0x237f2c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x237f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_237f30:
    // 0x237f30: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x237f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_237f34:
    // 0x237f34: 0x8c62ad38  lw          $v0, -0x52C8($v1)
    ctx->pc = 0x237f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946104)));
label_237f38:
    // 0x237f38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x237f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237f3c:
    // 0x237f3c: 0x40f809  jalr        $v0
label_237f40:
    if (ctx->pc == 0x237F40u) {
        ctx->pc = 0x237F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F3Cu;
        // 0x237f40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F44u;
        goto label_237f44;
    }
    ctx->pc = 0x237F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237F44u);
        ctx->pc = 0x237F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F3Cu;
        // 0x237f40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237F3Cu, 0x237F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237F44u;
label_237f44:
    // 0x237f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237f48:
    // 0x237f48: 0xc05d0c8  jal         func_174320
label_237f4c:
    if (ctx->pc == 0x237F4Cu) {
        ctx->pc = 0x237F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F48u;
        // 0x237f4c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F50u;
        goto label_237f50;
    }
    ctx->pc = 0x237F48u;
    SET_GPR_U32(ctx, 31, 0x237F50u);
    ctx->pc = 0x237F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F48u;
    // 0x237f4c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174320u, 0x237F48u, 0x237F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F50u;
label_237f50:
    // 0x237f50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x237f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_237f54:
    // 0x237f54: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x237f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_237f58:
    // 0x237f58: 0x8c520840  lw          $s2, 0x840($v0)
    ctx->pc = 0x237f58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
label_237f5c:
    // 0x237f5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x237f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_237f60:
    // 0x237f60: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x237f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_237f64:
    // 0x237f64: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x237f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_237f68:
    // 0x237f68: 0x40f809  jalr        $v0
label_237f6c:
    if (ctx->pc == 0x237F6Cu) {
        ctx->pc = 0x237F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F68u;
        // 0x237f6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F70u;
        goto label_237f70;
    }
    ctx->pc = 0x237F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237F70u);
        ctx->pc = 0x237F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F68u;
        // 0x237f6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237F68u, 0x237F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237F70u;
label_237f70:
    // 0x237f70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x237f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237f74:
    // 0x237f74: 0x52600020  beql        $s3, $zero, . + 4 + (0x20 << 2)
label_237f78:
    if (ctx->pc == 0x237F78u) {
        ctx->pc = 0x237F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F74u;
        // 0x237f78: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F7Cu;
        goto label_237f7c;
    }
    ctx->pc = 0x237F74u;
    {
        const bool branch_taken_0x237f74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x237f74) {
            ctx->pc = 0x237F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F74u;
            // 0x237f78: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237FF8u;
            goto label_237ff8;
        }
    }
    ctx->pc = 0x237F7Cu;
label_237f7c:
    // 0x237f7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x237f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_237f80:
    // 0x237f80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237f84:
    // 0x237f84: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x237f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_237f88:
    // 0x237f88: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x237f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_237f8c:
    // 0x237f8c: 0x40f809  jalr        $v0
label_237f90:
    if (ctx->pc == 0x237F90u) {
        ctx->pc = 0x237F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F8Cu;
        // 0x237f90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F94u;
        goto label_237f94;
    }
    ctx->pc = 0x237F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237F94u);
        ctx->pc = 0x237F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F8Cu;
        // 0x237f90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237F8Cu, 0x237F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237F94u;
label_237f94:
    // 0x237f94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237f98:
    // 0x237f98: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x237f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_237f9c:
    // 0x237f9c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x237f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_237fa0:
    // 0x237fa0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_237fa4:
    if (ctx->pc == 0x237FA4u) {
        ctx->pc = 0x237FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FA0u;
        // 0x237fa4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FA8u;
        goto label_237fa8;
    }
    ctx->pc = 0x237FA0u;
    {
        const bool branch_taken_0x237fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237fa0) {
            ctx->pc = 0x237FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FA0u;
            // 0x237fa4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237FE8u;
            goto label_237fe8;
        }
    }
    ctx->pc = 0x237FA8u;
label_237fa8:
    // 0x237fa8: 0x8c900104  lw          $s0, 0x104($a0)
    ctx->pc = 0x237fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_237fac:
    // 0x237fac: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_237fb0:
    if (ctx->pc == 0x237FB0u) {
        ctx->pc = 0x237FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FACu;
        // 0x237fb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FB4u;
        goto label_237fb4;
    }
    ctx->pc = 0x237FACu;
    {
        const bool branch_taken_0x237fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x237fac) {
            ctx->pc = 0x237FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FACu;
            // 0x237fb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237FE8u;
            goto label_237fe8;
        }
    }
    ctx->pc = 0x237FB4u;
label_237fb4:
    // 0x237fb4: 0xc0e8630  jal         func_3A18C0
label_237fb8:
    if (ctx->pc == 0x237FB8u) {
        ctx->pc = 0x237FBCu;
        goto label_237fbc;
    }
    ctx->pc = 0x237FB4u;
    SET_GPR_U32(ctx, 31, 0x237FBCu);
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x237FB4u, 0x237FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FBCu;
label_237fbc:
    // 0x237fbc: 0x5455000a  bnel        $v0, $s5, . + 4 + (0xA << 2)
label_237fc0:
    if (ctx->pc == 0x237FC0u) {
        ctx->pc = 0x237FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FBCu;
        // 0x237fc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FC4u;
        goto label_237fc4;
    }
    ctx->pc = 0x237FBCu;
    {
        const bool branch_taken_0x237fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x237fbc) {
            ctx->pc = 0x237FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FBCu;
            // 0x237fc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237FE8u;
            goto label_237fe8;
        }
    }
    ctx->pc = 0x237FC4u;
label_237fc4:
    // 0x237fc4: 0x92c20027  lbu         $v0, 0x27($s6)
    ctx->pc = 0x237fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 39)));
label_237fc8:
    // 0x237fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237fcc:
    // 0x237fcc: 0xa2020027  sb          $v0, 0x27($s0)
    ctx->pc = 0x237fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 2));
label_237fd0:
    // 0x237fd0: 0xc137c02  jal         func_4DF008
label_237fd4:
    if (ctx->pc == 0x237FD4u) {
        ctx->pc = 0x237FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FD0u;
        // 0x237fd4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FD8u;
        goto label_237fd8;
    }
    ctx->pc = 0x237FD0u;
    SET_GPR_U32(ctx, 31, 0x237FD8u);
    ctx->pc = 0x237FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FD0u;
    // 0x237fd4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF008u, 0x237FD0u, 0x237FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FD8u;
label_237fd8:
    // 0x237fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237fdc:
    // 0x237fdc: 0xc05ff5e  jal         func_17FD78
label_237fe0:
    if (ctx->pc == 0x237FE0u) {
        ctx->pc = 0x237FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FDCu;
        // 0x237fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FE4u;
        goto label_237fe4;
    }
    ctx->pc = 0x237FDCu;
    SET_GPR_U32(ctx, 31, 0x237FE4u);
    ctx->pc = 0x237FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FDCu;
    // 0x237fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD78u, 0x237FDCu, 0x237FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FE4u;
label_237fe4:
    // 0x237fe4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x237fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_237fe8:
    // 0x237fe8: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x237fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_237fec:
    // 0x237fec: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
label_237ff0:
    if (ctx->pc == 0x237FF0u) {
        ctx->pc = 0x237FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FECu;
        // 0x237ff0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FF4u;
        goto label_237ff4;
    }
    ctx->pc = 0x237FECu;
    {
        const bool branch_taken_0x237fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237fec) {
            ctx->pc = 0x237FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FECu;
            // 0x237ff0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237f80;
        }
    }
    ctx->pc = 0x237FF4u;
label_237ff4:
    // 0x237ff4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x237ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_237ff8:
    // 0x237ff8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x237ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_237ffc:
    // 0x237ffc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x237ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_238000:
    // 0x238000: 0x40f809  jalr        $v0
label_238004:
    if (ctx->pc == 0x238004u) {
        ctx->pc = 0x238004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238000u;
        // 0x238004: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238008u;
        goto label_238008;
    }
    ctx->pc = 0x238000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238008u);
        ctx->pc = 0x238004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238000u;
        // 0x238004: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238000u, 0x238008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238008u;
label_238008:
    // 0x238008: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x238008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23800c:
    // 0x23800c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x23800cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_238010:
    // 0x238010: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x238010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_238014:
    // 0x238014: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x238014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_238018:
    // 0x238018: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x238018u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23801c:
    // 0x23801c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x23801cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_238020:
    // 0x238020: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x238020u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238024:
    // 0x238024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238028:
    // 0x238028: 0x3e00008  jr          $ra
label_23802c:
    if (ctx->pc == 0x23802Cu) {
        ctx->pc = 0x23802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238028u;
        // 0x23802c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238030u;
        goto label_fallthrough_0x238028;
    }
    ctx->pc = 0x238028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238028u;
        // 0x23802c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x238028:
    ctx->pc = 0x238030u;
}
