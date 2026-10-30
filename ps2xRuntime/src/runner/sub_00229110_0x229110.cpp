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

// Function: sub_00229110
// Address: 0x229110 - 0x2294ac
void sub_00229110_0x229110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229110_0x229110");
#endif

    switch (ctx->pc) {
        case 0x229138u: goto label_229138;
        case 0x229144u: goto label_229144;
        default: break;
    }

    ctx->pc = 0x229110u;

    // 0x229110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x229114: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x229114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x229118: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22911c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x229120: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x229120u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x51489Cu));
    // 0x229124: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x229124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229128: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x229128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22912c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229130: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x229130u;
    SET_GPR_U32(ctx, 31, 0x229138u);
    ctx->pc = 0x229134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229130u;
    // 0x229134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x229130u, 0x229138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229138u;
label_229138:
    // 0x229138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22913c: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x22913Cu;
    SET_GPR_U32(ctx, 31, 0x229144u);
    ctx->pc = 0x229140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22913Cu;
    // 0x229140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x22913Cu, 0x229144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229144u;
label_229144:
    // 0x229144: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x229144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x229148: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x229148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22914c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22914cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x229150: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x229150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229154: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x229154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x229158: 0x2c83005b  sltiu       $v1, $a0, 0x5B
    ctx->pc = 0x229158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x22915c: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x22915Cu;
    {
        const bool branch_taken_0x22915c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22915Cu;
        // 0x229160: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22915c) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x229164u;
    // 0x229164: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x229164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x229168: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x229168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x22916c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229170: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229174: 0x800008  jr          $a0
    ctx->pc = 0x229174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22917Cu: goto label_22917c;
            case 0x2291D4u: goto label_2291d4;
            case 0x22922Cu: goto label_22922c;
            case 0x22927Cu: goto label_22927c;
            case 0x2292CCu: goto label_2292cc;
            case 0x22931Cu: goto label_22931c;
            case 0x22936Cu: goto label_22936c;
            case 0x2293BCu: goto label_2293bc;
            case 0x22940Cu: goto label_22940c;
            case 0x22945Cu: goto label_22945c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229174u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22917Cu;
label_22917c:
    // 0x22917c: 0x2643ff9c  addiu       $v1, $s2, -0x64
    ctx->pc = 0x22917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967196));
    // 0x229180: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x229180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x229184: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x229184u;
    {
        const bool branch_taken_0x229184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229184u;
        // 0x229188: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229184) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x22918Cu;
    // 0x22918c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22918cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229190: 0x2442b880  addiu       $v0, $v0, -0x4780
    ctx->pc = 0x229190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x229194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229198: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22919c: 0x800008  jr          $a0
    ctx->pc = 0x22919Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2291A4u: goto label_2291a4;
            case 0x2291ACu: goto label_2291ac;
            case 0x2291B4u: goto label_2291b4;
            case 0x2291BCu: goto label_2291bc;
            case 0x2291C4u: goto label_2291c4;
            case 0x2291CCu: goto label_2291cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22919Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2291A4u;
label_2291a4:
    // 0x2291a4: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2291A4u;
    {
        const bool branch_taken_0x2291a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291A4u;
        // 0x2291a8: 0x240200e7  addiu       $v0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291a4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2291ACu;
label_2291ac:
    // 0x2291ac: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x2291ACu;
    {
        const bool branch_taken_0x2291ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291ACu;
        // 0x2291b0: 0x240200e9  addiu       $v0, $zero, 0xE9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291ac) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2291B4u;
label_2291b4:
    // 0x2291b4: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2291B4u;
    {
        const bool branch_taken_0x2291b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291B4u;
        // 0x2291b8: 0x240200eb  addiu       $v0, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291b4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2291BCu;
label_2291bc:
    // 0x2291bc: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2291BCu;
    {
        const bool branch_taken_0x2291bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291BCu;
        // 0x2291c0: 0x24020119  addiu       $v0, $zero, 0x119 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291bc) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2291C4u;
label_2291c4:
    // 0x2291c4: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2291C4u;
    {
        const bool branch_taken_0x2291c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291C4u;
        // 0x2291c8: 0x240200ed  addiu       $v0, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291c4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2291CCu;
label_2291cc:
    // 0x2291cc: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x2291CCu;
    {
        const bool branch_taken_0x2291cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291CCu;
        // 0x2291d0: 0x240200ef  addiu       $v0, $zero, 0xEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291cc) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2291D4u;
label_2291d4:
    // 0x2291d4: 0x2643ff9c  addiu       $v1, $s2, -0x64
    ctx->pc = 0x2291d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967196));
    // 0x2291d8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2291d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2291dc: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2291DCu;
    {
        const bool branch_taken_0x2291dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291DCu;
        // 0x2291e0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291dc) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x2291E4u;
    // 0x2291e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2291e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2291e8: 0x2442b8a0  addiu       $v0, $v0, -0x4760
    ctx->pc = 0x2291e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
    // 0x2291ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2291ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2291f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2291f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2291f4: 0x800008  jr          $a0
    ctx->pc = 0x2291F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2291FCu: goto label_2291fc;
            case 0x229204u: goto label_229204;
            case 0x22920Cu: goto label_22920c;
            case 0x229214u: goto label_229214;
            case 0x22921Cu: goto label_22921c;
            case 0x229224u: goto label_229224;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2291F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2291FCu;
label_2291fc:
    // 0x2291fc: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2291FCu;
    {
        const bool branch_taken_0x2291fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291FCu;
        // 0x229200: 0x240200e8  addiu       $v0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291fc) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229204u;
label_229204:
    // 0x229204: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x229204u;
    {
        const bool branch_taken_0x229204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229204u;
        // 0x229208: 0x240200ea  addiu       $v0, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229204) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22920Cu;
label_22920c:
    // 0x22920c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x22920Cu;
    {
        const bool branch_taken_0x22920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22920Cu;
        // 0x229210: 0x240200ec  addiu       $v0, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22920c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229214u;
label_229214:
    // 0x229214: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x229214u;
    {
        const bool branch_taken_0x229214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229214u;
        // 0x229218: 0x2402011a  addiu       $v0, $zero, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229214) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22921Cu;
label_22921c:
    // 0x22921c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x22921Cu;
    {
        const bool branch_taken_0x22921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22921Cu;
        // 0x229220: 0x240200ee  addiu       $v0, $zero, 0xEE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22921c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229224u;
label_229224:
    // 0x229224: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x229224u;
    {
        const bool branch_taken_0x229224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229224u;
        // 0x229228: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229224) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22922Cu;
label_22922c:
    // 0x22922c: 0x2643ff7f  addiu       $v1, $s2, -0x81
    ctx->pc = 0x22922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967167));
    // 0x229230: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x229230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x229234: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x229234u;
    {
        const bool branch_taken_0x229234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229234u;
        // 0x229238: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229234) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x22923Cu;
    // 0x22923c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22923cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229240: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x229240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x229244: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229248: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22924c: 0x800008  jr          $a0
    ctx->pc = 0x22924Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229254u: goto label_229254;
            case 0x22925Cu: goto label_22925c;
            case 0x229264u: goto label_229264;
            case 0x22926Cu: goto label_22926c;
            case 0x229274u: goto label_229274;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22924Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x229254u;
label_229254:
    // 0x229254: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x229254u;
    {
        const bool branch_taken_0x229254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229254u;
        // 0x229258: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229254) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22925Cu;
label_22925c:
    // 0x22925c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x22925Cu;
    {
        const bool branch_taken_0x22925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22925Cu;
        // 0x229260: 0x240200f2  addiu       $v0, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22925c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229264u;
label_229264:
    // 0x229264: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x229264u;
    {
        const bool branch_taken_0x229264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229264u;
        // 0x229268: 0x240200f3  addiu       $v0, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229264) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22926Cu;
label_22926c:
    // 0x22926c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x22926Cu;
    {
        const bool branch_taken_0x22926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22926Cu;
        // 0x229270: 0x240200f4  addiu       $v0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22926c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229274u;
label_229274:
    // 0x229274: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x229274u;
    {
        const bool branch_taken_0x229274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229274u;
        // 0x229278: 0x240200f5  addiu       $v0, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229274) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22927Cu;
label_22927c:
    // 0x22927c: 0x2643ff65  addiu       $v1, $s2, -0x9B
    ctx->pc = 0x22927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967141));
    // 0x229280: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x229280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x229284: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x229284u;
    {
        const bool branch_taken_0x229284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229284u;
        // 0x229288: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229284) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x22928Cu;
    // 0x22928c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22928cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229290: 0x2442b8e0  addiu       $v0, $v0, -0x4720
    ctx->pc = 0x229290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949088));
    // 0x229294: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229298: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22929c: 0x800008  jr          $a0
    ctx->pc = 0x22929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2292A4u: goto label_2292a4;
            case 0x2292ACu: goto label_2292ac;
            case 0x2292B4u: goto label_2292b4;
            case 0x2292BCu: goto label_2292bc;
            case 0x2292C4u: goto label_2292c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22929Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2292A4u;
label_2292a4:
    // 0x2292a4: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2292A4u;
    {
        const bool branch_taken_0x2292a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292A4u;
        // 0x2292a8: 0x240200f6  addiu       $v0, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292a4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2292ACu;
label_2292ac:
    // 0x2292ac: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2292ACu;
    {
        const bool branch_taken_0x2292ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292ACu;
        // 0x2292b0: 0x240200f7  addiu       $v0, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292ac) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2292B4u;
label_2292b4:
    // 0x2292b4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2292B4u;
    {
        const bool branch_taken_0x2292b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292B4u;
        // 0x2292b8: 0x240200f8  addiu       $v0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292b4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2292BCu;
label_2292bc:
    // 0x2292bc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2292BCu;
    {
        const bool branch_taken_0x2292bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292BCu;
        // 0x2292c0: 0x240200f9  addiu       $v0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292bc) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2292C4u;
label_2292c4:
    // 0x2292c4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2292C4u;
    {
        const bool branch_taken_0x2292c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292C4u;
        // 0x2292c8: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292c4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2292CCu;
label_2292cc:
    // 0x2292cc: 0x2643ff4c  addiu       $v1, $s2, -0xB4
    ctx->pc = 0x2292ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967116));
    // 0x2292d0: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x2292d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2292d4: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2292D4u;
    {
        const bool branch_taken_0x2292d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292D4u;
        // 0x2292d8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292d4) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x2292DCu;
    // 0x2292dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2292dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2292e0: 0x2442b900  addiu       $v0, $v0, -0x4700
    ctx->pc = 0x2292e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949120));
    // 0x2292e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2292e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2292e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2292e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2292ec: 0x800008  jr          $a0
    ctx->pc = 0x2292ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2292F4u: goto label_2292f4;
            case 0x2292FCu: goto label_2292fc;
            case 0x229304u: goto label_229304;
            case 0x22930Cu: goto label_22930c;
            case 0x229314u: goto label_229314;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2292ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2292F4u;
label_2292f4:
    // 0x2292f4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2292F4u;
    {
        const bool branch_taken_0x2292f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292F4u;
        // 0x2292f8: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292f4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2292FCu;
label_2292fc:
    // 0x2292fc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2292FCu;
    {
        const bool branch_taken_0x2292fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292FCu;
        // 0x229300: 0x24020109  addiu       $v0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292fc) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229304u;
label_229304:
    // 0x229304: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x229304u;
    {
        const bool branch_taken_0x229304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229304u;
        // 0x229308: 0x2402010d  addiu       $v0, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229304) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22930Cu;
label_22930c:
    // 0x22930c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x22930Cu;
    {
        const bool branch_taken_0x22930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22930Cu;
        // 0x229310: 0x24020111  addiu       $v0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22930c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229314u;
label_229314:
    // 0x229314: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x229314u;
    {
        const bool branch_taken_0x229314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229314u;
        // 0x229318: 0x24020115  addiu       $v0, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229314) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22931Cu;
label_22931c:
    // 0x22931c: 0x2643ff4c  addiu       $v1, $s2, -0xB4
    ctx->pc = 0x22931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967116));
    // 0x229320: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x229320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x229324: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x229324u;
    {
        const bool branch_taken_0x229324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229324u;
        // 0x229328: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229324) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x22932Cu;
    // 0x22932c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22932cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229330: 0x2442b950  addiu       $v0, $v0, -0x46B0
    ctx->pc = 0x229330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949200));
    // 0x229334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229338: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22933c: 0x800008  jr          $a0
    ctx->pc = 0x22933Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229344u: goto label_229344;
            case 0x22934Cu: goto label_22934c;
            case 0x229354u: goto label_229354;
            case 0x22935Cu: goto label_22935c;
            case 0x229364u: goto label_229364;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22933Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x229344u;
label_229344:
    // 0x229344: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x229344u;
    {
        const bool branch_taken_0x229344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229344u;
        // 0x229348: 0x24020106  addiu       $v0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229344) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22934Cu;
label_22934c:
    // 0x22934c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x22934Cu;
    {
        const bool branch_taken_0x22934c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22934Cu;
        // 0x229350: 0x2402010a  addiu       $v0, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22934c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229354u;
label_229354:
    // 0x229354: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x229354u;
    {
        const bool branch_taken_0x229354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229354u;
        // 0x229358: 0x2402010e  addiu       $v0, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229354) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22935Cu;
label_22935c:
    // 0x22935c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x22935Cu;
    {
        const bool branch_taken_0x22935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22935Cu;
        // 0x229360: 0x24020112  addiu       $v0, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22935c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229364u;
label_229364:
    // 0x229364: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x229364u;
    {
        const bool branch_taken_0x229364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229364u;
        // 0x229368: 0x24020116  addiu       $v0, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229364) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22936Cu;
label_22936c:
    // 0x22936c: 0x2643ff4c  addiu       $v1, $s2, -0xB4
    ctx->pc = 0x22936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967116));
    // 0x229370: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x229370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x229374: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x229374u;
    {
        const bool branch_taken_0x229374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229374u;
        // 0x229378: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229374) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x22937Cu;
    // 0x22937c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22937cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229380: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x229380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
    // 0x229384: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229388: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22938c: 0x800008  jr          $a0
    ctx->pc = 0x22938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229394u: goto label_229394;
            case 0x22939Cu: goto label_22939c;
            case 0x2293A4u: goto label_2293a4;
            case 0x2293ACu: goto label_2293ac;
            case 0x2293B4u: goto label_2293b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22938Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x229394u;
label_229394:
    // 0x229394: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x229394u;
    {
        const bool branch_taken_0x229394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229394u;
        // 0x229398: 0x24020107  addiu       $v0, $zero, 0x107 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229394) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22939Cu;
label_22939c:
    // 0x22939c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x22939Cu;
    {
        const bool branch_taken_0x22939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22939Cu;
        // 0x2293a0: 0x2402010b  addiu       $v0, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22939c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2293A4u;
label_2293a4:
    // 0x2293a4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2293A4u;
    {
        const bool branch_taken_0x2293a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293A4u;
        // 0x2293a8: 0x2402010f  addiu       $v0, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293a4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2293ACu;
label_2293ac:
    // 0x2293ac: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2293ACu;
    {
        const bool branch_taken_0x2293ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293ACu;
        // 0x2293b0: 0x24020113  addiu       $v0, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293ac) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2293B4u;
label_2293b4:
    // 0x2293b4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2293B4u;
    {
        const bool branch_taken_0x2293b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293B4u;
        // 0x2293b8: 0x24020117  addiu       $v0, $zero, 0x117 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293b4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2293BCu;
label_2293bc:
    // 0x2293bc: 0x2643ff4c  addiu       $v1, $s2, -0xB4
    ctx->pc = 0x2293bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967116));
    // 0x2293c0: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x2293c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2293c4: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2293C4u;
    {
        const bool branch_taken_0x2293c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293C4u;
        // 0x2293c8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293c4) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x2293CCu;
    // 0x2293cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2293ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2293d0: 0x2442b9f0  addiu       $v0, $v0, -0x4610
    ctx->pc = 0x2293d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949360));
    // 0x2293d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2293d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2293d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2293d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2293dc: 0x800008  jr          $a0
    ctx->pc = 0x2293DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2293E4u: goto label_2293e4;
            case 0x2293ECu: goto label_2293ec;
            case 0x2293F4u: goto label_2293f4;
            case 0x2293FCu: goto label_2293fc;
            case 0x229404u: goto label_229404;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2293DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2293E4u;
label_2293e4:
    // 0x2293e4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2293E4u;
    {
        const bool branch_taken_0x2293e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293E4u;
        // 0x2293e8: 0x24020108  addiu       $v0, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293e4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2293ECu;
label_2293ec:
    // 0x2293ec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2293ECu;
    {
        const bool branch_taken_0x2293ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293ECu;
        // 0x2293f0: 0x2402010c  addiu       $v0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293ec) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2293F4u;
label_2293f4:
    // 0x2293f4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2293F4u;
    {
        const bool branch_taken_0x2293f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293F4u;
        // 0x2293f8: 0x24020110  addiu       $v0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293f4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2293FCu;
label_2293fc:
    // 0x2293fc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2293FCu;
    {
        const bool branch_taken_0x2293fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293FCu;
        // 0x229400: 0x24020114  addiu       $v0, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293fc) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229404u;
label_229404:
    // 0x229404: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x229404u;
    {
        const bool branch_taken_0x229404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229404u;
        // 0x229408: 0x24020118  addiu       $v0, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229404) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22940Cu;
label_22940c:
    // 0x22940c: 0x2643ff29  addiu       $v1, $s2, -0xD7
    ctx->pc = 0x22940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967081));
    // 0x229410: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x229410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x229414: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x229414u;
    {
        const bool branch_taken_0x229414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229414u;
        // 0x229418: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229414) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x22941Cu;
    // 0x22941c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22941cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229420: 0x2442ba40  addiu       $v0, $v0, -0x45C0
    ctx->pc = 0x229420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949440));
    // 0x229424: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229428: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22942c: 0x800008  jr          $a0
    ctx->pc = 0x22942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229434u: goto label_229434;
            case 0x22943Cu: goto label_22943c;
            case 0x229444u: goto label_229444;
            case 0x22944Cu: goto label_22944c;
            case 0x229454u: goto label_229454;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22942Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x229434u;
label_229434:
    // 0x229434: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x229434u;
    {
        const bool branch_taken_0x229434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229434u;
        // 0x229438: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229434) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22943Cu;
label_22943c:
    // 0x22943c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x22943Cu;
    {
        const bool branch_taken_0x22943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22943Cu;
        // 0x229440: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22943c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229444u;
label_229444:
    // 0x229444: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x229444u;
    {
        const bool branch_taken_0x229444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229444u;
        // 0x229448: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229444) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22944Cu;
label_22944c:
    // 0x22944c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x22944Cu;
    {
        const bool branch_taken_0x22944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22944Cu;
        // 0x229450: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22944c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229454u;
label_229454:
    // 0x229454: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x229454u;
    {
        const bool branch_taken_0x229454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229454u;
        // 0x229458: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229454) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22945Cu;
label_22945c:
    // 0x22945c: 0x2643ff20  addiu       $v1, $s2, -0xE0
    ctx->pc = 0x22945cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967072));
    // 0x229460: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x229460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x229464: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x229464u;
    {
        const bool branch_taken_0x229464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229464u;
        // 0x229468: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229464) {
            ctx->pc = 0x2294ACu;
            return;
        }
    }
    ctx->pc = 0x22946Cu;
    // 0x22946c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229470: 0x2442ba60  addiu       $v0, $v0, -0x45A0
    ctx->pc = 0x229470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949472));
    // 0x229474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22947c: 0x800008  jr          $a0
    ctx->pc = 0x22947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229484u: goto label_229484;
            case 0x22948Cu: goto label_22948c;
            case 0x229494u: goto label_229494;
            case 0x22949Cu: goto label_22949c;
            case 0x2294A4u: goto label_2294a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22947Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x229484u;
label_229484:
    // 0x229484: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x229484u;
    {
        const bool branch_taken_0x229484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229484u;
        // 0x229488: 0x240200fb  addiu       $v0, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229484) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22948Cu;
label_22948c:
    // 0x22948c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22948Cu;
    {
        const bool branch_taken_0x22948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22948Cu;
        // 0x229490: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22948c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x229494u;
label_229494:
    // 0x229494: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x229494u;
    {
        const bool branch_taken_0x229494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229494u;
        // 0x229498: 0x240200fd  addiu       $v0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229494) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x22949Cu;
label_22949c:
    // 0x22949c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22949Cu;
    {
        const bool branch_taken_0x22949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22949Cu;
        // 0x2294a0: 0x240200fe  addiu       $v0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22949c) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2294A4u;
label_2294a4:
    // 0x2294a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2294A4u;
    {
        const bool branch_taken_0x2294a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294A4u;
        // 0x2294a8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294a4) {
            ctx->pc = 0x2294B0u;
            return;
        }
    }
    ctx->pc = 0x2294ACu;
}
