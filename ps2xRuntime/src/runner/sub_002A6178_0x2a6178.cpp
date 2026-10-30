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

// Function: sub_002A6178
// Address: 0x2a6178 - 0x2a62d8
void sub_002A6178_0x2a6178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6178_0x2a6178");
#endif

    switch (ctx->pc) {
        case 0x2a6178u: goto label_2a6178;
        case 0x2a617cu: goto label_2a617c;
        case 0x2a6180u: goto label_2a6180;
        case 0x2a6184u: goto label_2a6184;
        case 0x2a6188u: goto label_2a6188;
        case 0x2a618cu: goto label_2a618c;
        case 0x2a6190u: goto label_2a6190;
        case 0x2a6194u: goto label_2a6194;
        case 0x2a6198u: goto label_2a6198;
        case 0x2a619cu: goto label_2a619c;
        case 0x2a61a0u: goto label_2a61a0;
        case 0x2a61a4u: goto label_2a61a4;
        case 0x2a61a8u: goto label_2a61a8;
        case 0x2a61acu: goto label_2a61ac;
        case 0x2a61b0u: goto label_2a61b0;
        case 0x2a61b4u: goto label_2a61b4;
        case 0x2a61b8u: goto label_2a61b8;
        case 0x2a61bcu: goto label_2a61bc;
        case 0x2a61c0u: goto label_2a61c0;
        case 0x2a61c4u: goto label_2a61c4;
        case 0x2a61c8u: goto label_2a61c8;
        case 0x2a61ccu: goto label_2a61cc;
        case 0x2a61d0u: goto label_2a61d0;
        case 0x2a61d4u: goto label_2a61d4;
        case 0x2a61d8u: goto label_2a61d8;
        case 0x2a61dcu: goto label_2a61dc;
        case 0x2a61e0u: goto label_2a61e0;
        case 0x2a61e4u: goto label_2a61e4;
        case 0x2a61e8u: goto label_2a61e8;
        case 0x2a61ecu: goto label_2a61ec;
        case 0x2a61f0u: goto label_2a61f0;
        case 0x2a61f4u: goto label_2a61f4;
        case 0x2a61f8u: goto label_2a61f8;
        case 0x2a61fcu: goto label_2a61fc;
        case 0x2a6200u: goto label_2a6200;
        case 0x2a6204u: goto label_2a6204;
        case 0x2a6208u: goto label_2a6208;
        case 0x2a620cu: goto label_2a620c;
        case 0x2a6210u: goto label_2a6210;
        case 0x2a6214u: goto label_2a6214;
        case 0x2a6218u: goto label_2a6218;
        case 0x2a621cu: goto label_2a621c;
        case 0x2a6220u: goto label_2a6220;
        case 0x2a6224u: goto label_2a6224;
        case 0x2a6228u: goto label_2a6228;
        case 0x2a622cu: goto label_2a622c;
        case 0x2a6230u: goto label_2a6230;
        case 0x2a6234u: goto label_2a6234;
        case 0x2a6238u: goto label_2a6238;
        case 0x2a623cu: goto label_2a623c;
        case 0x2a6240u: goto label_2a6240;
        case 0x2a6244u: goto label_2a6244;
        case 0x2a6248u: goto label_2a6248;
        case 0x2a624cu: goto label_2a624c;
        case 0x2a6250u: goto label_2a6250;
        case 0x2a6254u: goto label_2a6254;
        case 0x2a6258u: goto label_2a6258;
        case 0x2a625cu: goto label_2a625c;
        case 0x2a6260u: goto label_2a6260;
        case 0x2a6264u: goto label_2a6264;
        case 0x2a6268u: goto label_2a6268;
        case 0x2a626cu: goto label_2a626c;
        case 0x2a6270u: goto label_2a6270;
        case 0x2a6274u: goto label_2a6274;
        case 0x2a6278u: goto label_2a6278;
        case 0x2a627cu: goto label_2a627c;
        case 0x2a6280u: goto label_2a6280;
        case 0x2a6284u: goto label_2a6284;
        case 0x2a6288u: goto label_2a6288;
        case 0x2a628cu: goto label_2a628c;
        case 0x2a6290u: goto label_2a6290;
        case 0x2a6294u: goto label_2a6294;
        case 0x2a6298u: goto label_2a6298;
        case 0x2a629cu: goto label_2a629c;
        case 0x2a62a0u: goto label_2a62a0;
        case 0x2a62a4u: goto label_2a62a4;
        case 0x2a62a8u: goto label_2a62a8;
        case 0x2a62acu: goto label_2a62ac;
        case 0x2a62b0u: goto label_2a62b0;
        case 0x2a62b4u: goto label_2a62b4;
        case 0x2a62b8u: goto label_2a62b8;
        case 0x2a62bcu: goto label_2a62bc;
        case 0x2a62c0u: goto label_2a62c0;
        case 0x2a62c4u: goto label_2a62c4;
        case 0x2a62c8u: goto label_2a62c8;
        case 0x2a62ccu: goto label_2a62cc;
        case 0x2a62d0u: goto label_2a62d0;
        case 0x2a62d4u: goto label_2a62d4;
        default: break;
    }

    ctx->pc = 0x2a6178u;

label_2a6178:
    // 0x2a6178: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a6178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a617c:
    // 0x2a617c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a6180:
    // 0x2a6180: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a6180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6184:
    // 0x2a6184: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a6184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2a6188:
    // 0x2a6188: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2a6188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a618c:
    // 0x2a618c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2a6190:
    // 0x2a6190: 0x78400  sll         $s0, $a3, 16
    ctx->pc = 0x2a6190u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2a6194:
    // 0x2a6194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a6194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a6198:
    // 0x2a6198: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a6198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a619c:
    // 0x2a619c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2a619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2a61a0:
    // 0x2a61a0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2a61a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a61a4:
    // 0x2a61a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a61a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a61a8:
    // 0x2a61a8: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x2a61a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_2a61ac:
    // 0x2a61ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a61acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a61b0:
    // 0x2a61b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a61b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a61b4:
    // 0x2a61b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a61b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a61b8:
    // 0x2a61b8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2a61b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a61bc:
    // 0x2a61bc: 0xc0b81d2  jal         func_2E0748
label_2a61c0:
    if (ctx->pc == 0x2A61C0u) {
        ctx->pc = 0x2A61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61BCu;
        // 0x2a61c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A61C4u;
        goto label_2a61c4;
    }
    ctx->pc = 0x2A61BCu;
    SET_GPR_U32(ctx, 31, 0x2A61C4u);
    ctx->pc = 0x2A61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61BCu;
    // 0x2a61c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0748u, 0x2A61BCu, 0x2A61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61C4u;
label_2a61c4:
    // 0x2a61c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2a61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2a61c8:
    // 0x2a61c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a61c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a61cc:
    // 0x2a61cc: 0x2442f970  addiu       $v0, $v0, -0x690
    ctx->pc = 0x2a61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965616));
label_2a61d0:
    // 0x2a61d0: 0xa6300040  sh          $s0, 0x40($s1)
    ctx->pc = 0x2a61d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 16));
label_2a61d4:
    // 0x2a61d4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2a61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2a61d8:
    // 0x2a61d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a61dc:
    // 0x2a61dc: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_2a61e0:
    if (ctx->pc == 0x2A61E0u) {
        ctx->pc = 0x2A61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61DCu;
        // 0x2a61e0: 0xae320044  sw          $s2, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A61E4u;
        goto label_2a61e4;
    }
    ctx->pc = 0x2A61DCu;
    {
        const bool branch_taken_0x2a61dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61DCu;
        // 0x2a61e0: 0xae320044  sw          $s2, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a61dc) {
            ctx->pc = 0x2A6244u;
            goto label_2a6244;
        }
    }
    ctx->pc = 0x2A61E4u;
label_2a61e4:
    // 0x2a61e4: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x2a61e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_2a61e8:
    // 0x2a61e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a61ec:
    if (ctx->pc == 0x2A61ECu) {
        ctx->pc = 0x2A61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61E8u;
        // 0x2a61ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A61F0u;
        goto label_2a61f0;
    }
    ctx->pc = 0x2A61E8u;
    {
        const bool branch_taken_0x2a61e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61E8u;
        // 0x2a61ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a61e8) {
            ctx->pc = 0x2A6200u;
            goto label_2a6200;
        }
    }
    ctx->pc = 0x2A61F0u;
label_2a61f0:
    // 0x2a61f0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_2a61f4:
    if (ctx->pc == 0x2A61F4u) {
        ctx->pc = 0x2A61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61F0u;
        // 0x2a61f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A61F8u;
        goto label_2a61f8;
    }
    ctx->pc = 0x2A61F0u;
    {
        const bool branch_taken_0x2a61f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61F0u;
        // 0x2a61f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a61f0) {
            ctx->pc = 0x2A6214u;
            goto label_2a6214;
        }
    }
    ctx->pc = 0x2A61F8u;
label_2a61f8:
    // 0x2a61f8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2a61fc:
    if (ctx->pc == 0x2A61FCu) {
        ctx->pc = 0x2A61FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61F8u;
        // 0x2a61fc: 0xa620004a  sh          $zero, 0x4A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6200u;
        goto label_2a6200;
    }
    ctx->pc = 0x2A61F8u;
    {
        const bool branch_taken_0x2a61f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A61FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61F8u;
        // 0x2a61fc: 0xa620004a  sh          $zero, 0x4A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a61f8) {
            ctx->pc = 0x2A6250u;
            goto label_2a6250;
        }
    }
    ctx->pc = 0x2A6200u;
label_2a6200:
    // 0x2a6200: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2a6200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a6204:
    // 0x2a6204: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_2a6208:
    if (ctx->pc == 0x2A6208u) {
        ctx->pc = 0x2A6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6204u;
        // 0x2a6208: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A620Cu;
        goto label_2a620c;
    }
    ctx->pc = 0x2A6204u;
    {
        const bool branch_taken_0x2a6204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6204u;
        // 0x2a6208: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6204) {
            ctx->pc = 0x2A6248u;
            goto label_2a6248;
        }
    }
    ctx->pc = 0x2A620Cu;
label_2a620c:
    // 0x2a620c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a6210:
    if (ctx->pc == 0x2A6210u) {
        ctx->pc = 0x2A6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A620Cu;
        // 0x2a6210: 0xa620004a  sh          $zero, 0x4A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6214u;
        goto label_2a6214;
    }
    ctx->pc = 0x2A620Cu;
    {
        const bool branch_taken_0x2a620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A620Cu;
        // 0x2a6210: 0xa620004a  sh          $zero, 0x4A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a620c) {
            ctx->pc = 0x2A6250u;
            goto label_2a6250;
        }
    }
    ctx->pc = 0x2A6214u;
label_2a6214:
    // 0x2a6214: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a6214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a6218:
    // 0x2a6218: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a6218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2a621c:
    // 0x2a621c: 0xc0cd4e4  jal         func_335390
label_2a6220:
    if (ctx->pc == 0x2A6220u) {
        ctx->pc = 0x2A6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A621Cu;
        // 0x2a6220: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6224u;
        goto label_2a6224;
    }
    ctx->pc = 0x2A621Cu;
    SET_GPR_U32(ctx, 31, 0x2A6224u);
    ctx->pc = 0x2A6220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A621Cu;
    // 0x2a6220: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A621Cu, 0x2A6224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6224u;
label_2a6224:
    // 0x2a6224: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a6224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a6228:
    // 0x2a6228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a6228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a622c:
    // 0x2a622c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2a622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2a6230:
    // 0x2a6230: 0xa6220048  sh          $v0, 0x48($s1)
    ctx->pc = 0x2a6230u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 2));
label_2a6234:
    // 0x2a6234: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a6234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a6238:
    // 0x2a6238: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x2a6238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
label_2a623c:
    // 0x2a623c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a6240:
    if (ctx->pc == 0x2A6240u) {
        ctx->pc = 0x2A6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A623Cu;
        // 0x2a6240: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6244u;
        goto label_2a6244;
    }
    ctx->pc = 0x2A623Cu;
    {
        const bool branch_taken_0x2a623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A623Cu;
        // 0x2a6240: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a623c) {
            ctx->pc = 0x2A624Cu;
            goto label_2a624c;
        }
    }
    ctx->pc = 0x2A6244u;
label_2a6244:
    // 0x2a6244: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a6244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6248:
    // 0x2a6248: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2a6248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_2a624c:
    // 0x2a624c: 0xa620004a  sh          $zero, 0x4A($s1)
    ctx->pc = 0x2a624cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 0));
label_2a6250:
    // 0x2a6250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a6250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a6254:
    // 0x2a6254: 0xc0a9826  jal         func_2A6098
label_2a6258:
    if (ctx->pc == 0x2A6258u) {
        ctx->pc = 0x2A6258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6254u;
        // 0x2a6258: 0xa620004c  sh          $zero, 0x4C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A625Cu;
        goto label_2a625c;
    }
    ctx->pc = 0x2A6254u;
    SET_GPR_U32(ctx, 31, 0x2A625Cu);
    ctx->pc = 0x2A6258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6254u;
    // 0x2a6258: 0xa620004c  sh          $zero, 0x4C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6098u, 0x2A6254u, 0x2A625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A625Cu;
label_2a625c:
    // 0x2a625c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x2a625cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_2a6260:
    // 0x2a6260: 0xae620270  sw          $v0, 0x270($s3)
    ctx->pc = 0x2a6260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 624), GPR_U32(ctx, 2));
label_2a6264:
    // 0x2a6264: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a6264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6268:
    // 0x2a6268: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a626c:
    // 0x2a626c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6270:
    // 0x2a6270: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6274:
    // 0x2a6274: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6278:
    // 0x2a6278: 0x40f809  jalr        $v0
label_2a627c:
    if (ctx->pc == 0x2A627Cu) {
        ctx->pc = 0x2A627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6278u;
        // 0x2a627c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6280u;
        goto label_2a6280;
    }
    ctx->pc = 0x2A6278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6280u);
        ctx->pc = 0x2A627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6278u;
        // 0x2a627c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6278u, 0x2A6280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6280u;
label_2a6280:
    // 0x2a6280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6284:
    // 0x2a6284: 0xc0a49d6  jal         func_292758
label_2a6288:
    if (ctx->pc == 0x2A6288u) {
        ctx->pc = 0x2A6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6284u;
        // 0x2a6288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A628Cu;
        goto label_2a628c;
    }
    ctx->pc = 0x2A6284u;
    SET_GPR_U32(ctx, 31, 0x2A628Cu);
    ctx->pc = 0x2A6288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6284u;
    // 0x2a6288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A6284u, 0x2A628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A628Cu;
label_2a628c:
    // 0x2a628c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6290:
    // 0x2a6290: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6294:
    // 0x2a6294: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a6294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6298:
    // 0x2a6298: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a629c:
    // 0x2a629c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a62a0:
    // 0x2a62a0: 0x40f809  jalr        $v0
label_2a62a4:
    if (ctx->pc == 0x2A62A4u) {
        ctx->pc = 0x2A62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A62A0u;
        // 0x2a62a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A62A8u;
        goto label_2a62a8;
    }
    ctx->pc = 0x2A62A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A62A8u);
        ctx->pc = 0x2A62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A62A0u;
        // 0x2a62a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A62A0u, 0x2A62A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A62A8u;
label_2a62a8:
    // 0x2a62a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a62a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a62ac:
    // 0x2a62ac: 0xc0a49c2  jal         func_292708
label_2a62b0:
    if (ctx->pc == 0x2A62B0u) {
        ctx->pc = 0x2A62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A62ACu;
        // 0x2a62b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A62B4u;
        goto label_2a62b4;
    }
    ctx->pc = 0x2A62ACu;
    SET_GPR_U32(ctx, 31, 0x2A62B4u);
    ctx->pc = 0x2A62B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62ACu;
    // 0x2a62b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A62ACu, 0x2A62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62B4u;
label_2a62b4:
    // 0x2a62b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a62b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a62b8:
    // 0x2a62b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a62b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a62bc:
    // 0x2a62bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a62bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a62c0:
    // 0x2a62c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a62c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a62c4:
    // 0x2a62c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2a62c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a62c8:
    // 0x2a62c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a62c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a62cc:
    // 0x2a62cc: 0x3e00008  jr          $ra
label_2a62d0:
    if (ctx->pc == 0x2A62D0u) {
        ctx->pc = 0x2A62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A62CCu;
        // 0x2a62d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A62D4u;
        goto label_2a62d4;
    }
    ctx->pc = 0x2A62CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A62CCu;
        // 0x2a62d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A62CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A62D4u;
label_2a62d4:
    // 0x2a62d4: 0x0  nop
    ctx->pc = 0x2a62d4u;
    // NOP
    ctx->pc = 0x2a62d8u;
}
