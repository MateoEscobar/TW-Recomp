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

// Function: sub_00211938
// Address: 0x211938 - 0x211a90
void sub_00211938_0x211938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211938_0x211938");
#endif

    switch (ctx->pc) {
        case 0x211984u: goto label_211984;
        case 0x21198cu: goto label_21198c;
        case 0x21199cu: goto label_21199c;
        case 0x2119a4u: goto label_2119a4;
        case 0x2119acu: goto label_2119ac;
        case 0x2119b4u: goto label_2119b4;
        case 0x2119e4u: goto label_2119e4;
        case 0x211a20u: goto label_211a20;
        case 0x211a4cu: goto label_211a4c;
        case 0x211a54u: goto label_211a54;
        case 0x211a5cu: goto label_211a5c;
        case 0x211a64u: goto label_211a64;
        case 0x211a7cu: goto label_211a7c;
        default: break;
    }

    ctx->pc = 0x211938u;

    // 0x211938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21193c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x211940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211948: 0x8e0240fc  lw          $v0, 0x40FC($s0)
    ctx->pc = 0x211948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16636)));
    // 0x21194c: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x21194Cu;
    {
        const bool branch_taken_0x21194c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21194c) {
            ctx->pc = 0x211950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21194Cu;
            // 0x211950: 0x8e024614  lw          $v0, 0x4614($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A6Cu;
            goto label_211a6c;
        }
    }
    ctx->pc = 0x211954u;
    // 0x211954: 0x8e0240f8  lw          $v0, 0x40F8($s0)
    ctx->pc = 0x211954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16632)));
    // 0x211958: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x211958u;
    {
        const bool branch_taken_0x211958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211958) {
            ctx->pc = 0x21195Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211958u;
            // 0x21195c: 0x8e024614  lw          $v0, 0x4614($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A6Cu;
            goto label_211a6c;
        }
    }
    ctx->pc = 0x211960u;
    // 0x211960: 0x8e024110  lw          $v0, 0x4110($s0)
    ctx->pc = 0x211960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16656)));
    // 0x211964: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x211964u;
    {
        const bool branch_taken_0x211964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211964u;
        // 0x211968: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211964) {
            ctx->pc = 0x211A7Cu;
            goto label_211a7c;
        }
    }
    ctx->pc = 0x21196Cu;
    // 0x21196c: 0x8e0440f4  lw          $a0, 0x40F4($s0)
    ctx->pc = 0x21196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x211970: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x211970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x211974: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x211974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x211978: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x211978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x21197c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x21197Cu;
    SET_GPR_U32(ctx, 31, 0x211984u);
    ctx->pc = 0x211980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21197Cu;
    // 0x211980: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x21197Cu, 0x211984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211984u;
label_211984:
    // 0x211984: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x211984u;
    SET_GPR_U32(ctx, 31, 0x21198Cu);
    ctx->pc = 0x211988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211984u;
    // 0x211988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x211984u, 0x21198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21198Cu;
label_21198c:
    // 0x21198c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21198Cu;
    {
        const bool branch_taken_0x21198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21198c) {
            ctx->pc = 0x211990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21198Cu;
            // 0x211990: 0xae0040f8  sw          $zero, 0x40F8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211994u;
            goto label_211994;
        }
    }
    ctx->pc = 0x211994u;
label_211994:
    // 0x211994: 0xc071f90  jal         func_1C7E40
    ctx->pc = 0x211994u;
    SET_GPR_U32(ctx, 31, 0x21199Cu);
    ctx->pc = 0x211998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211994u;
    // 0x211998: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E40u, 0x211994u, 0x21199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21199Cu;
label_21199c:
    // 0x21199c: 0xc068998  jal         func_1A2660
    ctx->pc = 0x21199Cu;
    SET_GPR_U32(ctx, 31, 0x2119A4u);
    ctx->pc = 0x2119A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21199Cu;
    // 0x2119a0: 0x26043ce0  addiu       $a0, $s0, 0x3CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x21199Cu, 0x2119A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119A4u;
label_2119a4:
    // 0x2119a4: 0xc068998  jal         func_1A2660
    ctx->pc = 0x2119A4u;
    SET_GPR_U32(ctx, 31, 0x2119ACu);
    ctx->pc = 0x2119A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2119A4u;
    // 0x2119a8: 0x26043de0  addiu       $a0, $s0, 0x3DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x2119A4u, 0x2119ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119ACu;
label_2119ac:
    // 0x2119ac: 0xc068998  jal         func_1A2660
    ctx->pc = 0x2119ACu;
    SET_GPR_U32(ctx, 31, 0x2119B4u);
    ctx->pc = 0x2119B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2119ACu;
    // 0x2119b0: 0x26043ee0  addiu       $a0, $s0, 0x3EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x2119ACu, 0x2119B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119B4u;
label_2119b4:
    // 0x2119b4: 0x8e034118  lw          $v1, 0x4118($s0)
    ctx->pc = 0x2119b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16664)));
    // 0x2119b8: 0x8e044114  lw          $a0, 0x4114($s0)
    ctx->pc = 0x2119b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16660)));
    // 0x2119bc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2119bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2119c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2119C0u;
    {
        const bool branch_taken_0x2119c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119C0u;
        // 0x2119c4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119c0) {
            ctx->pc = 0x2119ECu;
            goto label_2119ec;
        }
    }
    ctx->pc = 0x2119C8u;
    // 0x2119c8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2119c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2119cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2119ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2119d0: 0xae024118  sw          $v0, 0x4118($s0)
    ctx->pc = 0x2119d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16664), GPR_U32(ctx, 2));
    // 0x2119d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2119d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2119d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119dc: 0xc06844e  jal         func_1A1138
    ctx->pc = 0x2119DCu;
    SET_GPR_U32(ctx, 31, 0x2119E4u);
    ctx->pc = 0x2119E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2119DCu;
    // 0x2119e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x2119DCu, 0x2119E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119E4u;
label_2119e4:
    // 0x2119e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2119E4u;
    {
        const bool branch_taken_0x2119e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119E4u;
        // 0x2119e8: 0x8e024114  lw          $v0, 0x4114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119e4) {
            ctx->pc = 0x211A24u;
            goto label_211a24;
        }
    }
    ctx->pc = 0x2119ECu;
label_2119ec:
    // 0x2119ec: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2119ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2119f0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2119f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2119f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2119F4u;
    {
        const bool branch_taken_0x2119f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119F4u;
        // 0x2119f8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119f4) {
            ctx->pc = 0x211A04u;
            goto label_211a04;
        }
    }
    ctx->pc = 0x2119FCu;
    // 0x2119fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2119FCu;
    {
        const bool branch_taken_0x2119fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119FCu;
        // 0x211a00: 0xae024118  sw          $v0, 0x4118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119fc) {
            ctx->pc = 0x211A20u;
            goto label_211a20;
        }
    }
    ctx->pc = 0x211A04u;
label_211a04:
    // 0x211a04: 0xae004118  sw          $zero, 0x4118($s0)
    ctx->pc = 0x211a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16664), GPR_U32(ctx, 0));
    // 0x211a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a0c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x211a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x211a10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x211a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x211a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a18: 0xc06844e  jal         func_1A1138
    ctx->pc = 0x211A18u;
    SET_GPR_U32(ctx, 31, 0x211A20u);
    ctx->pc = 0x211A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A18u;
    // 0x211a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x211A18u, 0x211A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A20u;
label_211a20:
    // 0x211a20: 0x8e024114  lw          $v0, 0x4114($s0)
    ctx->pc = 0x211a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16660)));
label_211a24:
    // 0x211a24: 0x8e034118  lw          $v1, 0x4118($s0)
    ctx->pc = 0x211a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16664)));
    // 0x211a28: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x211a2c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x211A2Cu;
    {
        const bool branch_taken_0x211a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x211a2c) {
            ctx->pc = 0x211A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211A2Cu;
            // 0x211a30: 0xae004118  sw          $zero, 0x4118($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16664), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A34u;
            goto label_211a34;
        }
    }
    ctx->pc = 0x211A34u;
label_211a34:
    // 0x211a34: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x211a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x211a38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x211a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x211a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x211a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a44: 0xc06844e  jal         func_1A1138
    ctx->pc = 0x211A44u;
    SET_GPR_U32(ctx, 31, 0x211A4Cu);
    ctx->pc = 0x211A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A44u;
    // 0x211a48: 0x26044330  addiu       $a0, $s0, 0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x211A44u, 0x211A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A4Cu;
label_211a4c:
    // 0x211a4c: 0xc068998  jal         func_1A2660
    ctx->pc = 0x211A4Cu;
    SET_GPR_U32(ctx, 31, 0x211A54u);
    ctx->pc = 0x211A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A4Cu;
    // 0x211a50: 0x26044230  addiu       $a0, $s0, 0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x211A4Cu, 0x211A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A54u;
label_211a54:
    // 0x211a54: 0xc068998  jal         func_1A2660
    ctx->pc = 0x211A54u;
    SET_GPR_U32(ctx, 31, 0x211A5Cu);
    ctx->pc = 0x211A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A54u;
    // 0x211a58: 0x26044130  addiu       $a0, $s0, 0x4130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x211A54u, 0x211A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A5Cu;
label_211a5c:
    // 0x211a5c: 0xc083ef0  jal         func_20FBC0
    ctx->pc = 0x211A5Cu;
    SET_GPR_U32(ctx, 31, 0x211A64u);
    ctx->pc = 0x211A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A5Cu;
    // 0x211a60: 0x26044590  addiu       $a0, $s0, 0x4590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FBC0u, 0x211A5Cu, 0x211A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A64u;
label_211a64:
    // 0x211a64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x211A64u;
    {
        const bool branch_taken_0x211a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A64u;
        // 0x211a68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a64) {
            ctx->pc = 0x211A80u;
            goto label_211a80;
        }
    }
    ctx->pc = 0x211A6Cu;
label_211a6c:
    // 0x211a6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x211A6Cu;
    {
        const bool branch_taken_0x211a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a6c) {
            ctx->pc = 0x211A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211A6Cu;
            // 0x211a70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A80u;
            goto label_211a80;
        }
    }
    ctx->pc = 0x211A74u;
    // 0x211a74: 0xc06ec70  jal         func_1BB1C0
    ctx->pc = 0x211A74u;
    SET_GPR_U32(ctx, 31, 0x211A7Cu);
    ctx->pc = 0x211A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A74u;
    // 0x211a78: 0x260443a0  addiu       $a0, $s0, 0x43A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x211A74u, 0x211A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A7Cu;
label_211a7c:
    // 0x211a7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x211a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_211a80:
    // 0x211a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211a84: 0x3e00008  jr          $ra
    ctx->pc = 0x211A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A84u;
        // 0x211a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211A8Cu;
    // 0x211a8c: 0x0  nop
    ctx->pc = 0x211a8cu;
    // NOP
    ctx->pc = 0x211a90u;
}
