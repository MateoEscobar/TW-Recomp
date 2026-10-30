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

// Function: sub_001AB108
// Address: 0x1ab108 - 0x1ab210
void sub_001AB108_0x1ab108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB108_0x1ab108");
#endif

    switch (ctx->pc) {
        case 0x1ab108u: goto label_1ab108;
        case 0x1ab10cu: goto label_1ab10c;
        case 0x1ab110u: goto label_1ab110;
        case 0x1ab114u: goto label_1ab114;
        case 0x1ab118u: goto label_1ab118;
        case 0x1ab11cu: goto label_1ab11c;
        case 0x1ab120u: goto label_1ab120;
        case 0x1ab124u: goto label_1ab124;
        case 0x1ab128u: goto label_1ab128;
        case 0x1ab12cu: goto label_1ab12c;
        case 0x1ab130u: goto label_1ab130;
        case 0x1ab134u: goto label_1ab134;
        case 0x1ab138u: goto label_1ab138;
        case 0x1ab13cu: goto label_1ab13c;
        case 0x1ab140u: goto label_1ab140;
        case 0x1ab144u: goto label_1ab144;
        case 0x1ab148u: goto label_1ab148;
        case 0x1ab14cu: goto label_1ab14c;
        case 0x1ab150u: goto label_1ab150;
        case 0x1ab154u: goto label_1ab154;
        case 0x1ab158u: goto label_1ab158;
        case 0x1ab15cu: goto label_1ab15c;
        case 0x1ab160u: goto label_1ab160;
        case 0x1ab164u: goto label_1ab164;
        case 0x1ab168u: goto label_1ab168;
        case 0x1ab16cu: goto label_1ab16c;
        case 0x1ab170u: goto label_1ab170;
        case 0x1ab174u: goto label_1ab174;
        case 0x1ab178u: goto label_1ab178;
        case 0x1ab17cu: goto label_1ab17c;
        case 0x1ab180u: goto label_1ab180;
        case 0x1ab184u: goto label_1ab184;
        case 0x1ab188u: goto label_1ab188;
        case 0x1ab18cu: goto label_1ab18c;
        case 0x1ab190u: goto label_1ab190;
        case 0x1ab194u: goto label_1ab194;
        case 0x1ab198u: goto label_1ab198;
        case 0x1ab19cu: goto label_1ab19c;
        case 0x1ab1a0u: goto label_1ab1a0;
        case 0x1ab1a4u: goto label_1ab1a4;
        case 0x1ab1a8u: goto label_1ab1a8;
        case 0x1ab1acu: goto label_1ab1ac;
        case 0x1ab1b0u: goto label_1ab1b0;
        case 0x1ab1b4u: goto label_1ab1b4;
        case 0x1ab1b8u: goto label_1ab1b8;
        case 0x1ab1bcu: goto label_1ab1bc;
        case 0x1ab1c0u: goto label_1ab1c0;
        case 0x1ab1c4u: goto label_1ab1c4;
        case 0x1ab1c8u: goto label_1ab1c8;
        case 0x1ab1ccu: goto label_1ab1cc;
        case 0x1ab1d0u: goto label_1ab1d0;
        case 0x1ab1d4u: goto label_1ab1d4;
        case 0x1ab1d8u: goto label_1ab1d8;
        case 0x1ab1dcu: goto label_1ab1dc;
        case 0x1ab1e0u: goto label_1ab1e0;
        case 0x1ab1e4u: goto label_1ab1e4;
        case 0x1ab1e8u: goto label_1ab1e8;
        case 0x1ab1ecu: goto label_1ab1ec;
        case 0x1ab1f0u: goto label_1ab1f0;
        case 0x1ab1f4u: goto label_1ab1f4;
        case 0x1ab1f8u: goto label_1ab1f8;
        case 0x1ab1fcu: goto label_1ab1fc;
        case 0x1ab200u: goto label_1ab200;
        case 0x1ab204u: goto label_1ab204;
        case 0x1ab208u: goto label_1ab208;
        case 0x1ab20cu: goto label_1ab20c;
        default: break;
    }

    ctx->pc = 0x1ab108u;

label_1ab108:
    // 0x1ab108: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ab108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1ab10c:
    // 0x1ab10c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ab10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ab110:
    // 0x1ab110: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1ab110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1ab114:
    // 0x1ab114: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1ab114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1ab118:
    // 0x1ab118: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ab118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab11c:
    // 0x1ab11c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1ab11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1ab120:
    // 0x1ab120: 0x26700050  addiu       $s0, $s3, 0x50
    ctx->pc = 0x1ab120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1ab124:
    // 0x1ab124: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1ab124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1ab128:
    // 0x1ab128: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1ab128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab12c:
    // 0x1ab12c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ab12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1ab130:
    // 0x1ab130: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1ab130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ab134:
    // 0x1ab134: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ab134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ab138:
    // 0x1ab138: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ab138u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab13c:
    // 0x1ab13c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1ab13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1ab140:
    // 0x1ab140: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x1ab140u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ab144:
    // 0x1ab144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ab144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ab148:
    // 0x1ab148: 0x2456d3d0  addiu       $s6, $v0, -0x2C30
    ctx->pc = 0x1ab148u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955984));
label_1ab14c:
    // 0x1ab14c: 0xae650040  sw          $a1, 0x40($s3)
    ctx->pc = 0x1ab14cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 5));
label_1ab150:
    // 0x1ab150: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1ab150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1ab154:
    // 0x1ab154: 0x0  nop
    ctx->pc = 0x1ab154u;
    // NOP
label_1ab158:
    // 0x1ab158: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ab158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab15c:
    // 0x1ab15c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1ab15cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab160:
    // 0x1ab160: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ab160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab164:
    // 0x1ab164: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ab164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ab168:
    // 0x1ab168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ab16c:
    // 0x1ab16c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ab16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab170:
    // 0x1ab170: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1ab170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1ab174:
    // 0x1ab174: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1ab174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1ab178:
    // 0x1ab178: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1ab178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1ab17c:
    // 0x1ab17c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ab17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ab180:
    // 0x1ab180: 0x90440013  lbu         $a0, 0x13($v0)
    ctx->pc = 0x1ab180u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
label_1ab184:
    // 0x1ab184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab188:
    // 0x1ab188: 0x90460012  lbu         $a2, 0x12($v0)
    ctx->pc = 0x1ab188u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1ab18c:
    // 0x1ab18c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ab18cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab190:
    // 0x1ab190: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x1ab190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1ab194:
    // 0x1ab194: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1ab194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ab198:
    // 0x1ab198: 0x904c0011  lbu         $t4, 0x11($v0)
    ctx->pc = 0x1ab198u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
label_1ab19c:
    // 0x1ab19c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ab19cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1a0:
    // 0x1ab1a0: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x1ab1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_1ab1a4:
    // 0x1ab1a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ab1a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1ab1a8:
    // 0x1ab1a8: 0xa2460001  sb          $a2, 0x1($s2)
    ctx->pc = 0x1ab1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 6));
label_1ab1ac:
    // 0x1ab1ac: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1ab1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1ab1b0:
    // 0x1ab1b0: 0xa24c0002  sb          $t4, 0x2($s2)
    ctx->pc = 0x1ab1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 12));
label_1ab1b4:
    // 0x1ab1b4: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x1ab1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
label_1ab1b8:
    // 0x1ab1b8: 0x85a40068  lh          $a0, 0x68($t5)
    ctx->pc = 0x1ab1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 104)));
label_1ab1bc:
    // 0x1ab1bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ab1c0:
    // 0x1ab1c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ab1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1ab1c4:
    // 0x1ab1c4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1ab1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1ab1c8:
    // 0x1ab1c8: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x1ab1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
label_1ab1cc:
    // 0x1ab1cc: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1ab1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1ab1d0:
    // 0x1ab1d0: 0x8da3006c  lw          $v1, 0x6C($t5)
    ctx->pc = 0x1ab1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 108)));
label_1ab1d4:
    // 0x1ab1d4: 0x60f809  jalr        $v1
label_1ab1d8:
    if (ctx->pc == 0x1AB1D8u) {
        ctx->pc = 0x1AB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1D4u;
        // 0x1ab1d8: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1DCu;
        goto label_1ab1dc;
    }
    ctx->pc = 0x1AB1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB1DCu);
        ctx->pc = 0x1AB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1D4u;
        // 0x1ab1d8: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB1D4u, 0x1AB1DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB1DCu;
label_1ab1dc:
    // 0x1ab1dc: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x1ab1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ab1e0:
    // 0x1ab1e0: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
label_1ab1e4:
    if (ctx->pc == 0x1AB1E4u) {
        ctx->pc = 0x1AB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1E0u;
        // 0x1ab1e4: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1E8u;
        goto label_1ab1e8;
    }
    ctx->pc = 0x1AB1E0u;
    {
        const bool branch_taken_0x1ab1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab1e0) {
            ctx->pc = 0x1AB1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB1E0u;
            // 0x1ab1e4: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab158;
        }
    }
    ctx->pc = 0x1AB1E8u;
label_1ab1e8:
    // 0x1ab1e8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1ab1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ab1ec:
    // 0x1ab1ec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1ab1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ab1f0:
    // 0x1ab1f0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1ab1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ab1f4:
    // 0x1ab1f4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1ab1f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ab1f8:
    // 0x1ab1f8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ab1f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ab1fc:
    // 0x1ab1fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ab1fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab200:
    // 0x1ab200: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1ab200u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab204:
    // 0x1ab204: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ab204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ab208:
    // 0x1ab208: 0x3e00008  jr          $ra
label_1ab20c:
    if (ctx->pc == 0x1AB20Cu) {
        ctx->pc = 0x1AB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB208u;
        // 0x1ab20c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB210u;
        goto label_fallthrough_0x1ab208;
    }
    ctx->pc = 0x1AB208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB208u;
        // 0x1ab20c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab208:
    ctx->pc = 0x1AB210u;
}
