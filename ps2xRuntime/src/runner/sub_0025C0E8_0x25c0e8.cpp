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

// Function: sub_0025C0E8
// Address: 0x25c0e8 - 0x25c240
void sub_0025C0E8_0x25c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C0E8_0x25c0e8");
#endif

    switch (ctx->pc) {
        case 0x25c0e8u: goto label_25c0e8;
        case 0x25c0ecu: goto label_25c0ec;
        case 0x25c0f0u: goto label_25c0f0;
        case 0x25c0f4u: goto label_25c0f4;
        case 0x25c0f8u: goto label_25c0f8;
        case 0x25c0fcu: goto label_25c0fc;
        case 0x25c100u: goto label_25c100;
        case 0x25c104u: goto label_25c104;
        case 0x25c108u: goto label_25c108;
        case 0x25c10cu: goto label_25c10c;
        case 0x25c110u: goto label_25c110;
        case 0x25c114u: goto label_25c114;
        case 0x25c118u: goto label_25c118;
        case 0x25c11cu: goto label_25c11c;
        case 0x25c120u: goto label_25c120;
        case 0x25c124u: goto label_25c124;
        case 0x25c128u: goto label_25c128;
        case 0x25c12cu: goto label_25c12c;
        case 0x25c130u: goto label_25c130;
        case 0x25c134u: goto label_25c134;
        case 0x25c138u: goto label_25c138;
        case 0x25c13cu: goto label_25c13c;
        case 0x25c140u: goto label_25c140;
        case 0x25c144u: goto label_25c144;
        case 0x25c148u: goto label_25c148;
        case 0x25c14cu: goto label_25c14c;
        case 0x25c150u: goto label_25c150;
        case 0x25c154u: goto label_25c154;
        case 0x25c158u: goto label_25c158;
        case 0x25c15cu: goto label_25c15c;
        case 0x25c160u: goto label_25c160;
        case 0x25c164u: goto label_25c164;
        case 0x25c168u: goto label_25c168;
        case 0x25c16cu: goto label_25c16c;
        case 0x25c170u: goto label_25c170;
        case 0x25c174u: goto label_25c174;
        case 0x25c178u: goto label_25c178;
        case 0x25c17cu: goto label_25c17c;
        case 0x25c180u: goto label_25c180;
        case 0x25c184u: goto label_25c184;
        case 0x25c188u: goto label_25c188;
        case 0x25c18cu: goto label_25c18c;
        case 0x25c190u: goto label_25c190;
        case 0x25c194u: goto label_25c194;
        case 0x25c198u: goto label_25c198;
        case 0x25c19cu: goto label_25c19c;
        case 0x25c1a0u: goto label_25c1a0;
        case 0x25c1a4u: goto label_25c1a4;
        case 0x25c1a8u: goto label_25c1a8;
        case 0x25c1acu: goto label_25c1ac;
        case 0x25c1b0u: goto label_25c1b0;
        case 0x25c1b4u: goto label_25c1b4;
        case 0x25c1b8u: goto label_25c1b8;
        case 0x25c1bcu: goto label_25c1bc;
        case 0x25c1c0u: goto label_25c1c0;
        case 0x25c1c4u: goto label_25c1c4;
        case 0x25c1c8u: goto label_25c1c8;
        case 0x25c1ccu: goto label_25c1cc;
        case 0x25c1d0u: goto label_25c1d0;
        case 0x25c1d4u: goto label_25c1d4;
        case 0x25c1d8u: goto label_25c1d8;
        case 0x25c1dcu: goto label_25c1dc;
        case 0x25c1e0u: goto label_25c1e0;
        case 0x25c1e4u: goto label_25c1e4;
        case 0x25c1e8u: goto label_25c1e8;
        case 0x25c1ecu: goto label_25c1ec;
        case 0x25c1f0u: goto label_25c1f0;
        case 0x25c1f4u: goto label_25c1f4;
        case 0x25c1f8u: goto label_25c1f8;
        case 0x25c1fcu: goto label_25c1fc;
        case 0x25c200u: goto label_25c200;
        case 0x25c204u: goto label_25c204;
        case 0x25c208u: goto label_25c208;
        case 0x25c20cu: goto label_25c20c;
        case 0x25c210u: goto label_25c210;
        case 0x25c214u: goto label_25c214;
        case 0x25c218u: goto label_25c218;
        case 0x25c21cu: goto label_25c21c;
        case 0x25c220u: goto label_25c220;
        case 0x25c224u: goto label_25c224;
        case 0x25c228u: goto label_25c228;
        case 0x25c22cu: goto label_25c22c;
        case 0x25c230u: goto label_25c230;
        case 0x25c234u: goto label_25c234;
        case 0x25c238u: goto label_25c238;
        case 0x25c23cu: goto label_25c23c;
        default: break;
    }

    ctx->pc = 0x25c0e8u;

label_25c0e8:
    // 0x25c0e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25c0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_25c0ec:
    // 0x25c0ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x25c0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_25c0f0:
    // 0x25c0f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x25c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_25c0f4:
    // 0x25c0f4: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25c0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25c0f8:
    // 0x25c0f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25c0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_25c0fc:
    // 0x25c0fc: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25c0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25c100:
    // 0x25c100: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25c104:
    // 0x25c104: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c108:
    // 0x25c108: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x25c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_25c10c:
    // 0x25c10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c110:
    // 0x25c110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c114:
    // 0x25c114: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x25c114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_25c118:
    // 0x25c118: 0xc041532  jal         func_1054C8
label_25c11c:
    if (ctx->pc == 0x25C11Cu) {
        ctx->pc = 0x25C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C118u;
        // 0x25c11c: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C120u;
        goto label_25c120;
    }
    ctx->pc = 0x25C118u;
    SET_GPR_U32(ctx, 31, 0x25C120u);
    ctx->pc = 0x25C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C118u;
    // 0x25c11c: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25C118u, 0x25C120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C120u;
label_25c120:
    // 0x25c120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c124:
    // 0x25c124: 0xc041532  jal         func_1054C8
label_25c128:
    if (ctx->pc == 0x25C128u) {
        ctx->pc = 0x25C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C124u;
        // 0x25c128: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C12Cu;
        goto label_25c12c;
    }
    ctx->pc = 0x25C124u;
    SET_GPR_U32(ctx, 31, 0x25C12Cu);
    ctx->pc = 0x25C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C124u;
    // 0x25c128: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25C124u, 0x25C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C12Cu;
label_25c12c:
    // 0x25c12c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25c12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c130:
    // 0x25c130: 0xc041532  jal         func_1054C8
label_25c134:
    if (ctx->pc == 0x25C134u) {
        ctx->pc = 0x25C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C130u;
        // 0x25c134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C138u;
        goto label_25c138;
    }
    ctx->pc = 0x25C130u;
    SET_GPR_U32(ctx, 31, 0x25C138u);
    ctx->pc = 0x25C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C130u;
    // 0x25c134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25C130u, 0x25C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C138u;
label_25c138:
    // 0x25c138: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25c138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c13c:
    // 0x25c13c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_25c140:
    if (ctx->pc == 0x25C140u) {
        ctx->pc = 0x25C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C13Cu;
        // 0x25c140: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C144u;
        goto label_25c144;
    }
    ctx->pc = 0x25C13Cu;
    {
        const bool branch_taken_0x25c13c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C13Cu;
        // 0x25c140: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c13c) {
            ctx->pc = 0x25C164u;
            goto label_25c164;
        }
    }
    ctx->pc = 0x25C144u;
label_25c144:
    // 0x25c144: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25c144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25c148:
    // 0x25c148: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25c148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25c14c:
    // 0x25c14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25c14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25c150:
    // 0x25c150: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25c150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25c154:
    // 0x25c154: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25c154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25c158:
    // 0x25c158: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25c158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c15c:
    // 0x25c15c: 0xc041b20  jal         func_106C80
label_25c160:
    if (ctx->pc == 0x25C160u) {
        ctx->pc = 0x25C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C15Cu;
        // 0x25c160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C164u;
        goto label_25c164;
    }
    ctx->pc = 0x25C15Cu;
    SET_GPR_U32(ctx, 31, 0x25C164u);
    ctx->pc = 0x25C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C15Cu;
    // 0x25c160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25C15Cu, 0x25C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C164u;
label_25c164:
    // 0x25c164: 0xc05d484  jal         func_175210
label_25c168:
    if (ctx->pc == 0x25C168u) {
        ctx->pc = 0x25C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C164u;
        // 0x25c168: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C16Cu;
        goto label_25c16c;
    }
    ctx->pc = 0x25C164u;
    SET_GPR_U32(ctx, 31, 0x25C16Cu);
    ctx->pc = 0x25C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C164u;
    // 0x25c168: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25C164u, 0x25C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C16Cu;
label_25c16c:
    // 0x25c16c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25c170:
    // 0x25c170: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25c170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25c174:
    // 0x25c174: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25c174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25c178:
    // 0x25c178: 0xa0f809  jalr        $a1
label_25c17c:
    if (ctx->pc == 0x25C17Cu) {
        ctx->pc = 0x25C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C178u;
        // 0x25c17c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C180u;
        goto label_25c180;
    }
    ctx->pc = 0x25C178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25C180u);
        ctx->pc = 0x25C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C178u;
        // 0x25c17c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C178u, 0x25C180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C180u;
label_25c180:
    // 0x25c180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c184:
    // 0x25c184: 0xc087016  jal         func_21C058
label_25c188:
    if (ctx->pc == 0x25C188u) {
        ctx->pc = 0x25C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C184u;
        // 0x25c188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C18Cu;
        goto label_25c18c;
    }
    ctx->pc = 0x25C184u;
    SET_GPR_U32(ctx, 31, 0x25C18Cu);
    ctx->pc = 0x25C188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C184u;
    // 0x25c188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25C184u, 0x25C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C18Cu;
label_25c18c:
    // 0x25c18c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25c190:
    if (ctx->pc == 0x25C190u) {
        ctx->pc = 0x25C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C18Cu;
        // 0x25c190: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C194u;
        goto label_25c194;
    }
    ctx->pc = 0x25C18Cu;
    {
        const bool branch_taken_0x25c18c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C18Cu;
        // 0x25c190: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c18c) {
            ctx->pc = 0x25C1B0u;
            goto label_25c1b0;
        }
    }
    ctx->pc = 0x25C194u;
label_25c194:
    // 0x25c194: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25c198:
    // 0x25c198: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25c198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25c19c:
    // 0x25c19c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c1a0:
    // 0x25c1a0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25c1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25c1a4:
    // 0x25c1a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c1a8:
    // 0x25c1a8: 0xc04159e  jal         func_105678
label_25c1ac:
    if (ctx->pc == 0x25C1ACu) {
        ctx->pc = 0x25C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1A8u;
        // 0x25c1ac: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1B0u;
        goto label_25c1b0;
    }
    ctx->pc = 0x25C1A8u;
    SET_GPR_U32(ctx, 31, 0x25C1B0u);
    ctx->pc = 0x25C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C1A8u;
    // 0x25c1ac: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25C1A8u, 0x25C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C1B0u;
label_25c1b0:
    // 0x25c1b0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25c1b4:
    // 0x25c1b4: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_25c1b8:
    if (ctx->pc == 0x25C1B8u) {
        ctx->pc = 0x25C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1B4u;
        // 0x25c1b8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1BCu;
        goto label_25c1bc;
    }
    ctx->pc = 0x25C1B4u;
    {
        const bool branch_taken_0x25c1b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1B4u;
        // 0x25c1b8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c1b4) {
            ctx->pc = 0x25C1F8u;
            goto label_25c1f8;
        }
    }
    ctx->pc = 0x25C1BCu;
label_25c1bc:
    // 0x25c1bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25c1c0:
    // 0x25c1c0: 0x8e3000d4  lw          $s0, 0xD4($s1)
    ctx->pc = 0x25c1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25c1c4:
    // 0x25c1c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25c1c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25c1c8:
    // 0x25c1c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25c1cc:
    // 0x25c1cc: 0x40f809  jalr        $v0
label_25c1d0:
    if (ctx->pc == 0x25C1D0u) {
        ctx->pc = 0x25C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1CCu;
        // 0x25c1d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1D4u;
        goto label_25c1d4;
    }
    ctx->pc = 0x25C1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C1D4u);
        ctx->pc = 0x25C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1CCu;
        // 0x25c1d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C1CCu, 0x25C1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C1D4u;
label_25c1d4:
    // 0x25c1d4: 0x8e0600ac  lw          $a2, 0xAC($s0)
    ctx->pc = 0x25c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_25c1d8:
    // 0x25c1d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25c1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c1dc:
    // 0x25c1dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25c1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c1e0:
    // 0x25c1e0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25c1e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c1e4:
    // 0x25c1e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25c1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25c1e8:
    // 0x25c1e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25c1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25c1ec:
    // 0x25c1ec: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x25c1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
label_25c1f0:
    // 0x25c1f0: 0xc041664  jal         func_105990
label_25c1f4:
    if (ctx->pc == 0x25C1F4u) {
        ctx->pc = 0x25C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1F0u;
        // 0x25c1f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1F8u;
        goto label_25c1f8;
    }
    ctx->pc = 0x25C1F0u;
    SET_GPR_U32(ctx, 31, 0x25C1F8u);
    ctx->pc = 0x25C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C1F0u;
    // 0x25c1f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25C1F0u, 0x25C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C1F8u;
label_25c1f8:
    // 0x25c1f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25c1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25c1fc:
    // 0x25c1fc: 0xc05d53a  jal         func_1754E8
label_25c200:
    if (ctx->pc == 0x25C200u) {
        ctx->pc = 0x25C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1FCu;
        // 0x25c200: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C204u;
        goto label_25c204;
    }
    ctx->pc = 0x25C1FCu;
    SET_GPR_U32(ctx, 31, 0x25C204u);
    ctx->pc = 0x25C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C1FCu;
    // 0x25c200: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25C1FCu, 0x25C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C204u;
label_25c204:
    // 0x25c204: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25c204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25c208:
    // 0x25c208: 0xc05d4f6  jal         func_1753D8
label_25c20c:
    if (ctx->pc == 0x25C20Cu) {
        ctx->pc = 0x25C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C208u;
        // 0x25c20c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C210u;
        goto label_25c210;
    }
    ctx->pc = 0x25C208u;
    SET_GPR_U32(ctx, 31, 0x25C210u);
    ctx->pc = 0x25C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C208u;
    // 0x25c20c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25C208u, 0x25C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C210u;
label_25c210:
    // 0x25c210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c214:
    // 0x25c214: 0xc089990  jal         func_226640
label_25c218:
    if (ctx->pc == 0x25C218u) {
        ctx->pc = 0x25C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C214u;
        // 0x25c218: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C21Cu;
        goto label_25c21c;
    }
    ctx->pc = 0x25C214u;
    SET_GPR_U32(ctx, 31, 0x25C21Cu);
    ctx->pc = 0x25C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C214u;
    // 0x25c218: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25C214u, 0x25C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C21Cu;
label_25c21c:
    // 0x25c21c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x25c21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25c220:
    // 0x25c220: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x25c220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25c224:
    // 0x25c224: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x25c224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25c228:
    // 0x25c228: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c22c:
    // 0x25c22c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x25c22cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c230:
    // 0x25c230: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x25c230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c234:
    // 0x25c234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c238:
    // 0x25c238: 0x3e00008  jr          $ra
label_25c23c:
    if (ctx->pc == 0x25C23Cu) {
        ctx->pc = 0x25C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C238u;
        // 0x25c23c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C240u;
        goto label_fallthrough_0x25c238;
    }
    ctx->pc = 0x25C238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C238u;
        // 0x25c23c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25c238:
    ctx->pc = 0x25C240u;
}
