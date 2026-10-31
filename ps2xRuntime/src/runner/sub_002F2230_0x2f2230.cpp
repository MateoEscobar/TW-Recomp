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

// Function: sub_002F2230
// Address: 0x2f2230 - 0x2f2398
void sub_002F2230_0x2f2230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2230_0x2f2230");
#endif

    switch (ctx->pc) {
        case 0x2f22ecu: goto label_2f22ec;
        case 0x2f2304u: goto label_2f2304;
        case 0x2f232cu: goto label_2f232c;
        case 0x2f233cu: goto label_2f233c;
        case 0x2f235cu: goto label_2f235c;
        default: break;
    }

    ctx->pc = 0x2f2230u;

    // 0x2f2230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f2230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f2234: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2f2234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2f2238: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f2238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2f223c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f223cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2240: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2f2240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2f2244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2248: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2f2248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2f224c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f224cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2250: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2f2250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2f2254: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x2f2254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f2258: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F2258u;
    {
        const bool branch_taken_0x2f2258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2258u;
        // 0x2f225c: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2258) {
            ctx->pc = 0x2F2378u;
            goto label_2f2378;
        }
    }
    ctx->pc = 0x2F2260u;
    // 0x2f2260: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2f2260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2f2264: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2f2264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2f2268: 0x24427bd0  addiu       $v0, $v0, 0x7BD0
    ctx->pc = 0x2f2268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31696));
    // 0x2f226c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2270: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f2270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2274: 0x800008  jr          $a0
    ctx->pc = 0x2F2274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F227Cu: goto label_2f227c;
            case 0x2F228Cu: goto label_2f228c;
            case 0x2F229Cu: goto label_2f229c;
            case 0x2F22ACu: goto label_2f22ac;
            case 0x2F22BCu: goto label_2f22bc;
            case 0x2F22CCu: goto label_2f22cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2274u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F227Cu;
label_2f227c:
    // 0x2f227c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f2280: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2f2280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f2284: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F2284u;
    {
        const bool branch_taken_0x2f2284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2284u;
        // 0x2f2288: 0x24511180  addiu       $s1, $v0, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2284) {
            ctx->pc = 0x2F22D8u;
            goto label_2f22d8;
        }
    }
    ctx->pc = 0x2F228Cu;
label_2f228c:
    // 0x2f228c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f2290: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2f2290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f2294: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F2294u;
    {
        const bool branch_taken_0x2f2294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2294u;
        // 0x2f2298: 0x24511170  addiu       $s1, $v0, 0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2294) {
            ctx->pc = 0x2F22D8u;
            goto label_2f22d8;
        }
    }
    ctx->pc = 0x2F229Cu;
label_2f229c:
    // 0x2f229c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f229cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f22a0: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x2f22a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f22a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F22A4u;
    {
        const bool branch_taken_0x2f22a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22A4u;
        // 0x2f22a8: 0x245111a8  addiu       $s1, $v0, 0x11A8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22a4) {
            ctx->pc = 0x2F22D8u;
            goto label_2f22d8;
        }
    }
    ctx->pc = 0x2F22ACu;
label_2f22ac:
    // 0x2f22ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f22acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f22b0: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x2f22b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f22b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F22B4u;
    {
        const bool branch_taken_0x2f22b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22B4u;
        // 0x2f22b8: 0x245111c0  addiu       $s1, $v0, 0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22b4) {
            ctx->pc = 0x2F22D8u;
            goto label_2f22d8;
        }
    }
    ctx->pc = 0x2F22BCu;
label_2f22bc:
    // 0x2f22bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f22c0: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x2f22c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f22c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F22C4u;
    {
        const bool branch_taken_0x2f22c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22C4u;
        // 0x2f22c8: 0x24511190  addiu       $s1, $v0, 0x1190 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22c4) {
            ctx->pc = 0x2F22D8u;
            goto label_2f22d8;
        }
    }
    ctx->pc = 0x2F22CCu;
label_2f22cc:
    // 0x2f22cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f22d0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2f22d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f22d4: 0x245111e8  addiu       $s1, $v0, 0x11E8
    ctx->pc = 0x2f22d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4584));
label_2f22d8:
    // 0x2f22d8: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F22D8u;
    {
        const bool branch_taken_0x2f22d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22D8u;
        // 0x2f22dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22d8) {
            ctx->pc = 0x2F2378u;
            goto label_2f2378;
        }
    }
    ctx->pc = 0x2F22E0u;
    // 0x2f22e0: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x2f22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
    // 0x2f22e4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2F22E4u;
    SET_GPR_U32(ctx, 31, 0x2F22ECu);
    ctx->pc = 0x2F22E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22E4u;
    // 0x2f22e8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2F22E4u, 0x2F22ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F22ECu;
label_2f22ec:
    // 0x2f22ec: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F22ECu;
    {
        const bool branch_taken_0x2f22ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f22ec) {
            ctx->pc = 0x2F22F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F22ECu;
            // 0x2f22f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F237Cu;
            goto label_2f237c;
        }
    }
    ctx->pc = 0x2F22F4u;
    // 0x2f22f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f22f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f22f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22fc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x2F22FCu;
    SET_GPR_U32(ctx, 31, 0x2F2304u);
    ctx->pc = 0x2F2300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22FCu;
    // 0x2f2300: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2F22FCu, 0x2F2304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2304u;
label_2f2304:
    // 0x2f2304: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2f2304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2f2308: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2f2308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2f230c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x2f230cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2f2310: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f2310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2314: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f2314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f2318: 0x24a57bb0  addiu       $a1, $a1, 0x7BB0
    ctx->pc = 0x2f2318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31664));
    // 0x2f231c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f231cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f2320: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f2320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f2324: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x2F2324u;
    SET_GPR_U32(ctx, 31, 0x2F232Cu);
    ctx->pc = 0x2F2328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2324u;
    // 0x2f2328: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x2F2324u, 0x2F232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F232Cu;
label_2f232c:
    // 0x2f232c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2f232cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2f2330: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f2330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2334: 0xc050fda  jal         func_143F68
    ctx->pc = 0x2F2334u;
    SET_GPR_U32(ctx, 31, 0x2F233Cu);
    ctx->pc = 0x2F2338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2334u;
    // 0x2f2338: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2F2334u, 0x2F233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F233Cu;
label_2f233c:
    // 0x2f233c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2f233cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2f2340: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f2340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f2344: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f2344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f234c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f234cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2354: 0xc0879a6  jal         func_21E698
    ctx->pc = 0x2F2354u;
    SET_GPR_U32(ctx, 31, 0x2F235Cu);
    ctx->pc = 0x2F2358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2354u;
    // 0x2f2358: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x2F2354u, 0x2F235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F235Cu;
label_2f235c:
    // 0x2f235c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2f235cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f2360: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2360u;
    {
        const bool branch_taken_0x2f2360 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2360) {
            ctx->pc = 0x2F2364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2360u;
            // 0x2f2364: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2368u;
            goto label_2f2368;
        }
    }
    ctx->pc = 0x2F2368u;
label_2f2368:
    // 0x2f2368: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f2368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f236c: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x2f236cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f2370: 0x1010  mfhi        $v0
    ctx->pc = 0x2f2370u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f2374: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2f2374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f2378:
    // 0x2f2378: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f2378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f237c:
    // 0x2f237c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2f237cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2380: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2f2380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2384: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2f2384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2388: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2f2388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f238c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2390: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2390u;
        // 0x2f2394: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2398u;
}
