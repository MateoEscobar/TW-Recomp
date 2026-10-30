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

// Function: sub_004E6168
// Address: 0x4e6168 - 0x4e6410
void sub_004E6168_0x4e6168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6168_0x4e6168");
#endif

    switch (ctx->pc) {
        case 0x4e61b0u: goto label_4e61b0;
        case 0x4e61d0u: goto label_4e61d0;
        case 0x4e6218u: goto label_4e6218;
        case 0x4e622cu: goto label_4e622c;
        case 0x4e6234u: goto label_4e6234;
        case 0x4e6240u: goto label_4e6240;
        case 0x4e6270u: goto label_4e6270;
        case 0x4e6280u: goto label_4e6280;
        case 0x4e6288u: goto label_4e6288;
        case 0x4e6294u: goto label_4e6294;
        case 0x4e62c8u: goto label_4e62c8;
        case 0x4e62d8u: goto label_4e62d8;
        case 0x4e62e0u: goto label_4e62e0;
        case 0x4e62ecu: goto label_4e62ec;
        case 0x4e6314u: goto label_4e6314;
        case 0x4e6324u: goto label_4e6324;
        case 0x4e632cu: goto label_4e632c;
        case 0x4e6338u: goto label_4e6338;
        case 0x4e636cu: goto label_4e636c;
        case 0x4e637cu: goto label_4e637c;
        case 0x4e6384u: goto label_4e6384;
        case 0x4e6390u: goto label_4e6390;
        case 0x4e63b0u: goto label_4e63b0;
        case 0x4e63ccu: goto label_4e63cc;
        default: break;
    }

    ctx->pc = 0x4e6168u;

label_4e6168:
    // 0x4e6168: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4e6168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4e616c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4e616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4e6170: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4e6170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4e6174: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e6174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6178: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e6178u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e617c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4e617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4e6180: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x4e6180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x4e6184: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4e6184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4e6188: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e6188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e618c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4e618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4e6190: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4e6190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4e6194: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4e6194u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4e6198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4e619c: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4e619cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4e61a0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4e61a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4e61a4: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x4E61A4u;
    {
        const bool branch_taken_0x4e61a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E61A4u;
        // 0x4e61a8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e61a4) {
            ctx->pc = 0x4E63E4u;
            goto label_4e63e4;
        }
    }
    ctx->pc = 0x4E61ACu;
    // 0x4e61ac: 0x0  nop
    ctx->pc = 0x4e61acu;
    // NOP
label_4e61b0:
    // 0x4e61b0: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E61B0u;
    {
        const bool branch_taken_0x4e61b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E61B0u;
        // 0x4e61b4: 0x2531023  subu        $v0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e61b0) {
            ctx->pc = 0x4E61D8u;
            goto label_4e61d8;
        }
    }
    ctx->pc = 0x4E61B8u;
    // 0x4e61b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e61b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e61bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e61bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e61c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4e61c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e61c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e61c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e61c8: 0xc1397c4  jal         func_4E5F10
    ctx->pc = 0x4E61C8u;
    SET_GPR_U32(ctx, 31, 0x4E61D0u);
    ctx->pc = 0x4E61CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E61C8u;
    // 0x4e61cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5F10u, 0x4E61C8u, 0x4E61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E61D0u;
label_4e61d0:
    // 0x4e61d0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x4E61D0u;
    {
        const bool branch_taken_0x4e61d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E61D0u;
        // 0x4e61d4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e61d0) {
            ctx->pc = 0x4E63E8u;
            goto label_4e63e8;
        }
    }
    ctx->pc = 0x4E61D8u;
label_4e61d8:
    // 0x4e61d8: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x4e61d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x4e61dc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4e61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4e61e0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4e61e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e61e4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e61e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e61e8: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e61e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e61ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e61f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4e61f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e61f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4e61f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4e61f8: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e61f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e61fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e6200: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e6200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6204: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x4e6204u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4e6208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e620c: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x4e620cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e6210: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6210u;
    SET_GPR_U32(ctx, 31, 0x4E6218u);
    ctx->pc = 0x4E6214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6210u;
    // 0x4e6214: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6210u, 0x4E6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6218u;
label_4e6218:
    // 0x4e6218: 0x2657fffc  addiu       $s7, $s2, -0x4
    ctx->pc = 0x4e6218u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4e621c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e621cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e6220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6224: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6224u;
    SET_GPR_U32(ctx, 31, 0x4E622Cu);
    ctx->pc = 0x4E6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6224u;
    // 0x4e6228: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6224u, 0x4E622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E622Cu;
label_4e622c:
    // 0x4e622c: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E622Cu;
    SET_GPR_U32(ctx, 31, 0x4E6234u);
    ctx->pc = 0x4E6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E622Cu;
    // 0x4e6230: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E622Cu, 0x4E6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6234u;
label_4e6234:
    // 0x4e6234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e6234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6238: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E6238u;
    SET_GPR_U32(ctx, 31, 0x4E6240u);
    ctx->pc = 0x4E623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6238u;
    // 0x4e623c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E6238u, 0x4E6240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6240u;
label_4e6240:
    // 0x4e6240: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e6240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e6244: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4e6244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4e6248: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4e6248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4e624c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4E624Cu;
    {
        const bool branch_taken_0x4e624c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E624Cu;
        // 0x4e6250: 0x8eb0489c  lw          $s0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e624c) {
            ctx->pc = 0x4E62F8u;
            goto label_4e62f8;
        }
    }
    ctx->pc = 0x4E6254u;
    // 0x4e6254: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e6254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e6258: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e6258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e625c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e625cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e6260: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e6260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e6264: 0x8e51fffc  lw          $s1, -0x4($s2)
    ctx->pc = 0x4e6264u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x4e6268: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6268u;
    SET_GPR_U32(ctx, 31, 0x4E6270u);
    ctx->pc = 0x4E626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6268u;
    // 0x4e626c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6268u, 0x4E6270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6270u;
label_4e6270:
    // 0x4e6270: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e6270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e6274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6278: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6278u;
    SET_GPR_U32(ctx, 31, 0x4E6280u);
    ctx->pc = 0x4E627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6278u;
    // 0x4e627c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6278u, 0x4E6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6280u;
label_4e6280:
    // 0x4e6280: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E6280u;
    SET_GPR_U32(ctx, 31, 0x4E6288u);
    ctx->pc = 0x4E6284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6280u;
    // 0x4e6284: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E6280u, 0x4E6288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6288u;
label_4e6288:
    // 0x4e6288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e6288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e628c: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E628Cu;
    SET_GPR_U32(ctx, 31, 0x4E6294u);
    ctx->pc = 0x4E6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E628Cu;
    // 0x4e6290: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E628Cu, 0x4E6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6294u;
label_4e6294:
    // 0x4e6294: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e6294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e6298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4e6298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4e629c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4e629cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4e62a0: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4E62A0u;
    {
        const bool branch_taken_0x4e62a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E62A0u;
        // 0x4e62a4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e62a0) {
            ctx->pc = 0x4E639Cu;
            goto label_4e639c;
        }
    }
    ctx->pc = 0x4E62A8u;
    // 0x4e62a8: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e62a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e62ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e62acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e62b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e62b4: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e62b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e62b8: 0x8e51fffc  lw          $s1, -0x4($s2)
    ctx->pc = 0x4e62b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x4e62bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e62bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e62c0: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E62C0u;
    SET_GPR_U32(ctx, 31, 0x4E62C8u);
    ctx->pc = 0x4E62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E62C0u;
    // 0x4e62c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E62C0u, 0x4E62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E62C8u;
label_4e62c8:
    // 0x4e62c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e62c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e62cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e62ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e62d0: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E62D0u;
    SET_GPR_U32(ctx, 31, 0x4E62D8u);
    ctx->pc = 0x4E62D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E62D0u;
    // 0x4e62d4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E62D0u, 0x4E62D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E62D8u;
label_4e62d8:
    // 0x4e62d8: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E62D8u;
    SET_GPR_U32(ctx, 31, 0x4E62E0u);
    ctx->pc = 0x4E62DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E62D8u;
    // 0x4e62dc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E62D8u, 0x4E62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E62E0u;
label_4e62e0:
    // 0x4e62e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e62e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e62e4: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E62E4u;
    SET_GPR_U32(ctx, 31, 0x4E62ECu);
    ctx->pc = 0x4E62E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E62E4u;
    // 0x4e62e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E62E4u, 0x4E62ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E62ECu;
label_4e62ec:
    // 0x4e62ec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e62ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e62f0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x4E62F0u;
    {
        const bool branch_taken_0x4e62f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E62F0u;
        // 0x4e62f4: 0x262b80a  movz        $s7, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e62f0) {
            ctx->pc = 0x4E6398u;
            goto label_4e6398;
        }
    }
    ctx->pc = 0x4E62F8u;
label_4e62f8:
    // 0x4e62f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e62fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e62fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6300: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e6300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e6304: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e6304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e6308: 0x8e51fffc  lw          $s1, -0x4($s2)
    ctx->pc = 0x4e6308u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x4e630c: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E630Cu;
    SET_GPR_U32(ctx, 31, 0x4E6314u);
    ctx->pc = 0x4E6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E630Cu;
    // 0x4e6310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E630Cu, 0x4E6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6314u;
label_4e6314:
    // 0x4e6314: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e6314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e6318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e631c: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E631Cu;
    SET_GPR_U32(ctx, 31, 0x4E6324u);
    ctx->pc = 0x4E6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E631Cu;
    // 0x4e6320: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E631Cu, 0x4E6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6324u;
label_4e6324:
    // 0x4e6324: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E6324u;
    SET_GPR_U32(ctx, 31, 0x4E632Cu);
    ctx->pc = 0x4E6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6324u;
    // 0x4e6328: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E6324u, 0x4E632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E632Cu;
label_4e632c:
    // 0x4e632c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e632cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6330: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E6330u;
    SET_GPR_U32(ctx, 31, 0x4E6338u);
    ctx->pc = 0x4E6334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6330u;
    // 0x4e6334: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E6330u, 0x4E6338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6338u;
label_4e6338:
    // 0x4e6338: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e6338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e633c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4e633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4e6340: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4e6340u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4e6344: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E6344u;
    {
        const bool branch_taken_0x4e6344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6344u;
        // 0x4e6348: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6344) {
            ctx->pc = 0x4E639Cu;
            goto label_4e639c;
        }
    }
    ctx->pc = 0x4E634Cu;
    // 0x4e634c: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e634cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e6350: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e6350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6354: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e6358: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e6358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e635c: 0x8e51fffc  lw          $s1, -0x4($s2)
    ctx->pc = 0x4e635cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x4e6360: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e6360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e6364: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6364u;
    SET_GPR_U32(ctx, 31, 0x4E636Cu);
    ctx->pc = 0x4E6368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6364u;
    // 0x4e6368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6364u, 0x4E636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E636Cu;
label_4e636c:
    // 0x4e636c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e636cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e6370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6374: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6374u;
    SET_GPR_U32(ctx, 31, 0x4E637Cu);
    ctx->pc = 0x4E6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6374u;
    // 0x4e6378: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6374u, 0x4E637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E637Cu;
label_4e637c:
    // 0x4e637c: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E637Cu;
    SET_GPR_U32(ctx, 31, 0x4E6384u);
    ctx->pc = 0x4E6380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E637Cu;
    // 0x4e6380: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E637Cu, 0x4E6384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6384u;
label_4e6384:
    // 0x4e6384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e6384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6388: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E6388u;
    SET_GPR_U32(ctx, 31, 0x4E6390u);
    ctx->pc = 0x4E638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6388u;
    // 0x4e638c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E6388u, 0x4E6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6390u;
label_4e6390:
    // 0x4e6390: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e6390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e6394: 0x282b80a  movz        $s7, $s4, $v0
    ctx->pc = 0x4e6394u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 20));
label_4e6398:
    // 0x4e6398: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x4e6398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e639c:
    // 0x4e639c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4e639cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e63a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e63a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e63a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e63a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e63a8: 0xc13980e  jal         func_4E6038
    ctx->pc = 0x4E63A8u;
    SET_GPR_U32(ctx, 31, 0x4E63B0u);
    ctx->pc = 0x4E63ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E63A8u;
    // 0x4e63ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6038u, 0x4E63A8u, 0x4E63B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E63B0u;
label_4e63b0:
    // 0x4e63b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e63b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e63b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e63b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e63b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e63b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e63bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e63bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e63c0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4e63c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e63c4: 0xc13985a  jal         func_4E6168
    ctx->pc = 0x4E63C4u;
    SET_GPR_U32(ctx, 31, 0x4E63CCu);
    ctx->pc = 0x4E63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E63C4u;
    // 0x4e63c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6168u;
    goto label_4e6168;
    ctx->pc = 0x4E63CCu;
label_4e63cc:
    // 0x4e63cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4e63ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e63d0: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x4e63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x4e63d4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e63d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e63d8: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4e63d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4e63dc: 0x1040ff74  beqz        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x4E63DCu;
    {
        const bool branch_taken_0x4e63dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e63dc) {
            ctx->pc = 0x4E61B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e61b0;
        }
    }
    ctx->pc = 0x4E63E4u;
label_4e63e4:
    // 0x4e63e4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4e63e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4e63e8:
    // 0x4e63e8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4e63e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4e63ec: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4e63ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e63f0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4e63f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e63f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4e63f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e63f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4e63f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e63fc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4e63fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e6400: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4e6400u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e6404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e6404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e6408: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6408u;
        // 0x4e640c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6410u;
}
