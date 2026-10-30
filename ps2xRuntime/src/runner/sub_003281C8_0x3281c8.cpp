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

// Function: sub_003281C8
// Address: 0x3281c8 - 0x3283c8
void sub_003281C8_0x3281c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003281C8_0x3281c8");
#endif

    switch (ctx->pc) {
        case 0x328208u: goto label_328208;
        case 0x328380u: goto label_328380;
        default: break;
    }

    ctx->pc = 0x3281c8u;

    // 0x3281c8: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3281c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x3281cc: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3281ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
    // 0x3281d0: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3281d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
    // 0x3281d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3281d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3281d8: 0x7fb30400  sq          $s3, 0x400($sp)
    ctx->pc = 0x3281d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 19));
    // 0x3281dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3281dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3281e0: 0x7fb20410  sq          $s2, 0x410($sp)
    ctx->pc = 0x3281e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 18));
    // 0x3281e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3281e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3281e8: 0xffbf03f0  sd          $ra, 0x3F0($sp)
    ctx->pc = 0x3281e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 31));
    // 0x3281ec: 0x84880020  lh          $t0, 0x20($a0)
    ctx->pc = 0x3281ecu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3281f0: 0x84830022  lh          $v1, 0x22($a0)
    ctx->pc = 0x3281f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x3281f4: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x3281f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3281f8: 0x8c920018  lw          $s2, 0x18($a0)
    ctx->pc = 0x3281f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3281fc: 0x1a200064  blez        $s1, . + 4 + (0x64 << 2)
    ctx->pc = 0x3281FCu;
    {
        const bool branch_taken_0x3281fc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x328200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281FCu;
        // 0x328200: 0x43400b  movn        $t0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281fc) {
            ctx->pc = 0x328390u;
            goto label_328390;
        }
    }
    ctx->pc = 0x328204u;
    // 0x328204: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x328204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_328208:
    // 0x328208: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x328208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x32820c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x328210: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x328210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x328214: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x328214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x328218: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x328218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x32821c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x32821Cu;
    {
        const bool branch_taken_0x32821c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32821Cu;
        // 0x328220: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32821c) {
            ctx->pc = 0x328348u;
            goto label_328348;
        }
    }
    ctx->pc = 0x328224u;
    // 0x328224: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x328224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x328228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x328228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32822c: 0x24425200  addiu       $v0, $v0, 0x5200
    ctx->pc = 0x32822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x328230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x328230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x328234: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x328234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328238: 0x800008  jr          $a0
    ctx->pc = 0x328238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x328240u: goto label_328240;
            case 0x328248u: goto label_328248;
            case 0x328254u: goto label_328254;
            case 0x328278u: goto label_328278;
            case 0x32828Cu: goto label_32828c;
            case 0x328298u: goto label_328298;
            case 0x3282A8u: goto label_3282a8;
            case 0x3282B8u: goto label_3282b8;
            case 0x3282D8u: goto label_3282d8;
            case 0x3282FCu: goto label_3282fc;
            case 0x328348u: goto label_328348;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328238u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x328240u;
label_328240:
    // 0x328240: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x328240u;
    {
        const bool branch_taken_0x328240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328240u;
        // 0x328244: 0x54182  srl         $t0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328240) {
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x328248u;
label_328248:
    // 0x328248: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x328248u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x32824c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x32824Cu;
    {
        const bool branch_taken_0x32824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32824Cu;
        // 0x328250: 0x304801ff  andi        $t0, $v0, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32824c) {
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x328254u;
label_328254:
    // 0x328254: 0x53982  srl         $a3, $a1, 6
    ctx->pc = 0x328254u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x328258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32825c: 0x30e701ff  andi        $a3, $a3, 0x1FF
    ctx->pc = 0x32825cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)511);
    // 0x328260: 0x533c2  srl         $a2, $a1, 15
    ctx->pc = 0x328260u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 15));
    // 0x328264: 0x38e200ff  xori        $v0, $a3, 0xFF
    ctx->pc = 0x328264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)255);
    // 0x328268: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x328268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32826c: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x32826cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x328270: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x328270u;
    {
        const bool branch_taken_0x328270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328270u;
        // 0x328274: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328270) {
            ctx->pc = 0x328378u;
            goto label_328378;
        }
    }
    ctx->pc = 0x328278u;
label_328278:
    // 0x328278: 0x53982  srl         $a3, $a1, 6
    ctx->pc = 0x328278u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x32827c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x32827cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x328280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328284: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x328284u;
    {
        const bool branch_taken_0x328284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328284u;
        // 0x328288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328284) {
            ctx->pc = 0x328378u;
            goto label_328378;
        }
    }
    ctx->pc = 0x32828Cu;
label_32828c:
    // 0x32828c: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x32828cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x328290: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x328290u;
    {
        const bool branch_taken_0x328290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328290u;
        // 0x328294: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328290) {
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x328298u;
label_328298:
    // 0x328298: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x328298u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x32829c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x32829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3282a0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3282A0u;
    {
        const bool branch_taken_0x3282a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282A0u;
        // 0x3282a4: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282a0) {
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x3282A8u;
label_3282a8:
    // 0x3282a8: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x3282a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x3282ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3282acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3282b0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3282B0u;
    {
        const bool branch_taken_0x3282b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282B0u;
        // 0x3282b4: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282b0) {
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x3282B8u;
label_3282b8:
    // 0x3282b8: 0x51982  srl         $v1, $a1, 6
    ctx->pc = 0x3282b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x3282bc: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x3282bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3282c0: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x3282c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3282c4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3282c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3282c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3282c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3282cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3282ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3282d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3282D0u;
    {
        const bool branch_taken_0x3282d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282D0u;
        // 0x3282d4: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282d0) {
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x3282D8u;
label_3282d8:
    // 0x3282d8: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x3282d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x3282dc: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x3282dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3282e0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3282e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3282e4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x3282e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3282e8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x3282e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3282ec: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3282ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3282f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3282f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3282f4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3282F4u;
    {
        const bool branch_taken_0x3282f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282F4u;
        // 0x3282f8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282f4) {
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x3282FCu;
label_3282fc:
    // 0x3282fc: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x3282fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
    // 0x328300: 0x52182  srl         $a0, $a1, 6
    ctx->pc = 0x328300u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x328304: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x328304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x328308: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x328308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32830c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x32830cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x328310: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x328310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x328314: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x328314u;
    {
        const bool branch_taken_0x328314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328314u;
        // 0x328318: 0x226102a  slt         $v0, $s1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328314) {
            ctx->pc = 0x328340u;
            goto label_328340;
        }
    }
    ctx->pc = 0x32831Cu;
    // 0x32831c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x32831Cu;
    {
        const bool branch_taken_0x32831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32831c) {
            ctx->pc = 0x328320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32831Cu;
            // 0x328320: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x328324u;
    // 0x328324: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x328324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x328328: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x328328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x32832c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32832cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x328330: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x328330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328334: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x328334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x328338: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x328338u;
    {
        const bool branch_taken_0x328338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328338u;
        // 0x32833c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328338) {
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x328340u;
label_328340:
    // 0x328340: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x328340u;
    {
        const bool branch_taken_0x328340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328340u;
        // 0x328344: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328340) {
            ctx->pc = 0x328384u;
            goto label_328384;
        }
    }
    ctx->pc = 0x328348u;
label_328348:
    // 0x328348: 0x30a4003f  andi        $a0, $a1, 0x3F
    ctx->pc = 0x328348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x32834c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x32834cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x328350: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x328350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x328354: 0x24635000  addiu       $v1, $v1, 0x5000
    ctx->pc = 0x328354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20480));
    // 0x328358: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x328358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32835c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x32835cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x328360: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x328360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328364: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x328364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328368: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x328368u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x32836c: 0x90670001  lbu         $a3, 0x1($v1)
    ctx->pc = 0x32836cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x328370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328374: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x328374u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_328378:
    // 0x328378: 0xc0ca064  jal         func_328190
    ctx->pc = 0x328378u;
    SET_GPR_U32(ctx, 31, 0x328380u);
    ctx->pc = 0x328190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328190u, 0x328378u, 0x328380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328380u;
label_328380:
    // 0x328380: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x328380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328384:
    // 0x328384: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x328384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x328388: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x328388u;
    {
        const bool branch_taken_0x328388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328388u;
        // 0x32838c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328388) {
            ctx->pc = 0x328208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328208;
        }
    }
    ctx->pc = 0x328390u;
label_328390:
    // 0x328390: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x328390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x328394: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x328394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x328398: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x328398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x32839c: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x32839cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x3283a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3283a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3283a4: 0x7bb30400  lq          $s3, 0x400($sp)
    ctx->pc = 0x3283a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x3283a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3283a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3283ac: 0xdfbf03f0  ld          $ra, 0x3F0($sp)
    ctx->pc = 0x3283acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x3283b0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3283b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3283b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3283b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3283b8: 0x7bb20410  lq          $s2, 0x410($sp)
    ctx->pc = 0x3283b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x3283bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3283BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3283C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283BCu;
        // 0x3283c0: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3283BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3283C4u;
    // 0x3283c4: 0x0  nop
    ctx->pc = 0x3283c4u;
    // NOP
    ctx->pc = 0x3283c8u;
}
