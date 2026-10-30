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

// Function: sub_0014B158
// Address: 0x14b158 - 0x14b2a8
void sub_0014B158_0x14b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B158_0x14b158");
#endif

    switch (ctx->pc) {
        case 0x14b1a0u: goto label_14b1a0;
        case 0x14b1b8u: goto label_14b1b8;
        case 0x14b204u: goto label_14b204;
        case 0x14b230u: goto label_14b230;
        case 0x14b23cu: goto label_14b23c;
        case 0x14b26cu: goto label_14b26c;
        case 0x14b278u: goto label_14b278;
        default: break;
    }

    ctx->pc = 0x14b158u;

    // 0x14b158: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14b158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14b15c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14b15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x14b160: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x14b160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x14b164: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14b164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b168: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x14b168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x14b16c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b170: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14b170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14b174: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x14b174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b178: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14b17c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14b17cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b180: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x14b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x14b184: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14b184u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b188: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x14b188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x14b18c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14b18cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b194: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x14b194u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b198: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14b198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14b19c: 0x0  nop
    ctx->pc = 0x14b19cu;
    // NOP
label_14b1a0:
    // 0x14b1a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14b1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1a4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x14b1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14b1a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14b1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1ac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x14b1acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1b0: 0xc111638  jal         func_4458E0
    ctx->pc = 0x14B1B0u;
    SET_GPR_U32(ctx, 31, 0x14B1B8u);
    ctx->pc = 0x14B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1B0u;
    // 0x14b1b4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x14B1B0u, 0x14B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1B8u;
label_14b1b8:
    // 0x14b1b8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b1bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B1BCu;
    {
        const bool branch_taken_0x14b1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1BCu;
        // 0x14b1c0: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1bc) {
            ctx->pc = 0x14B1D0u;
            goto label_14b1d0;
        }
    }
    ctx->pc = 0x14B1C4u;
    // 0x14b1c4: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b1c8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x14B1C8u;
    {
        const bool branch_taken_0x14b1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b1c8) {
            ctx->pc = 0x14B1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B1C8u;
            // 0x14b1cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b1a0;
        }
    }
    ctx->pc = 0x14B1D0u;
label_14b1d0:
    // 0x14b1d0: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b1d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B1D4u;
    {
        const bool branch_taken_0x14b1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1D4u;
        // 0x14b1d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1d4) {
            ctx->pc = 0x14B1F8u;
            goto label_14b1f8;
        }
    }
    ctx->pc = 0x14B1DCu;
    // 0x14b1dc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14b1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14b1e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14b1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14b1e4: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x14b1e8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b1ec: 0x24a5a870  addiu       $a1, $a1, -0x5790
    ctx->pc = 0x14b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x14b1f0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14B1F0u;
    {
        const bool branch_taken_0x14b1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1F0u;
        // 0x14b1f4: 0x24c6b3e8  addiu       $a2, $a2, -0x4C18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1f0) {
            ctx->pc = 0x14B264u;
            goto label_14b264;
        }
    }
    ctx->pc = 0x14B1F8u;
label_14b1f8:
    // 0x14b1f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14b1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1fc: 0xc111590  jal         func_445640
    ctx->pc = 0x14B1FCu;
    SET_GPR_U32(ctx, 31, 0x14B204u);
    ctx->pc = 0x14B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1FCu;
    // 0x14b200: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x14B1FCu, 0x14B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B204u;
label_14b204:
    // 0x14b204: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x14b204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b208: 0x2863fff7  slti        $v1, $v1, -0x9
    ctx->pc = 0x14b208u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x14b20c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14B20Cu;
    {
        const bool branch_taken_0x14b20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B20Cu;
        // 0x14b210: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b20c) {
            ctx->pc = 0x14B240u;
            goto label_14b240;
        }
    }
    ctx->pc = 0x14B214u;
    // 0x14b214: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14b214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14b218: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14b218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14b21c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b220: 0x24a5a870  addiu       $a1, $a1, -0x5790
    ctx->pc = 0x14b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x14b224: 0x24c6b400  addiu       $a2, $a2, -0x4C00
    ctx->pc = 0x14b224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947840));
    // 0x14b228: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14B228u;
    SET_GPR_U32(ctx, 31, 0x14B230u);
    ctx->pc = 0x14B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B228u;
    // 0x14b22c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14B228u, 0x14B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B230u;
label_14b230:
    // 0x14b230: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14b234: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14B234u;
    SET_GPR_U32(ctx, 31, 0x14B23Cu);
    ctx->pc = 0x14B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B234u;
    // 0x14b238: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14B234u, 0x14B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B23Cu;
label_14b23c:
    // 0x14b23c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_14b240:
    // 0x14b240: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b244: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14B244u;
    {
        const bool branch_taken_0x14b244 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x14B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B244u;
        // 0x14b248: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b244) {
            ctx->pc = 0x14B280u;
            goto label_14b280;
        }
    }
    ctx->pc = 0x14B24Cu;
    // 0x14b24c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14b24cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14b250: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14b250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14b254: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14b254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x14b258: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b25c: 0x24a5a870  addiu       $a1, $a1, -0x5790
    ctx->pc = 0x14b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x14b260: 0x24c6b430  addiu       $a2, $a2, -0x4BD0
    ctx->pc = 0x14b260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947888));
label_14b264:
    // 0x14b264: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14B264u;
    SET_GPR_U32(ctx, 31, 0x14B26Cu);
    ctx->pc = 0x14B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B264u;
    // 0x14b268: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14B264u, 0x14B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B26Cu;
label_14b26c:
    // 0x14b26c: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14b270: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14B270u;
    SET_GPR_U32(ctx, 31, 0x14B278u);
    ctx->pc = 0x14B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B270u;
    // 0x14b274: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14B270u, 0x14B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B278u;
label_14b278:
    // 0x14b278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14b278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b27c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x14b27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_14b280:
    // 0x14b280: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x14b280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b284: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x14b284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b288: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14b288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b28c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14b28cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b290: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x14b290u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b294: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x14b294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b29c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B29Cu;
        // 0x14b2a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B2A4u;
    // 0x14b2a4: 0x0  nop
    ctx->pc = 0x14b2a4u;
    // NOP
    ctx->pc = 0x14b2a8u;
}
