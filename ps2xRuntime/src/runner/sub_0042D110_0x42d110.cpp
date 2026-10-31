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

// Function: sub_0042D110
// Address: 0x42d110 - 0x42d440
void sub_0042D110_0x42d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D110_0x42d110");
#endif

    switch (ctx->pc) {
        case 0x42d178u: goto label_42d178;
        case 0x42d1bcu: goto label_42d1bc;
        case 0x42d1e4u: goto label_42d1e4;
        case 0x42d1f8u: goto label_42d1f8;
        case 0x42d220u: goto label_42d220;
        case 0x42d298u: goto label_42d298;
        case 0x42d2bcu: goto label_42d2bc;
        case 0x42d2ecu: goto label_42d2ec;
        case 0x42d2fcu: goto label_42d2fc;
        case 0x42d324u: goto label_42d324;
        case 0x42d378u: goto label_42d378;
        case 0x42d388u: goto label_42d388;
        case 0x42d3a0u: goto label_42d3a0;
        case 0x42d3c0u: goto label_42d3c0;
        case 0x42d3dcu: goto label_42d3dc;
        default: break;
    }

    ctx->pc = 0x42d110u;

    // 0x42d110: 0x27bdf960  addiu       $sp, $sp, -0x6A0
    ctx->pc = 0x42d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965600));
    // 0x42d114: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x42d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
    // 0x42d118: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x42d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
    // 0x42d11c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x42d11cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d120: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x42d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
    // 0x42d124: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x42d124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
    // 0x42d128: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x42d128u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d12c: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x42d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
    // 0x42d130: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x42d130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d134: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x42d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
    // 0x42d138: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x42d138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d13c: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x42d13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
    // 0x42d140: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42d140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d144: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x42d144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
    // 0x42d148: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x42d148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
    // 0x42d14c: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x42d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
    // 0x42d150: 0xafa705e4  sw          $a3, 0x5E4($sp)
    ctx->pc = 0x42d150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1508), GPR_U32(ctx, 7));
    // 0x42d154: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x42d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x42d158: 0x8e770008  lw          $s7, 0x8($s3)
    ctx->pc = 0x42d158u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x42d15c: 0xafb005e8  sw          $s0, 0x5E8($sp)
    ctx->pc = 0x42d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1512), GPR_U32(ctx, 16));
    // 0x42d160: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x42d160u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42d164: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x42d164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x42d168: 0xafa005f4  sw          $zero, 0x5F4($sp)
    ctx->pc = 0x42d168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
    // 0x42d16c: 0xafa005f8  sw          $zero, 0x5F8($sp)
    ctx->pc = 0x42d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 0));
    // 0x42d170: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x42D170u;
    {
        const bool branch_taken_0x42d170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D170u;
        // 0x42d174: 0xafa005e0  sw          $zero, 0x5E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d170) {
            ctx->pc = 0x42D2A8u;
            goto label_42d2a8;
        }
    }
    ctx->pc = 0x42D178u;
label_42d178:
    // 0x42d178: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x42d178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x42d17c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x42D17Cu;
    {
        const bool branch_taken_0x42d17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42d17c) {
            ctx->pc = 0x42D180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42D17Cu;
            // 0x42d180: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42D18Cu;
            goto label_42d18c;
        }
    }
    ctx->pc = 0x42D184u;
    // 0x42d184: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x42D184u;
    {
        const bool branch_taken_0x42d184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D184u;
        // 0x42d188: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d184) {
            ctx->pc = 0x42D19Cu;
            goto label_42d19c;
        }
    }
    ctx->pc = 0x42D18Cu;
label_42d18c:
    // 0x42d18c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x42d190: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x42d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x42d194: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x42d194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x42d198: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x42d198u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_42d19c:
    // 0x42d19c: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x42D19Cu;
    {
        const bool branch_taken_0x42d19c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D19Cu;
        // 0x42d1a0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d19c) {
            ctx->pc = 0x42D1C8u;
            goto label_42d1c8;
        }
    }
    ctx->pc = 0x42D1A4u;
    // 0x42d1a4: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x42d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x42d1a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x42d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x42d1ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x42d1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42d1b0: 0x27a805e0  addiu       $t0, $sp, 0x5E0
    ctx->pc = 0x42d1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    // 0x42d1b4: 0xc10b38a  jal         func_42CE28
    ctx->pc = 0x42D1B4u;
    SET_GPR_U32(ctx, 31, 0x42D1BCu);
    ctx->pc = 0x42D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D1B4u;
    // 0x42d1b8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CE28u, 0x42D1B4u, 0x42D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D1BCu;
label_42d1bc:
    // 0x42d1bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x42d1bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d1c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x42D1C0u;
    {
        const bool branch_taken_0x42d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D1C0u;
        // 0x42d1c4: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d1c0) {
            ctx->pc = 0x42D1FCu;
            goto label_42d1fc;
        }
    }
    ctx->pc = 0x42D1C8u;
label_42d1c8:
    // 0x42d1c8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x42D1C8u;
    {
        const bool branch_taken_0x42d1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D1C8u;
        // 0x42d1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d1c8) {
            ctx->pc = 0x42D1ECu;
            goto label_42d1ec;
        }
    }
    ctx->pc = 0x42D1D0u;
    // 0x42d1d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x42d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x42d1d4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x42d1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d1d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42d1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d1dc: 0xc10b38a  jal         func_42CE28
    ctx->pc = 0x42D1DCu;
    SET_GPR_U32(ctx, 31, 0x42D1E4u);
    ctx->pc = 0x42D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D1DCu;
    // 0x42d1e0: 0x27a805e0  addiu       $t0, $sp, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CE28u, 0x42D1DCu, 0x42D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D1E4u;
label_42d1e4:
    // 0x42d1e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x42D1E4u;
    {
        const bool branch_taken_0x42d1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D1E4u;
        // 0x42d1e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d1e4) {
            ctx->pc = 0x42D1FCu;
            goto label_42d1fc;
        }
    }
    ctx->pc = 0x42D1ECu;
label_42d1ec:
    // 0x42d1ec: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x42d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x42d1f0: 0xc10b354  jal         func_42CD50
    ctx->pc = 0x42D1F0u;
    SET_GPR_U32(ctx, 31, 0x42D1F8u);
    ctx->pc = 0x42D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D1F0u;
    // 0x42d1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CD50u, 0x42D1F0u, 0x42D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D1F8u;
label_42d1f8:
    // 0x42d1f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x42d1f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d1fc:
    // 0x42d1fc: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x42D1FCu;
    {
        const bool branch_taken_0x42d1fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D1FCu;
        // 0x42d200: 0x8fa205e0  lw          $v0, 0x5E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d1fc) {
            ctx->pc = 0x42D288u;
            goto label_42d288;
        }
    }
    ctx->pc = 0x42D204u;
    // 0x42d204: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x42D204u;
    {
        const bool branch_taken_0x42d204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D204u;
        // 0x42d208: 0x8fa205f8  lw          $v0, 0x5F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d204) {
            ctx->pc = 0x42D280u;
            goto label_42d280;
        }
    }
    ctx->pc = 0x42D20Cu;
    // 0x42d20c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x42D20Cu;
    {
        const bool branch_taken_0x42d20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42d20c) {
            ctx->pc = 0x42D210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42D20Cu;
            // 0x42d210: 0x9624029a  lhu         $a0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42D28Cu;
            goto label_42d28c;
        }
    }
    ctx->pc = 0x42D214u;
    // 0x42d214: 0x27a302f0  addiu       $v1, $sp, 0x2F0
    ctx->pc = 0x42d214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x42d218: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42d218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d21c: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x42d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_42d220:
    // 0x42d220: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x42d220u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d224: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x42d224u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x42d228: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x42d228u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x42d22c: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x42d22cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x42d230: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x42d230u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x42d234: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x42d234u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x42d238: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x42d238u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x42d23c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x42d23cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x42d240: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x42d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x42d244: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x42d244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x42d248: 0x0  nop
    ctx->pc = 0x42d248u;
    // NOP
    // 0x42d24c: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x42D24Cu;
    {
        const bool branch_taken_0x42d24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x42d24c) {
            ctx->pc = 0x42D220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42d220;
        }
    }
    ctx->pc = 0x42D254u;
    // 0x42d254: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42d254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42d258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42d258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42d25c: 0xafb005f0  sw          $s0, 0x5F0($sp)
    ctx->pc = 0x42d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1520), GPR_U32(ctx, 16));
    // 0x42d260: 0xafb505ec  sw          $s5, 0x5EC($sp)
    ctx->pc = 0x42d260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1516), GPR_U32(ctx, 21));
    // 0x42d264: 0xafa405f8  sw          $a0, 0x5F8($sp)
    ctx->pc = 0x42d264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 4));
    // 0x42d268: 0xafa505f4  sw          $a1, 0x5F4($sp)
    ctx->pc = 0x42d268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 5));
    // 0x42d26c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x42d26cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d270: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x42d270u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x42d274: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x42d274u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x42d278: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x42D278u;
    {
        const bool branch_taken_0x42d278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D278u;
        // 0x42d27c: 0xfc670008  sd          $a3, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d278) {
            ctx->pc = 0x42D288u;
            goto label_42d288;
        }
    }
    ctx->pc = 0x42D280u;
label_42d280:
    // 0x42d280: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x42D280u;
    {
        const bool branch_taken_0x42d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D280u;
        // 0x42d284: 0xafa005f4  sw          $zero, 0x5F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d280) {
            ctx->pc = 0x42D2C8u;
            goto label_42d2c8;
        }
    }
    ctx->pc = 0x42D288u;
label_42d288:
    // 0x42d288: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x42d288u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_42d28c:
    // 0x42d28c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x42d28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d290: 0xc10b3dc  jal         func_42CF70
    ctx->pc = 0x42D290u;
    SET_GPR_U32(ctx, 31, 0x42D298u);
    ctx->pc = 0x42D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D290u;
    // 0x42d294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CF70u, 0x42D290u, 0x42D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D298u;
label_42d298:
    // 0x42d298: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x42d298u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d29c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42d29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42d2a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42d2a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42d2a4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x42d2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_42d2a8:
    // 0x42d2a8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x42d2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d2ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x42d2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42d2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d2b4: 0xc10b41e  jal         func_42D078
    ctx->pc = 0x42D2B4u;
    SET_GPR_U32(ctx, 31, 0x42D2BCu);
    ctx->pc = 0x42D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D2B4u;
    // 0x42d2b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D078u, 0x42D2B4u, 0x42D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D2BCu;
label_42d2bc:
    // 0x42d2bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42d2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d2c0: 0x1620ffad  bnez        $s1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x42D2C0u;
    {
        const bool branch_taken_0x42d2c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x42D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D2C0u;
        // 0x42d2c4: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d2c0) {
            ctx->pc = 0x42D178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42d178;
        }
    }
    ctx->pc = 0x42D2C8u;
label_42d2c8:
    // 0x42d2c8: 0x8fa505f8  lw          $a1, 0x5F8($sp)
    ctx->pc = 0x42d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
    // 0x42d2cc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x42D2CCu;
    {
        const bool branch_taken_0x42d2cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D2CCu;
        // 0x42d2d0: 0x8fa605f4  lw          $a2, 0x5F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d2cc) {
            ctx->pc = 0x42D2ECu;
            goto label_42d2ec;
        }
    }
    ctx->pc = 0x42D2D4u;
    // 0x42d2d4: 0x27b102f0  addiu       $s1, $sp, 0x2F0
    ctx->pc = 0x42d2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x42d2d8: 0x8fb505ec  lw          $s5, 0x5EC($sp)
    ctx->pc = 0x42d2d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1516)));
    // 0x42d2dc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x42D2DCu;
    {
        const bool branch_taken_0x42d2dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D2DCu;
        // 0x42d2e0: 0x8fb005f0  lw          $s0, 0x5F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d2dc) {
            ctx->pc = 0x42D2ECu;
            goto label_42d2ec;
        }
    }
    ctx->pc = 0x42D2E4u;
    // 0x42d2e4: 0xc10b442  jal         func_42D108
    ctx->pc = 0x42D2E4u;
    SET_GPR_U32(ctx, 31, 0x42D2ECu);
    ctx->pc = 0x42D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D108u, 0x42D2E4u, 0x42D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D2ECu;
label_42d2ec:
    // 0x42d2ec: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x42D2ECu;
    {
        const bool branch_taken_0x42d2ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x42d2ec) {
            ctx->pc = 0x42D2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42D2ECu;
            // 0x42d2f0: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42D300u;
            goto label_42d300;
        }
    }
    ctx->pc = 0x42D2F4u;
    // 0x42d2f4: 0xc10b22a  jal         func_42C8A8
    ctx->pc = 0x42D2F4u;
    SET_GPR_U32(ctx, 31, 0x42D2FCu);
    ctx->pc = 0x42C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C8A8u, 0x42D2F4u, 0x42D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D2FCu;
label_42d2fc:
    // 0x42d2fc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x42d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_42d300:
    // 0x42d300: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x42d300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x42d304: 0x16070003  bne         $s0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x42D304u;
    {
        const bool branch_taken_0x42d304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x42D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D304u;
        // 0x42d308: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d304) {
            ctx->pc = 0x42D314u;
            goto label_42d314;
        }
    }
    ctx->pc = 0x42D30Cu;
    // 0x42d30c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x42D30Cu;
    {
        const bool branch_taken_0x42d30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D30Cu;
        // 0x42d310: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d30c) {
            ctx->pc = 0x42D404u;
            goto label_42d404;
        }
    }
    ctx->pc = 0x42D314u;
label_42d314:
    // 0x42d314: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x42d314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d318: 0x8fb005e8  lw          $s0, 0x5E8($sp)
    ctx->pc = 0x42d318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x42d31c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x42d31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d320: 0x27c402e0  addiu       $a0, $fp, 0x2E0
    ctx->pc = 0x42d320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 736));
label_42d324:
    // 0x42d324: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x42d324u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d328: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x42d328u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x42d32c: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x42d32cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x42d330: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x42d330u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x42d334: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x42d334u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x42d338: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x42d338u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x42d33c: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x42d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x42d340: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x42d340u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x42d344: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x42d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x42d348: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x42d348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x42d34c: 0x0  nop
    ctx->pc = 0x42d34cu;
    // NOP
    // 0x42d350: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x42D350u;
    {
        const bool branch_taken_0x42d350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x42d350) {
            ctx->pc = 0x42D324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42d324;
        }
    }
    ctx->pc = 0x42D358u;
    // 0x42d358: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x42d358u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d35c: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x42d35cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x42d360: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x42d360u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x42d364: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x42d364u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x42d368: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x42d368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x42d36c: 0x50f60022  beql        $a3, $s6, . + 4 + (0x22 << 2)
    ctx->pc = 0x42D36Cu;
    {
        const bool branch_taken_0x42d36c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        if (branch_taken_0x42d36c) {
            ctx->pc = 0x42D370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42D36Cu;
            // 0x42d370: 0x9622029a  lhu         $v0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42D3F8u;
            goto label_42d3f8;
        }
    }
    ctx->pc = 0x42D374u;
    // 0x42d374: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x42d374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42d378:
    // 0x42d378: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x42d378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42d37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d380: 0xc10b41e  jal         func_42D078
    ctx->pc = 0x42D380u;
    SET_GPR_U32(ctx, 31, 0x42D388u);
    ctx->pc = 0x42D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D380u;
    // 0x42d384: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D078u, 0x42D380u, 0x42D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D388u;
label_42d388:
    // 0x42d388: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x42d388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d38c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42d38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d390: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x42d390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d394: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x42d394u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
    // 0x42d398: 0x2633029c  addiu       $s3, $s1, 0x29C
    ctx->pc = 0x42d398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x42d39c: 0x0  nop
    ctx->pc = 0x42d39cu;
    // NOP
label_42d3a0:
    // 0x42d3a0: 0x12040008  beq         $s0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42D3A0u;
    {
        const bool branch_taken_0x42d3a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x42D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D3A0u;
        // 0x42d3a4: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d3a0) {
            ctx->pc = 0x42D3C4u;
            goto label_42d3c4;
        }
    }
    ctx->pc = 0x42D3A8u;
    // 0x42d3a8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x42d3a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d3ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x42D3ACu;
    {
        const bool branch_taken_0x42d3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D3ACu;
        // 0x42d3b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d3ac) {
            ctx->pc = 0x42D3C4u;
            goto label_42d3c4;
        }
    }
    ctx->pc = 0x42D3B4u;
    // 0x42d3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42d3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d3b8: 0xc10b3fe  jal         func_42CFF8
    ctx->pc = 0x42D3B8u;
    SET_GPR_U32(ctx, 31, 0x42D3C0u);
    ctx->pc = 0x42D3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D3B8u;
    // 0x42d3bc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CFF8u, 0x42D3B8u, 0x42D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D3C0u;
label_42d3c0:
    // 0x42d3c0: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x42d3c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_42d3c4:
    // 0x42d3c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x42d3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x42d3c8: 0x2a02004f  slti        $v0, $s0, 0x4F
    ctx->pc = 0x42d3c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x42d3cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x42D3CCu;
    {
        const bool branch_taken_0x42d3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D3CCu;
        // 0x42d3d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d3cc) {
            ctx->pc = 0x42D3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42d3a0;
        }
    }
    ctx->pc = 0x42D3D4u;
    // 0x42d3d4: 0xc10b3dc  jal         func_42CF70
    ctx->pc = 0x42D3D4u;
    SET_GPR_U32(ctx, 31, 0x42D3DCu);
    ctx->pc = 0x42D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D3D4u;
    // 0x42d3d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CF70u, 0x42D3D4u, 0x42D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D3DCu;
label_42d3dc:
    // 0x42d3dc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x42d3dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d3e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42d3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42d3e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42d3e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42d3e8: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x42d3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x42d3ec: 0x1616ffe2  bne         $s0, $s6, . + 4 + (-0x1E << 2)
    ctx->pc = 0x42D3ECu;
    {
        const bool branch_taken_0x42d3ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x42D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D3ECu;
        // 0x42d3f0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d3ec) {
            ctx->pc = 0x42D378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42d378;
        }
    }
    ctx->pc = 0x42D3F4u;
    // 0x42d3f4: 0x9622029a  lhu         $v0, 0x29A($s1)
    ctx->pc = 0x42d3f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_42d3f8:
    // 0x42d3f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x42d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42d3fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x42d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x42d400: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x42d400u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
label_42d404:
    // 0x42d404: 0x8fa805e4  lw          $t0, 0x5E4($sp)
    ctx->pc = 0x42d404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
    // 0x42d408: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x42d408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d40c: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x42d40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x42d410: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x42d410u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
    // 0x42d414: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x42d414u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x42d418: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x42d418u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x42d41c: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x42d41cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x42d420: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x42d420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x42d424: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x42d424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x42d428: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x42d428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x42d42c: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x42d42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x42d430: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x42d430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x42d434: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x42d434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x42d438: 0x3e00008  jr          $ra
    ctx->pc = 0x42D438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D438u;
        // 0x42d43c: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D440u;
}
