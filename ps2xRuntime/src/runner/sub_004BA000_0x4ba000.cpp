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

// Function: sub_004BA000
// Address: 0x4ba000 - 0x4ba400
void sub_004BA000_0x4ba000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BA000_0x4ba000");
#endif

    switch (ctx->pc) {
        case 0x4ba088u: goto label_4ba088;
        case 0x4ba0b0u: goto label_4ba0b0;
        case 0x4ba0d0u: goto label_4ba0d0;
        case 0x4ba11cu: goto label_4ba11c;
        case 0x4ba150u: goto label_4ba150;
        case 0x4ba16cu: goto label_4ba16c;
        case 0x4ba174u: goto label_4ba174;
        case 0x4ba180u: goto label_4ba180;
        case 0x4ba194u: goto label_4ba194;
        case 0x4ba1a0u: goto label_4ba1a0;
        case 0x4ba1b4u: goto label_4ba1b4;
        case 0x4ba1c4u: goto label_4ba1c4;
        case 0x4ba1f8u: goto label_4ba1f8;
        case 0x4ba204u: goto label_4ba204;
        case 0x4ba214u: goto label_4ba214;
        case 0x4ba228u: goto label_4ba228;
        case 0x4ba23cu: goto label_4ba23c;
        case 0x4ba24cu: goto label_4ba24c;
        case 0x4ba258u: goto label_4ba258;
        case 0x4ba268u: goto label_4ba268;
        case 0x4ba274u: goto label_4ba274;
        case 0x4ba284u: goto label_4ba284;
        case 0x4ba290u: goto label_4ba290;
        case 0x4ba2a0u: goto label_4ba2a0;
        case 0x4ba2acu: goto label_4ba2ac;
        case 0x4ba2b8u: goto label_4ba2b8;
        case 0x4ba2ccu: goto label_4ba2cc;
        case 0x4ba2e0u: goto label_4ba2e0;
        case 0x4ba2ecu: goto label_4ba2ec;
        case 0x4ba2f8u: goto label_4ba2f8;
        case 0x4ba308u: goto label_4ba308;
        case 0x4ba31cu: goto label_4ba31c;
        case 0x4ba330u: goto label_4ba330;
        case 0x4ba33cu: goto label_4ba33c;
        case 0x4ba348u: goto label_4ba348;
        case 0x4ba354u: goto label_4ba354;
        case 0x4ba364u: goto label_4ba364;
        case 0x4ba3d4u: goto label_4ba3d4;
        default: break;
    }

    ctx->pc = 0x4ba000u;

    // 0x4ba000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4ba000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4ba004: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ba004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ba008: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4ba008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4ba00c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ba00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba010: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4ba010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4ba014: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4ba014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4ba018: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4ba018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4ba01c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ba01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ba020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ba020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ba024: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ba024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba028: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x4ba028u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ba02c: 0x108fc2  srl         $s1, $s0, 31
    ctx->pc = 0x4ba02cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x4ba030: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4ba030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4ba034: 0x3c024086  lui         $v0, 0x4086
    ctx->pc = 0x4ba034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16518 << 16));
    // 0x4ba038: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba03c: 0x34422e41  ori         $v0, $v0, 0x2E41
    ctx->pc = 0x4ba03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11841);
    // 0x4ba040: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x4ba040u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x4ba044: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x4ba044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4ba048: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4BA048u;
    {
        const bool branch_taken_0x4ba048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA048u;
        // 0x4ba04c: 0x3c027fef  lui         $v0, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba048) {
            ctx->pc = 0x4BA0E0u;
            goto label_4ba0e0;
        }
    }
    ctx->pc = 0x4BA050u;
    // 0x4ba050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba054: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x4ba054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4ba058: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BA058u;
    {
        const bool branch_taken_0x4ba058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA058u;
        // 0x4ba05c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba058) {
            ctx->pc = 0x4BA0A0u;
            goto label_4ba0a0;
        }
    }
    ctx->pc = 0x4BA060u;
    // 0x4ba060: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4ba060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4ba064: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4ba064u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4ba068: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4ba068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4ba06c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba070: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x4ba070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4ba074: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ba074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ba078: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BA078u;
    {
        const bool branch_taken_0x4ba078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba078) {
            ctx->pc = 0x4BA090u;
            goto label_4ba090;
        }
    }
    ctx->pc = 0x4BA080u;
    // 0x4ba080: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA080u;
    SET_GPR_U32(ctx, 31, 0x4BA088u);
    ctx->pc = 0x4BA084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA080u;
    // 0x4ba084: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA080u, 0x4BA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA088u;
label_4ba088:
    // 0x4ba088: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x4BA088u;
    {
        const bool branch_taken_0x4ba088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA088u;
        // 0x4ba08c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba088) {
            ctx->pc = 0x4BA3DCu;
            goto label_4ba3dc;
        }
    }
    ctx->pc = 0x4BA090u;
label_4ba090:
    // 0x4ba090: 0x162000d1  bnez        $s1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x4BA090u;
    {
        const bool branch_taken_0x4ba090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA090u;
        // 0x4ba094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba090) {
            ctx->pc = 0x4BA3D8u;
            goto label_4ba3d8;
        }
    }
    ctx->pc = 0x4BA098u;
    // 0x4ba098: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x4BA098u;
    {
        const bool branch_taken_0x4ba098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA098u;
        // 0x4ba09c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba098) {
            ctx->pc = 0x4BA3D8u;
            goto label_4ba3d8;
        }
    }
    ctx->pc = 0x4BA0A0u;
label_4ba0a0:
    // 0x4ba0a0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba0a4: 0xdc251098  ld          $a1, 0x1098($at)
    ctx->pc = 0x4ba0a4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591098u));
    // 0x4ba0a8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4BA0A8u;
    SET_GPR_U32(ctx, 31, 0x4BA0B0u);
    ctx->pc = 0x4BA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA0A8u;
    // 0x4ba0ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4BA0A8u, 0x4BA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA0B0u;
label_4ba0b0:
    // 0x4ba0b0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BA0B0u;
    {
        const bool branch_taken_0x4ba0b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4BA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA0B0u;
        // 0x4ba0b4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba0b0) {
            ctx->pc = 0x4BA0C0u;
            goto label_4ba0c0;
        }
    }
    ctx->pc = 0x4BA0B8u;
    // 0x4ba0b8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x4BA0B8u;
    {
        const bool branch_taken_0x4ba0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA0B8u;
        // 0x4ba0bc: 0xdc621080  ld          $v0, 0x1080($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba0b8) {
            ctx->pc = 0x4BA3D8u;
            goto label_4ba3d8;
        }
    }
    ctx->pc = 0x4BA0C0u;
label_4ba0c0:
    // 0x4ba0c0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba0c4: 0xdc2510a0  ld          $a1, 0x10A0($at)
    ctx->pc = 0x4ba0c4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5910A0u));
    // 0x4ba0c8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4BA0C8u;
    SET_GPR_U32(ctx, 31, 0x4BA0D0u);
    ctx->pc = 0x4BA0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA0C8u;
    // 0x4ba0cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4BA0C8u, 0x4BA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA0D0u;
label_4ba0d0:
    // 0x4ba0d0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BA0D0u;
    {
        const bool branch_taken_0x4ba0d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4BA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA0D0u;
        // 0x4ba0d4: 0x3c023fd6  lui         $v0, 0x3FD6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16342 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba0d0) {
            ctx->pc = 0x4BA0E4u;
            goto label_4ba0e4;
        }
    }
    ctx->pc = 0x4BA0D8u;
    // 0x4ba0d8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x4BA0D8u;
    {
        const bool branch_taken_0x4ba0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA0D8u;
        // 0x4ba0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba0d8) {
            ctx->pc = 0x4BA3D8u;
            goto label_4ba3d8;
        }
    }
    ctx->pc = 0x4BA0E0u;
label_4ba0e0:
    // 0x4ba0e0: 0x3c023fd6  lui         $v0, 0x3FD6
    ctx->pc = 0x4ba0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16342 << 16));
label_4ba0e4:
    // 0x4ba0e4: 0x34422e42  ori         $v0, $v0, 0x2E42
    ctx->pc = 0x4ba0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11842);
    // 0x4ba0e8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x4ba0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4ba0ec: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x4BA0ECu;
    {
        const bool branch_taken_0x4ba0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA0ECu;
        // 0x4ba0f0: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba0ec) {
            ctx->pc = 0x4BA1CCu;
            goto label_4ba1cc;
        }
    }
    ctx->pc = 0x4BA0F4u;
    // 0x4ba0f4: 0x3442a2b1  ori         $v0, $v0, 0xA2B1
    ctx->pc = 0x4ba0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41649);
    // 0x4ba0f8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x4ba0f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4ba0fc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4BA0FCu;
    {
        const bool branch_taken_0x4ba0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA0FCu;
        // 0x4ba100: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba0fc) {
            ctx->pc = 0x4BA140u;
            goto label_4ba140;
        }
    }
    ctx->pc = 0x4BA104u;
    // 0x4ba104: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x4ba104u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x4ba108: 0x24421030  addiu       $v0, $v0, 0x1030
    ctx->pc = 0x4ba108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4144));
    // 0x4ba10c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ba10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba110: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4ba110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4ba114: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA114u;
    SET_GPR_U32(ctx, 31, 0x4BA11Cu);
    ctx->pc = 0x4BA118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA114u;
    // 0x4ba118: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA114u, 0x4BA11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA11Cu;
label_4ba11c:
    // 0x4ba11c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4ba11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4ba120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ba120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ba124: 0x24631040  addiu       $v1, $v1, 0x1040
    ctx->pc = 0x4ba124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
    // 0x4ba128: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x4ba128u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x4ba12c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4ba12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4ba130: 0x919823  subu        $s3, $a0, $s1
    ctx->pc = 0x4ba130u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x4ba134: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4ba134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba138: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4BA138u;
    {
        const bool branch_taken_0x4ba138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA138u;
        // 0x4ba13c: 0xde140000  ld          $s4, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba138) {
            ctx->pc = 0x4BA1B8u;
            goto label_4ba1b8;
        }
    }
    ctx->pc = 0x4BA140u;
label_4ba140:
    // 0x4ba140: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba144: 0xdc2510a8  ld          $a1, 0x10A8($at)
    ctx->pc = 0x4ba144u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5910A8u));
    // 0x4ba148: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA148u;
    SET_GPR_U32(ctx, 31, 0x4BA150u);
    ctx->pc = 0x4BA14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA148u;
    // 0x4ba14c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA148u, 0x4BA150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA150u;
label_4ba150:
    // 0x4ba150: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4ba150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4ba154: 0x1130c0  sll         $a2, $s1, 3
    ctx->pc = 0x4ba154u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x4ba158: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x4ba158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x4ba15c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ba15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba160: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4ba160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4ba164: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA164u;
    SET_GPR_U32(ctx, 31, 0x4BA16Cu);
    ctx->pc = 0x4BA168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA164u;
    // 0x4ba168: 0xdcc50000  ld          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA164u, 0x4BA16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA16Cu;
label_4ba16c:
    // 0x4ba16c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x4BA16Cu;
    SET_GPR_U32(ctx, 31, 0x4BA174u);
    ctx->pc = 0x4BA170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA16Cu;
    // 0x4ba170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x4BA16Cu, 0x4BA174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA174u;
label_4ba174:
    // 0x4ba174: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4ba174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba178: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4BA178u;
    SET_GPR_U32(ctx, 31, 0x4BA180u);
    ctx->pc = 0x4BA17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA178u;
    // 0x4ba17c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4BA178u, 0x4BA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA180u;
label_4ba180:
    // 0x4ba180: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4ba180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4ba184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ba184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba188: 0xdc651030  ld          $a1, 0x1030($v1)
    ctx->pc = 0x4ba188u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591030u));
    // 0x4ba18c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA18Cu;
    SET_GPR_U32(ctx, 31, 0x4BA194u);
    ctx->pc = 0x4BA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA18Cu;
    // 0x4ba190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA18Cu, 0x4BA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA194u;
label_4ba194:
    // 0x4ba194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ba194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba198: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA198u;
    SET_GPR_U32(ctx, 31, 0x4BA1A0u);
    ctx->pc = 0x4BA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA198u;
    // 0x4ba19c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA198u, 0x4BA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA1A0u;
label_4ba1a0:
    // 0x4ba1a0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4ba1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4ba1a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4ba1a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba1a8: 0xdc651040  ld          $a1, 0x1040($v1)
    ctx->pc = 0x4ba1a8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591040u));
    // 0x4ba1ac: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA1ACu;
    SET_GPR_U32(ctx, 31, 0x4BA1B4u);
    ctx->pc = 0x4BA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA1ACu;
    // 0x4ba1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA1ACu, 0x4BA1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA1B4u;
label_4ba1b4:
    // 0x4ba1b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4ba1b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ba1b8:
    // 0x4ba1b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ba1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba1bc: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA1BCu;
    SET_GPR_U32(ctx, 31, 0x4BA1C4u);
    ctx->pc = 0x4BA1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA1BCu;
    // 0x4ba1c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA1BCu, 0x4BA1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA1C4u;
label_4ba1c4:
    // 0x4ba1c4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4BA1C4u;
    {
        const bool branch_taken_0x4ba1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA1C4u;
        // 0x4ba1c8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba1c4) {
            ctx->pc = 0x4BA21Cu;
            goto label_4ba21c;
        }
    }
    ctx->pc = 0x4BA1CCu;
label_4ba1cc:
    // 0x4ba1cc: 0x3c023e2f  lui         $v0, 0x3E2F
    ctx->pc = 0x4ba1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15919 << 16));
    // 0x4ba1d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba1d4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x4ba1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4ba1d8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4BA1D8u;
    {
        const bool branch_taken_0x4ba1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ba1d8) {
            ctx->pc = 0x4BA1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BA1D8u;
            // 0x4ba1dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BA21Cu;
            goto label_4ba21c;
        }
    }
    ctx->pc = 0x4BA1E0u;
    // 0x4ba1e0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4ba1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4ba1e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ba1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba1e8: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x4ba1e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4ba1ec: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x4ba1ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x4ba1f0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA1F0u;
    SET_GPR_U32(ctx, 31, 0x4BA1F8u);
    ctx->pc = 0x4BA1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA1F0u;
    // 0x4ba1f4: 0xdc451088  ld          $a1, 0x1088($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA1F0u, 0x4BA1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA1F8u;
label_4ba1f8:
    // 0x4ba1f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ba1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba1fc: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4BA1FCu;
    SET_GPR_U32(ctx, 31, 0x4BA204u);
    ctx->pc = 0x4BA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA1FCu;
    // 0x4ba200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4BA1FCu, 0x4BA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA204u;
label_4ba204:
    // 0x4ba204: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BA204u;
    {
        const bool branch_taken_0x4ba204 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4BA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA204u;
        // 0x4ba208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba204) {
            ctx->pc = 0x4BA220u;
            goto label_4ba220;
        }
    }
    ctx->pc = 0x4BA20Cu;
    // 0x4ba20c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA20Cu;
    SET_GPR_U32(ctx, 31, 0x4BA214u);
    ctx->pc = 0x4BA210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA20Cu;
    // 0x4ba210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA20Cu, 0x4BA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA214u;
label_4ba214:
    // 0x4ba214: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x4BA214u;
    {
        const bool branch_taken_0x4ba214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA214u;
        // 0x4ba218: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba214) {
            ctx->pc = 0x4BA3DCu;
            goto label_4ba3dc;
        }
    }
    ctx->pc = 0x4BA21Cu;
label_4ba21c:
    // 0x4ba21c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ba21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ba220:
    // 0x4ba220: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA220u;
    SET_GPR_U32(ctx, 31, 0x4BA228u);
    ctx->pc = 0x4BA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA220u;
    // 0x4ba224: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA220u, 0x4BA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA228u;
label_4ba228:
    // 0x4ba228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ba228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba22c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba230: 0xdc2510b0  ld          $a1, 0x10B0($at)
    ctx->pc = 0x4ba230u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5910B0u));
    // 0x4ba234: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA234u;
    SET_GPR_U32(ctx, 31, 0x4BA23Cu);
    ctx->pc = 0x4BA238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA234u;
    // 0x4ba238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA234u, 0x4BA23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA23Cu;
label_4ba23c:
    // 0x4ba23c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba240: 0xdc2510b8  ld          $a1, 0x10B8($at)
    ctx->pc = 0x4ba240u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5910B8u));
    // 0x4ba244: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA244u;
    SET_GPR_U32(ctx, 31, 0x4BA24Cu);
    ctx->pc = 0x4BA248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA244u;
    // 0x4ba248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA244u, 0x4BA24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA24Cu;
label_4ba24c:
    // 0x4ba24c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ba24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba250: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA250u;
    SET_GPR_U32(ctx, 31, 0x4BA258u);
    ctx->pc = 0x4BA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA250u;
    // 0x4ba254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA250u, 0x4BA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA258u;
label_4ba258:
    // 0x4ba258: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba25c: 0xdc2510c0  ld          $a1, 0x10C0($at)
    ctx->pc = 0x4ba25cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5910C0u));
    // 0x4ba260: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA260u;
    SET_GPR_U32(ctx, 31, 0x4BA268u);
    ctx->pc = 0x4BA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA260u;
    // 0x4ba264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA260u, 0x4BA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA268u;
label_4ba268:
    // 0x4ba268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ba268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba26c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA26Cu;
    SET_GPR_U32(ctx, 31, 0x4BA274u);
    ctx->pc = 0x4BA270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA26Cu;
    // 0x4ba270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA26Cu, 0x4BA274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA274u;
label_4ba274:
    // 0x4ba274: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba278: 0xdc2510c8  ld          $a1, 0x10C8($at)
    ctx->pc = 0x4ba278u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5910C8u));
    // 0x4ba27c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA27Cu;
    SET_GPR_U32(ctx, 31, 0x4BA284u);
    ctx->pc = 0x4BA280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA27Cu;
    // 0x4ba280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA27Cu, 0x4BA284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA284u;
label_4ba284:
    // 0x4ba284: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ba284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba288: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA288u;
    SET_GPR_U32(ctx, 31, 0x4BA290u);
    ctx->pc = 0x4BA28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA288u;
    // 0x4ba28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA288u, 0x4BA290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA290u;
label_4ba290:
    // 0x4ba290: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba294: 0xdc2510d0  ld          $a1, 0x10D0($at)
    ctx->pc = 0x4ba294u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5910D0u));
    // 0x4ba298: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA298u;
    SET_GPR_U32(ctx, 31, 0x4BA2A0u);
    ctx->pc = 0x4BA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA298u;
    // 0x4ba29c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA298u, 0x4BA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA2A0u;
label_4ba2a0:
    // 0x4ba2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba2a4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA2A4u;
    SET_GPR_U32(ctx, 31, 0x4BA2ACu);
    ctx->pc = 0x4BA2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA2A4u;
    // 0x4ba2a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA2A4u, 0x4BA2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA2ACu;
label_4ba2ac:
    // 0x4ba2ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ba2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba2b0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA2B0u;
    SET_GPR_U32(ctx, 31, 0x4BA2B8u);
    ctx->pc = 0x4BA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA2B0u;
    // 0x4ba2b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA2B0u, 0x4BA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA2B8u;
label_4ba2b8:
    // 0x4ba2b8: 0x16600015  bnez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x4BA2B8u;
    {
        const bool branch_taken_0x4ba2b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA2B8u;
        // 0x4ba2bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba2b8) {
            ctx->pc = 0x4BA310u;
            goto label_4ba310;
        }
    }
    ctx->pc = 0x4BA2C0u;
    // 0x4ba2c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ba2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba2c4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA2C4u;
    SET_GPR_U32(ctx, 31, 0x4BA2CCu);
    ctx->pc = 0x4BA2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA2C4u;
    // 0x4ba2c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA2C4u, 0x4BA2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA2CCu;
label_4ba2cc:
    // 0x4ba2cc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x4ba2ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4ba2d0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4ba2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4ba2d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ba2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba2d8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA2D8u;
    SET_GPR_U32(ctx, 31, 0x4BA2E0u);
    ctx->pc = 0x4BA2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA2D8u;
    // 0x4ba2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA2D8u, 0x4BA2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA2E0u;
label_4ba2e0:
    // 0x4ba2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba2e4: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BA2E4u;
    SET_GPR_U32(ctx, 31, 0x4BA2ECu);
    ctx->pc = 0x4BA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA2E4u;
    // 0x4ba2e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BA2E4u, 0x4BA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA2ECu;
label_4ba2ec:
    // 0x4ba2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ba2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba2f0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA2F0u;
    SET_GPR_U32(ctx, 31, 0x4BA2F8u);
    ctx->pc = 0x4BA2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA2F0u;
    // 0x4ba2f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA2F0u, 0x4BA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA2F8u;
label_4ba2f8:
    // 0x4ba2f8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x4ba2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4ba2fc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4ba2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4ba300: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA300u;
    SET_GPR_U32(ctx, 31, 0x4BA308u);
    ctx->pc = 0x4BA304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA300u;
    // 0x4ba304: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA300u, 0x4BA308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA308u;
label_4ba308:
    // 0x4ba308: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x4BA308u;
    {
        const bool branch_taken_0x4ba308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA308u;
        // 0x4ba30c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba308) {
            ctx->pc = 0x4BA3DCu;
            goto label_4ba3dc;
        }
    }
    ctx->pc = 0x4BA310u;
label_4ba310:
    // 0x4ba310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ba310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba314: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA314u;
    SET_GPR_U32(ctx, 31, 0x4BA31Cu);
    ctx->pc = 0x4BA318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA314u;
    // 0x4ba318: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA314u, 0x4BA31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA31Cu;
label_4ba31c:
    // 0x4ba31c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x4ba31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4ba320: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x4ba320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x4ba324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ba324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba328: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA328u;
    SET_GPR_U32(ctx, 31, 0x4BA330u);
    ctx->pc = 0x4BA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA328u;
    // 0x4ba32c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA328u, 0x4BA330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA330u;
label_4ba330:
    // 0x4ba330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba334: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BA334u;
    SET_GPR_U32(ctx, 31, 0x4BA33Cu);
    ctx->pc = 0x4BA338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA334u;
    // 0x4ba338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BA334u, 0x4BA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA33Cu;
label_4ba33c:
    // 0x4ba33c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ba33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba340: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA340u;
    SET_GPR_U32(ctx, 31, 0x4BA348u);
    ctx->pc = 0x4BA344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA340u;
    // 0x4ba344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA340u, 0x4BA348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA348u;
label_4ba348:
    // 0x4ba348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ba348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba34c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA34Cu;
    SET_GPR_U32(ctx, 31, 0x4BA354u);
    ctx->pc = 0x4BA350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA34Cu;
    // 0x4ba350: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA34Cu, 0x4BA354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA354u;
label_4ba354:
    // 0x4ba354: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x4ba354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4ba358: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4ba358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4ba35c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA35Cu;
    SET_GPR_U32(ctx, 31, 0x4BA364u);
    ctx->pc = 0x4BA360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA35Cu;
    // 0x4ba360: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA35Cu, 0x4BA364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA364u;
label_4ba364:
    // 0x4ba364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ba364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba368: 0x2a62fc03  slti        $v0, $s3, -0x3FD
    ctx->pc = 0x4ba368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294966275) ? 1 : 0);
    // 0x4ba36c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BA36Cu;
    {
        const bool branch_taken_0x4ba36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA36Cu;
        // 0x4ba370: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba36c) {
            ctx->pc = 0x4BA3A0u;
            goto label_4ba3a0;
        }
    }
    ctx->pc = 0x4BA374u;
    // 0x4ba374: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ba374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ba378: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4ba378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba37c: 0x132500  sll         $a0, $s3, 20
    ctx->pc = 0x4ba37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x4ba380: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ba380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ba384: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4ba384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4ba388: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ba388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ba38c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ba38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ba390: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ba390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ba394: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x4ba394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ba398: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4BA398u;
    {
        const bool branch_taken_0x4ba398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA398u;
        // 0x4ba39c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba398) {
            ctx->pc = 0x4BA3D8u;
            goto label_4ba3d8;
        }
    }
    ctx->pc = 0x4BA3A0u;
label_4ba3a0:
    // 0x4ba3a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ba3a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ba3a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ba3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba3a8: 0x266303e8  addiu       $v1, $s3, 0x3E8
    ctx->pc = 0x4ba3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1000));
    // 0x4ba3ac: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4ba3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4ba3b0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4ba3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4ba3b4: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x4ba3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x4ba3b8: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4ba3b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4ba3bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ba3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ba3c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ba3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ba3c4: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x4ba3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4ba3c8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4ba3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4ba3cc: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA3CCu;
    SET_GPR_U32(ctx, 31, 0x4BA3D4u);
    ctx->pc = 0x4BA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA3CCu;
    // 0x4ba3d0: 0xdc651090  ld          $a1, 0x1090($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA3CCu, 0x4BA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA3D4u;
label_4ba3d4:
    // 0x4ba3d4: 0x0  nop
    ctx->pc = 0x4ba3d4u;
    // NOP
label_4ba3d8:
    // 0x4ba3d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4ba3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4ba3dc:
    // 0x4ba3dc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4ba3dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ba3e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ba3e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ba3e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4ba3e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ba3e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ba3e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ba3ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ba3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ba3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ba3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ba3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BA3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA3F4u;
        // 0x4ba3f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BA3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BA3FCu;
    // 0x4ba3fc: 0x0  nop
    ctx->pc = 0x4ba3fcu;
    // NOP
    ctx->pc = 0x4ba400u;
}
