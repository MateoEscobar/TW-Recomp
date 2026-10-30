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

// Function: sub_002F3E98
// Address: 0x2f3e98 - 0x2f3f98
void sub_002F3E98_0x2f3e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3E98_0x2f3e98");
#endif

    switch (ctx->pc) {
        case 0x2f3e98u: goto label_2f3e98;
        case 0x2f3e9cu: goto label_2f3e9c;
        case 0x2f3ea0u: goto label_2f3ea0;
        case 0x2f3ea4u: goto label_2f3ea4;
        case 0x2f3ea8u: goto label_2f3ea8;
        case 0x2f3eacu: goto label_2f3eac;
        case 0x2f3eb0u: goto label_2f3eb0;
        case 0x2f3eb4u: goto label_2f3eb4;
        case 0x2f3eb8u: goto label_2f3eb8;
        case 0x2f3ebcu: goto label_2f3ebc;
        case 0x2f3ec0u: goto label_2f3ec0;
        case 0x2f3ec4u: goto label_2f3ec4;
        case 0x2f3ec8u: goto label_2f3ec8;
        case 0x2f3eccu: goto label_2f3ecc;
        case 0x2f3ed0u: goto label_2f3ed0;
        case 0x2f3ed4u: goto label_2f3ed4;
        case 0x2f3ed8u: goto label_2f3ed8;
        case 0x2f3edcu: goto label_2f3edc;
        case 0x2f3ee0u: goto label_2f3ee0;
        case 0x2f3ee4u: goto label_2f3ee4;
        case 0x2f3ee8u: goto label_2f3ee8;
        case 0x2f3eecu: goto label_2f3eec;
        case 0x2f3ef0u: goto label_2f3ef0;
        case 0x2f3ef4u: goto label_2f3ef4;
        case 0x2f3ef8u: goto label_2f3ef8;
        case 0x2f3efcu: goto label_2f3efc;
        case 0x2f3f00u: goto label_2f3f00;
        case 0x2f3f04u: goto label_2f3f04;
        case 0x2f3f08u: goto label_2f3f08;
        case 0x2f3f0cu: goto label_2f3f0c;
        case 0x2f3f10u: goto label_2f3f10;
        case 0x2f3f14u: goto label_2f3f14;
        case 0x2f3f18u: goto label_2f3f18;
        case 0x2f3f1cu: goto label_2f3f1c;
        case 0x2f3f20u: goto label_2f3f20;
        case 0x2f3f24u: goto label_2f3f24;
        case 0x2f3f28u: goto label_2f3f28;
        case 0x2f3f2cu: goto label_2f3f2c;
        case 0x2f3f30u: goto label_2f3f30;
        case 0x2f3f34u: goto label_2f3f34;
        case 0x2f3f38u: goto label_2f3f38;
        case 0x2f3f3cu: goto label_2f3f3c;
        case 0x2f3f40u: goto label_2f3f40;
        case 0x2f3f44u: goto label_2f3f44;
        case 0x2f3f48u: goto label_2f3f48;
        case 0x2f3f4cu: goto label_2f3f4c;
        case 0x2f3f50u: goto label_2f3f50;
        case 0x2f3f54u: goto label_2f3f54;
        case 0x2f3f58u: goto label_2f3f58;
        case 0x2f3f5cu: goto label_2f3f5c;
        case 0x2f3f60u: goto label_2f3f60;
        case 0x2f3f64u: goto label_2f3f64;
        case 0x2f3f68u: goto label_2f3f68;
        case 0x2f3f6cu: goto label_2f3f6c;
        case 0x2f3f70u: goto label_2f3f70;
        case 0x2f3f74u: goto label_2f3f74;
        case 0x2f3f78u: goto label_2f3f78;
        case 0x2f3f7cu: goto label_2f3f7c;
        case 0x2f3f80u: goto label_2f3f80;
        case 0x2f3f84u: goto label_2f3f84;
        case 0x2f3f88u: goto label_2f3f88;
        case 0x2f3f8cu: goto label_2f3f8c;
        case 0x2f3f90u: goto label_2f3f90;
        case 0x2f3f94u: goto label_2f3f94;
        default: break;
    }

    ctx->pc = 0x2f3e98u;

label_2f3e98:
    // 0x2f3e98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f3e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f3e9c:
    // 0x2f3e9c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2f3e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2f3ea0:
    // 0x2f3ea0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2f3ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2f3ea4:
    // 0x2f3ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3ea8:
    // 0x2f3ea8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2f3ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2f3eac:
    // 0x2f3eac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f3eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f3eb0:
    // 0x2f3eb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f3eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f3eb4:
    // 0x2f3eb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f3eb8:
    // 0x2f3eb8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2f3eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3ebc:
    // 0x2f3ebc: 0xc08a140  jal         func_228500
label_2f3ec0:
    if (ctx->pc == 0x2F3EC0u) {
        ctx->pc = 0x2F3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EBCu;
        // 0x2f3ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3EC4u;
        goto label_2f3ec4;
    }
    ctx->pc = 0x2F3EBCu;
    SET_GPR_U32(ctx, 31, 0x2F3EC4u);
    ctx->pc = 0x2F3EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3EBCu;
    // 0x2f3ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228500u, 0x2F3EBCu, 0x2F3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3EC4u;
label_2f3ec4:
    // 0x2f3ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3ec8:
    // 0x2f3ec8: 0x5043002d  beql        $v0, $v1, . + 4 + (0x2D << 2)
label_2f3ecc:
    if (ctx->pc == 0x2F3ECCu) {
        ctx->pc = 0x2F3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EC8u;
        // 0x2f3ecc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3ED0u;
        goto label_2f3ed0;
    }
    ctx->pc = 0x2F3EC8u;
    {
        const bool branch_taken_0x2f3ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f3ec8) {
            ctx->pc = 0x2F3ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3EC8u;
            // 0x2f3ecc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3F80u;
            goto label_2f3f80;
        }
    }
    ctx->pc = 0x2F3ED0u;
label_2f3ed0:
    // 0x2f3ed0: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x2f3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_2f3ed4:
    // 0x2f3ed4: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_2f3ed8:
    if (ctx->pc == 0x2F3ED8u) {
        ctx->pc = 0x2F3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3ED4u;
        // 0x2f3ed8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3EDCu;
        goto label_2f3edc;
    }
    ctx->pc = 0x2F3ED4u;
    {
        const bool branch_taken_0x2f3ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3ed4) {
            ctx->pc = 0x2F3ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3ED4u;
            // 0x2f3ed8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3F80u;
            goto label_2f3f80;
        }
    }
    ctx->pc = 0x2F3EDCu;
label_2f3edc:
    // 0x2f3edc: 0x92220332  lbu         $v0, 0x332($s1)
    ctx->pc = 0x2f3edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 818)));
label_2f3ee0:
    // 0x2f3ee0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f3ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f3ee4:
    // 0x2f3ee4: 0x50430026  beql        $v0, $v1, . + 4 + (0x26 << 2)
label_2f3ee8:
    if (ctx->pc == 0x2F3EE8u) {
        ctx->pc = 0x2F3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EE4u;
        // 0x2f3ee8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3EECu;
        goto label_2f3eec;
    }
    ctx->pc = 0x2F3EE4u;
    {
        const bool branch_taken_0x2f3ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f3ee4) {
            ctx->pc = 0x2F3EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3EE4u;
            // 0x2f3ee8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3F80u;
            goto label_2f3f80;
        }
    }
    ctx->pc = 0x2F3EECu;
label_2f3eec:
    // 0x2f3eec: 0x92040044  lbu         $a0, 0x44($s0)
    ctx->pc = 0x2f3eecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
label_2f3ef0:
    // 0x2f3ef0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2f3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f3ef4:
    // 0x2f3ef4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2f3ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2f3ef8:
    // 0x2f3ef8: 0xc0e40a2  jal         func_390288
label_2f3efc:
    if (ctx->pc == 0x2F3EFCu) {
        ctx->pc = 0x2F3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EF8u;
        // 0x2f3efc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F00u;
        goto label_2f3f00;
    }
    ctx->pc = 0x2F3EF8u;
    SET_GPR_U32(ctx, 31, 0x2F3F00u);
    ctx->pc = 0x2F3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3EF8u;
    // 0x2f3efc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2F3EF8u, 0x2F3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F00u;
label_2f3f00:
    // 0x2f3f00: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2f3f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3f04:
    // 0x2f3f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f08:
    // 0x2f3f08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f3f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f0c:
    // 0x2f3f0c: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x2f3f0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_2f3f10:
    // 0x2f3f10: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x2f3f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_2f3f14:
    // 0x2f3f14: 0x60f809  jalr        $v1
label_2f3f18:
    if (ctx->pc == 0x2F3F18u) {
        ctx->pc = 0x2F3F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F14u;
        // 0x2f3f18: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F1Cu;
        goto label_2f3f1c;
    }
    ctx->pc = 0x2F3F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3F1Cu);
        ctx->pc = 0x2F3F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F14u;
        // 0x2f3f18: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3F14u, 0x2F3F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3F1Cu;
label_2f3f1c:
    // 0x2f3f1c: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2f3f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f3f20:
    // 0x2f3f20: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2f3f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2f3f24:
    // 0x2f3f24: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2f3f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2f3f28:
    // 0x2f3f28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f3f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f2c:
    // 0x2f3f2c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f3f30:
    // 0x2f3f30: 0xc0cd780  jal         func_335E00
label_2f3f34:
    if (ctx->pc == 0x2F3F34u) {
        ctx->pc = 0x2F3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F30u;
        // 0x2f3f34: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F38u;
        goto label_2f3f38;
    }
    ctx->pc = 0x2F3F30u;
    SET_GPR_U32(ctx, 31, 0x2F3F38u);
    ctx->pc = 0x2F3F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F30u;
    // 0x2f3f34: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2F3F30u, 0x2F3F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F38u;
label_2f3f38:
    // 0x2f3f38: 0xc0cd742  jal         func_335D08
label_2f3f3c:
    if (ctx->pc == 0x2F3F3Cu) {
        ctx->pc = 0x2F3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F38u;
        // 0x2f3f3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F40u;
        goto label_2f3f40;
    }
    ctx->pc = 0x2F3F38u;
    SET_GPR_U32(ctx, 31, 0x2F3F40u);
    ctx->pc = 0x2F3F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F38u;
    // 0x2f3f3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2F3F38u, 0x2F3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F40u;
label_2f3f40:
    // 0x2f3f40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f3f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f3f44:
    // 0x2f3f44: 0xc0cd7a8  jal         func_335EA0
label_2f3f48:
    if (ctx->pc == 0x2F3F48u) {
        ctx->pc = 0x2F3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F44u;
        // 0x2f3f48: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F4Cu;
        goto label_2f3f4c;
    }
    ctx->pc = 0x2F3F44u;
    SET_GPR_U32(ctx, 31, 0x2F3F4Cu);
    ctx->pc = 0x2F3F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F44u;
    // 0x2f3f48: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x2F3F44u, 0x2F3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F4Cu;
label_2f3f4c:
    // 0x2f3f4c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f3f4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3f50:
    // 0x2f3f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f54:
    // 0x2f3f54: 0xc10587a  jal         func_4161E8
label_2f3f58:
    if (ctx->pc == 0x2F3F58u) {
        ctx->pc = 0x2F3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F54u;
        // 0x2f3f58: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F5Cu;
        goto label_2f3f5c;
    }
    ctx->pc = 0x2F3F54u;
    SET_GPR_U32(ctx, 31, 0x2F3F5Cu);
    ctx->pc = 0x2F3F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F54u;
    // 0x2f3f58: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2F3F54u, 0x2F3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F5Cu;
label_2f3f5c:
    // 0x2f3f5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f3f5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3f60:
    // 0x2f3f60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f3f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f64:
    // 0x2f3f64: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f3f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2f3f68:
    // 0x2f3f68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3f6c:
    // 0x2f3f6c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2f3f6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2f3f70:
    // 0x2f3f70: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2f3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2f3f74:
    // 0x2f3f74: 0x60f809  jalr        $v1
label_2f3f78:
    if (ctx->pc == 0x2F3F78u) {
        ctx->pc = 0x2F3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F74u;
        // 0x2f3f78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F7Cu;
        goto label_2f3f7c;
    }
    ctx->pc = 0x2F3F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3F7Cu);
        ctx->pc = 0x2F3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F74u;
        // 0x2f3f78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3F74u, 0x2F3F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3F7Cu;
label_2f3f7c:
    // 0x2f3f7c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2f3f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f3f80:
    // 0x2f3f80: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2f3f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3f84:
    // 0x2f3f84: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2f3f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f3f88:
    // 0x2f3f88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f3f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3f8c:
    // 0x2f3f8c: 0x3e00008  jr          $ra
label_2f3f90:
    if (ctx->pc == 0x2F3F90u) {
        ctx->pc = 0x2F3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F8Cu;
        // 0x2f3f90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F94u;
        goto label_2f3f94;
    }
    ctx->pc = 0x2F3F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F8Cu;
        // 0x2f3f90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3F94u;
label_2f3f94:
    // 0x2f3f94: 0x0  nop
    ctx->pc = 0x2f3f94u;
    // NOP
    ctx->pc = 0x2f3f98u;
}
