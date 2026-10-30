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

// Function: sub_00486120
// Address: 0x486120 - 0x486220
void sub_00486120_0x486120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486120_0x486120");
#endif

    switch (ctx->pc) {
        case 0x486120u: goto label_486120;
        case 0x486124u: goto label_486124;
        case 0x486128u: goto label_486128;
        case 0x48612cu: goto label_48612c;
        case 0x486130u: goto label_486130;
        case 0x486134u: goto label_486134;
        case 0x486138u: goto label_486138;
        case 0x48613cu: goto label_48613c;
        case 0x486140u: goto label_486140;
        case 0x486144u: goto label_486144;
        case 0x486148u: goto label_486148;
        case 0x48614cu: goto label_48614c;
        case 0x486150u: goto label_486150;
        case 0x486154u: goto label_486154;
        case 0x486158u: goto label_486158;
        case 0x48615cu: goto label_48615c;
        case 0x486160u: goto label_486160;
        case 0x486164u: goto label_486164;
        case 0x486168u: goto label_486168;
        case 0x48616cu: goto label_48616c;
        case 0x486170u: goto label_486170;
        case 0x486174u: goto label_486174;
        case 0x486178u: goto label_486178;
        case 0x48617cu: goto label_48617c;
        case 0x486180u: goto label_486180;
        case 0x486184u: goto label_486184;
        case 0x486188u: goto label_486188;
        case 0x48618cu: goto label_48618c;
        case 0x486190u: goto label_486190;
        case 0x486194u: goto label_486194;
        case 0x486198u: goto label_486198;
        case 0x48619cu: goto label_48619c;
        case 0x4861a0u: goto label_4861a0;
        case 0x4861a4u: goto label_4861a4;
        case 0x4861a8u: goto label_4861a8;
        case 0x4861acu: goto label_4861ac;
        case 0x4861b0u: goto label_4861b0;
        case 0x4861b4u: goto label_4861b4;
        case 0x4861b8u: goto label_4861b8;
        case 0x4861bcu: goto label_4861bc;
        case 0x4861c0u: goto label_4861c0;
        case 0x4861c4u: goto label_4861c4;
        case 0x4861c8u: goto label_4861c8;
        case 0x4861ccu: goto label_4861cc;
        case 0x4861d0u: goto label_4861d0;
        case 0x4861d4u: goto label_4861d4;
        case 0x4861d8u: goto label_4861d8;
        case 0x4861dcu: goto label_4861dc;
        case 0x4861e0u: goto label_4861e0;
        case 0x4861e4u: goto label_4861e4;
        case 0x4861e8u: goto label_4861e8;
        case 0x4861ecu: goto label_4861ec;
        case 0x4861f0u: goto label_4861f0;
        case 0x4861f4u: goto label_4861f4;
        case 0x4861f8u: goto label_4861f8;
        case 0x4861fcu: goto label_4861fc;
        case 0x486200u: goto label_486200;
        case 0x486204u: goto label_486204;
        case 0x486208u: goto label_486208;
        case 0x48620cu: goto label_48620c;
        case 0x486210u: goto label_486210;
        case 0x486214u: goto label_486214;
        case 0x486218u: goto label_486218;
        case 0x48621cu: goto label_48621c;
        default: break;
    }

    ctx->pc = 0x486120u;

label_486120:
    // 0x486120: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x486120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_486124:
    // 0x486124: 0x8f828970  lw          $v0, -0x7690($gp)
    ctx->pc = 0x486124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_486128:
    // 0x486128: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x486128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_48612c:
    // 0x48612c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48612cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_486130:
    // 0x486130: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x486130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_486134:
    // 0x486134: 0x2472ad18  addiu       $s2, $v1, -0x52E8
    ctx->pc = 0x486134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_486138:
    // 0x486138: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x486138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_48613c:
    // 0x48613c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x48613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_486140:
    // 0x486140: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x486140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_486144:
    // 0x486144: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x486144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_486148:
    // 0x486148: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x486148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_48614c:
    // 0x48614c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x48614cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_486150:
    // 0x486150: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x486150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_486154:
    // 0x486154: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x486154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486158:
    // 0x486158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x486158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48615c:
    // 0x48615c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x48615cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_486160:
    // 0x486160: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x486160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_486164:
    // 0x486164: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x486164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_486168:
    // 0x486168: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x486168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_48616c:
    // 0x48616c: 0x40f809  jalr        $v0
label_486170:
    if (ctx->pc == 0x486170u) {
        ctx->pc = 0x486170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48616Cu;
        // 0x486170: 0x34a50407  ori         $a1, $a1, 0x407 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1031);
        ctx->in_delay_slot = false;
        ctx->pc = 0x486174u;
        goto label_486174;
    }
    ctx->pc = 0x48616Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486174u);
        ctx->pc = 0x486170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48616Cu;
        // 0x486170: 0x34a50407  ori         $a1, $a1, 0x407 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1031);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48616Cu, 0x486174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486174u;
label_486174:
    // 0x486174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x486174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_486178:
    // 0x486178: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_48617c:
    if (ctx->pc == 0x48617Cu) {
        ctx->pc = 0x48617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486178u;
        // 0x48617c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486180u;
        goto label_486180;
    }
    ctx->pc = 0x486178u;
    {
        const bool branch_taken_0x486178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486178u;
        // 0x48617c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486178) {
            ctx->pc = 0x4861F4u;
            goto label_4861f4;
        }
    }
    ctx->pc = 0x486180u;
label_486180:
    // 0x486180: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x486180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_486184:
    // 0x486184: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x486184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_486188:
    // 0x486188: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x486188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48618c:
    // 0x48618c: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x48618cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
label_486190:
    // 0x486190: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x486190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_486194:
    // 0x486194: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x486194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_486198:
    // 0x486198: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x486198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
label_48619c:
    // 0x48619c: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x48619cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
label_4861a0:
    // 0x4861a0: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x4861a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_4861a4:
    // 0x4861a4: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x4861a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
label_4861a8:
    // 0x4861a8: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x4861a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_4861ac:
    // 0x4861ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4861acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4861b0:
    // 0x4861b0: 0x40f809  jalr        $v0
label_4861b4:
    if (ctx->pc == 0x4861B4u) {
        ctx->pc = 0x4861B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861B0u;
        // 0x4861b4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4861B8u;
        goto label_4861b8;
    }
    ctx->pc = 0x4861B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4861B8u);
        ctx->pc = 0x4861B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861B0u;
        // 0x4861b4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4861B0u, 0x4861B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4861B8u;
label_4861b8:
    // 0x4861b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4861bc:
    if (ctx->pc == 0x4861BCu) {
        ctx->pc = 0x4861BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861B8u;
        // 0x4861bc: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4861C0u;
        goto label_4861c0;
    }
    ctx->pc = 0x4861B8u;
    {
        const bool branch_taken_0x4861b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4861BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861B8u;
        // 0x4861bc: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4861b8) {
            ctx->pc = 0x4861E0u;
            goto label_4861e0;
        }
    }
    ctx->pc = 0x4861C0u;
label_4861c0:
    // 0x4861c0: 0x8f838970  lw          $v1, -0x7690($gp)
    ctx->pc = 0x4861c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_4861c4:
    // 0x4861c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4861c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4861c8:
    // 0x4861c8: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x4861c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_4861cc:
    // 0x4861cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4861ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4861d0:
    // 0x4861d0: 0x40f809  jalr        $v0
label_4861d4:
    if (ctx->pc == 0x4861D4u) {
        ctx->pc = 0x4861D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861D0u;
        // 0x4861d4: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4861D8u;
        goto label_4861d8;
    }
    ctx->pc = 0x4861D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4861D8u);
        ctx->pc = 0x4861D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861D0u;
        // 0x4861d4: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4861D0u, 0x4861D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4861D8u;
label_4861d8:
    // 0x4861d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4861dc:
    if (ctx->pc == 0x4861DCu) {
        ctx->pc = 0x4861DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861D8u;
        // 0x4861dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4861E0u;
        goto label_4861e0;
    }
    ctx->pc = 0x4861D8u;
    {
        const bool branch_taken_0x4861d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4861DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861D8u;
        // 0x4861dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4861d8) {
            ctx->pc = 0x4861F8u;
            goto label_4861f8;
        }
    }
    ctx->pc = 0x4861E0u;
label_4861e0:
    // 0x4861e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4861e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4861e4:
    // 0x4861e4: 0xc11ff8e  jal         func_47FE38
label_4861e8:
    if (ctx->pc == 0x4861E8u) {
        ctx->pc = 0x4861E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861E4u;
        // 0x4861e8: 0x2484ebf0  addiu       $a0, $a0, -0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4861ECu;
        goto label_4861ec;
    }
    ctx->pc = 0x4861E4u;
    SET_GPR_U32(ctx, 31, 0x4861ECu);
    ctx->pc = 0x4861E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4861E4u;
    // 0x4861e8: 0x2484ebf0  addiu       $a0, $a0, -0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x4861E4u, 0x4861ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4861ECu;
label_4861ec:
    // 0x4861ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_4861f0:
    if (ctx->pc == 0x4861F0u) {
        ctx->pc = 0x4861F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861ECu;
        // 0x4861f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4861F4u;
        goto label_4861f4;
    }
    ctx->pc = 0x4861ECu;
    {
        const bool branch_taken_0x4861ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4861F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4861ECu;
        // 0x4861f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4861ec) {
            ctx->pc = 0x4861F8u;
            goto label_4861f8;
        }
    }
    ctx->pc = 0x4861F4u;
label_4861f4:
    // 0x4861f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4861f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4861f8:
    // 0x4861f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4861f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4861fc:
    // 0x4861fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4861fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_486200:
    // 0x486200: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x486200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_486204:
    // 0x486204: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x486204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_486208:
    // 0x486208: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x486208u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48620c:
    // 0x48620c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x48620cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486210:
    // 0x486210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x486210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_486214:
    // 0x486214: 0x3e00008  jr          $ra
label_486218:
    if (ctx->pc == 0x486218u) {
        ctx->pc = 0x486218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486214u;
        // 0x486218: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48621Cu;
        goto label_48621c;
    }
    ctx->pc = 0x486214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486214u;
        // 0x486218: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48621Cu;
label_48621c:
    // 0x48621c: 0x0  nop
    ctx->pc = 0x48621cu;
    // NOP
    ctx->pc = 0x486220u;
}
