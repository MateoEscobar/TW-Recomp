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

// Function: sub_0030F868
// Address: 0x30f868 - 0x30fa18
void sub_0030F868_0x30f868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F868_0x30f868");
#endif

    switch (ctx->pc) {
        case 0x30f868u: goto label_30f868;
        case 0x30f86cu: goto label_30f86c;
        case 0x30f870u: goto label_30f870;
        case 0x30f874u: goto label_30f874;
        case 0x30f878u: goto label_30f878;
        case 0x30f87cu: goto label_30f87c;
        case 0x30f880u: goto label_30f880;
        case 0x30f884u: goto label_30f884;
        case 0x30f888u: goto label_30f888;
        case 0x30f88cu: goto label_30f88c;
        case 0x30f890u: goto label_30f890;
        case 0x30f894u: goto label_30f894;
        case 0x30f898u: goto label_30f898;
        case 0x30f89cu: goto label_30f89c;
        case 0x30f8a0u: goto label_30f8a0;
        case 0x30f8a4u: goto label_30f8a4;
        case 0x30f8a8u: goto label_30f8a8;
        case 0x30f8acu: goto label_30f8ac;
        case 0x30f8b0u: goto label_30f8b0;
        case 0x30f8b4u: goto label_30f8b4;
        case 0x30f8b8u: goto label_30f8b8;
        case 0x30f8bcu: goto label_30f8bc;
        case 0x30f8c0u: goto label_30f8c0;
        case 0x30f8c4u: goto label_30f8c4;
        case 0x30f8c8u: goto label_30f8c8;
        case 0x30f8ccu: goto label_30f8cc;
        case 0x30f8d0u: goto label_30f8d0;
        case 0x30f8d4u: goto label_30f8d4;
        case 0x30f8d8u: goto label_30f8d8;
        case 0x30f8dcu: goto label_30f8dc;
        case 0x30f8e0u: goto label_30f8e0;
        case 0x30f8e4u: goto label_30f8e4;
        case 0x30f8e8u: goto label_30f8e8;
        case 0x30f8ecu: goto label_30f8ec;
        case 0x30f8f0u: goto label_30f8f0;
        case 0x30f8f4u: goto label_30f8f4;
        case 0x30f8f8u: goto label_30f8f8;
        case 0x30f8fcu: goto label_30f8fc;
        case 0x30f900u: goto label_30f900;
        case 0x30f904u: goto label_30f904;
        case 0x30f908u: goto label_30f908;
        case 0x30f90cu: goto label_30f90c;
        case 0x30f910u: goto label_30f910;
        case 0x30f914u: goto label_30f914;
        case 0x30f918u: goto label_30f918;
        case 0x30f91cu: goto label_30f91c;
        case 0x30f920u: goto label_30f920;
        case 0x30f924u: goto label_30f924;
        case 0x30f928u: goto label_30f928;
        case 0x30f92cu: goto label_30f92c;
        case 0x30f930u: goto label_30f930;
        case 0x30f934u: goto label_30f934;
        case 0x30f938u: goto label_30f938;
        case 0x30f93cu: goto label_30f93c;
        case 0x30f940u: goto label_30f940;
        case 0x30f944u: goto label_30f944;
        case 0x30f948u: goto label_30f948;
        case 0x30f94cu: goto label_30f94c;
        case 0x30f950u: goto label_30f950;
        case 0x30f954u: goto label_30f954;
        case 0x30f958u: goto label_30f958;
        case 0x30f95cu: goto label_30f95c;
        case 0x30f960u: goto label_30f960;
        case 0x30f964u: goto label_30f964;
        case 0x30f968u: goto label_30f968;
        case 0x30f96cu: goto label_30f96c;
        case 0x30f970u: goto label_30f970;
        case 0x30f974u: goto label_30f974;
        case 0x30f978u: goto label_30f978;
        case 0x30f97cu: goto label_30f97c;
        case 0x30f980u: goto label_30f980;
        case 0x30f984u: goto label_30f984;
        case 0x30f988u: goto label_30f988;
        case 0x30f98cu: goto label_30f98c;
        case 0x30f990u: goto label_30f990;
        case 0x30f994u: goto label_30f994;
        case 0x30f998u: goto label_30f998;
        case 0x30f99cu: goto label_30f99c;
        case 0x30f9a0u: goto label_30f9a0;
        case 0x30f9a4u: goto label_30f9a4;
        case 0x30f9a8u: goto label_30f9a8;
        case 0x30f9acu: goto label_30f9ac;
        case 0x30f9b0u: goto label_30f9b0;
        case 0x30f9b4u: goto label_30f9b4;
        case 0x30f9b8u: goto label_30f9b8;
        case 0x30f9bcu: goto label_30f9bc;
        case 0x30f9c0u: goto label_30f9c0;
        case 0x30f9c4u: goto label_30f9c4;
        case 0x30f9c8u: goto label_30f9c8;
        case 0x30f9ccu: goto label_30f9cc;
        case 0x30f9d0u: goto label_30f9d0;
        case 0x30f9d4u: goto label_30f9d4;
        case 0x30f9d8u: goto label_30f9d8;
        case 0x30f9dcu: goto label_30f9dc;
        case 0x30f9e0u: goto label_30f9e0;
        case 0x30f9e4u: goto label_30f9e4;
        case 0x30f9e8u: goto label_30f9e8;
        case 0x30f9ecu: goto label_30f9ec;
        case 0x30f9f0u: goto label_30f9f0;
        case 0x30f9f4u: goto label_30f9f4;
        case 0x30f9f8u: goto label_30f9f8;
        case 0x30f9fcu: goto label_30f9fc;
        case 0x30fa00u: goto label_30fa00;
        case 0x30fa04u: goto label_30fa04;
        case 0x30fa08u: goto label_30fa08;
        case 0x30fa0cu: goto label_30fa0c;
        case 0x30fa10u: goto label_30fa10;
        case 0x30fa14u: goto label_30fa14;
        default: break;
    }

    ctx->pc = 0x30f868u;

label_30f868:
    // 0x30f868: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30f868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_30f86c:
    // 0x30f86c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_30f870:
    // 0x30f870: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_30f874:
    // 0x30f874: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30f874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30f878:
    // 0x30f878: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_30f87c:
    // 0x30f87c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30f87cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f880:
    // 0x30f880: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_30f884:
    // 0x30f884: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x30f884u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30f888:
    // 0x30f888: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x30f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_30f88c:
    // 0x30f88c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x30f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_30f890:
    // 0x30f890: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x30f890u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30f894:
    // 0x30f894: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30f894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_30f898:
    // 0x30f898: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x30f898u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_30f89c:
    // 0x30f89c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30f89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_30f8a0:
    // 0x30f8a0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_30f8a4:
    // 0x30f8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30f8a8:
    // 0x30f8a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30f8ac:
    // 0x30f8ac: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x30f8acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_30f8b0:
    // 0x30f8b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30f8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30f8b4:
    // 0x30f8b4: 0x0  nop
    ctx->pc = 0x30f8b4u;
    // NOP
label_30f8b8:
    // 0x30f8b8: 0xc137826  jal         func_4DE098
label_30f8bc:
    if (ctx->pc == 0x30F8BCu) {
        ctx->pc = 0x30F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8B8u;
        // 0x30f8bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F8C0u;
        goto label_30f8c0;
    }
    ctx->pc = 0x30F8B8u;
    SET_GPR_U32(ctx, 31, 0x30F8C0u);
    ctx->pc = 0x30F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F8B8u;
    // 0x30f8bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30F8B8u, 0x30F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F8C0u;
label_30f8c0:
    // 0x30f8c0: 0xc0e409a  jal         func_390268
label_30f8c4:
    if (ctx->pc == 0x30F8C4u) {
        ctx->pc = 0x30F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8C0u;
        // 0x30f8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F8C8u;
        goto label_30f8c8;
    }
    ctx->pc = 0x30F8C0u;
    SET_GPR_U32(ctx, 31, 0x30F8C8u);
    ctx->pc = 0x30F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F8C0u;
    // 0x30f8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30F8C0u, 0x30F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F8C8u;
label_30f8c8:
    // 0x30f8c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30f8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f8cc:
    // 0x30f8cc: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
label_30f8d0:
    if (ctx->pc == 0x30F8D0u) {
        ctx->pc = 0x30F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8CCu;
        // 0x30f8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F8D4u;
        goto label_30f8d4;
    }
    ctx->pc = 0x30F8CCu;
    {
        const bool branch_taken_0x30f8cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8CCu;
        // 0x30f8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8cc) {
            ctx->pc = 0x30F9D8u;
            goto label_30f9d8;
        }
    }
    ctx->pc = 0x30F8D4u;
label_30f8d4:
    // 0x30f8d4: 0xc087502  jal         func_21D408
label_30f8d8:
    if (ctx->pc == 0x30F8D8u) {
        ctx->pc = 0x30F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8D4u;
        // 0x30f8d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F8DCu;
        goto label_30f8dc;
    }
    ctx->pc = 0x30F8D4u;
    SET_GPR_U32(ctx, 31, 0x30F8DCu);
    ctx->pc = 0x30F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F8D4u;
    // 0x30f8d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30F8D4u, 0x30F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F8DCu;
label_30f8dc:
    // 0x30f8dc: 0x16f2002b  bne         $s7, $s2, . + 4 + (0x2B << 2)
label_30f8e0:
    if (ctx->pc == 0x30F8E0u) {
        ctx->pc = 0x30F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8DCu;
        // 0x30f8e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F8E4u;
        goto label_30f8e4;
    }
    ctx->pc = 0x30F8DCu;
    {
        const bool branch_taken_0x30f8dc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 18));
        ctx->pc = 0x30F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8DCu;
        // 0x30f8e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8dc) {
            ctx->pc = 0x30F98Cu;
            goto label_30f98c;
        }
    }
    ctx->pc = 0x30F8E4u;
label_30f8e4:
    // 0x30f8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30f8e8:
    // 0x30f8e8: 0xc087612  jal         func_21D848
label_30f8ec:
    if (ctx->pc == 0x30F8ECu) {
        ctx->pc = 0x30F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8E8u;
        // 0x30f8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F8F0u;
        goto label_30f8f0;
    }
    ctx->pc = 0x30F8E8u;
    SET_GPR_U32(ctx, 31, 0x30F8F0u);
    ctx->pc = 0x30F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F8E8u;
    // 0x30f8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x30F8E8u, 0x30F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F8F0u;
label_30f8f0:
    // 0x30f8f0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x30f8f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_30f8f4:
    // 0x30f8f4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x30f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_30f8f8:
    // 0x30f8f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30f8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30f8fc:
    // 0x30f8fc: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x30f8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_30f900:
    // 0x30f900: 0xa2200265  sb          $zero, 0x265($s1)
    ctx->pc = 0x30f900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 613), (uint8_t)GPR_U32(ctx, 0));
label_30f904:
    // 0x30f904: 0xae20021c  sw          $zero, 0x21C($s1)
    ctx->pc = 0x30f904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 0));
label_30f908:
    // 0x30f908: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_30f90c:
    if (ctx->pc == 0x30F90Cu) {
        ctx->pc = 0x30F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F908u;
        // 0x30f90c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F910u;
        goto label_30f910;
    }
    ctx->pc = 0x30F908u;
    {
        const bool branch_taken_0x30f908 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f908) {
            ctx->pc = 0x30F90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F908u;
            // 0x30f90c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F910u;
            goto label_30f910;
        }
    }
    ctx->pc = 0x30F910u;
label_30f910:
    // 0x30f910: 0x92620029  lbu         $v0, 0x29($s3)
    ctx->pc = 0x30f910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
label_30f914:
    // 0x30f914: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x30f914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30f918:
    // 0x30f918: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30f91c:
    // 0x30f91c: 0x55001a  div         $zero, $v0, $s5
    ctx->pc = 0x30f91cu;
    { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_30f920:
    // 0x30f920: 0x1810  mfhi        $v1
    ctx->pc = 0x30f920u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_30f924:
    // 0x30f924: 0xc05959e  jal         func_165678
label_30f928:
    if (ctx->pc == 0x30F928u) {
        ctx->pc = 0x30F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F924u;
        // 0x30f928: 0xa2630029  sb          $v1, 0x29($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F92Cu;
        goto label_30f92c;
    }
    ctx->pc = 0x30F924u;
    SET_GPR_U32(ctx, 31, 0x30F92Cu);
    ctx->pc = 0x30F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F924u;
    // 0x30f928: 0xa2630029  sb          $v1, 0x29($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30F924u, 0x30F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F92Cu;
label_30f92c:
    // 0x30f92c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_30f930:
    if (ctx->pc == 0x30F930u) {
        ctx->pc = 0x30F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F92Cu;
        // 0x30f930: 0x27d113d0  addiu       $s1, $fp, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 5072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F934u;
        goto label_30f934;
    }
    ctx->pc = 0x30F92Cu;
    {
        const bool branch_taken_0x30f92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F92Cu;
        // 0x30f930: 0x27d113d0  addiu       $s1, $fp, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 5072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f92c) {
            ctx->pc = 0x30F954u;
            goto label_30f954;
        }
    }
    ctx->pc = 0x30F934u;
label_30f934:
    // 0x30f934: 0xc087502  jal         func_21D408
label_30f938:
    if (ctx->pc == 0x30F938u) {
        ctx->pc = 0x30F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F934u;
        // 0x30f938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F93Cu;
        goto label_30f93c;
    }
    ctx->pc = 0x30F934u;
    SET_GPR_U32(ctx, 31, 0x30F93Cu);
    ctx->pc = 0x30F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F934u;
    // 0x30f938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30F934u, 0x30F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F93Cu;
label_30f93c:
    // 0x30f93c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x30f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_30f940:
    // 0x30f940: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30f944:
    // 0x30f944: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_30f948:
    if (ctx->pc == 0x30F948u) {
        ctx->pc = 0x30F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F944u;
        // 0x30f948: 0x27d113d0  addiu       $s1, $fp, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 5072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F94Cu;
        goto label_30f94c;
    }
    ctx->pc = 0x30F944u;
    {
        const bool branch_taken_0x30f944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F944u;
        // 0x30f948: 0x27d113d0  addiu       $s1, $fp, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 5072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f944) {
            ctx->pc = 0x30F954u;
            goto label_30f954;
        }
    }
    ctx->pc = 0x30F94Cu;
label_30f94c:
    // 0x30f94c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x30f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_30f950:
    // 0x30f950: 0x24711400  addiu       $s1, $v1, 0x1400
    ctx->pc = 0x30f950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
label_30f954:
    // 0x30f954: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30f954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30f958:
    // 0x30f958: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30f958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30f95c:
    // 0x30f95c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30f960:
    // 0x30f960: 0x40f809  jalr        $v0
label_30f964:
    if (ctx->pc == 0x30F964u) {
        ctx->pc = 0x30F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F960u;
        // 0x30f964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F968u;
        goto label_30f968;
    }
    ctx->pc = 0x30F960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30F968u);
        ctx->pc = 0x30F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F960u;
        // 0x30f964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F960u, 0x30F968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30F968u;
label_30f968:
    // 0x30f968: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x30f968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
label_30f96c:
    // 0x30f96c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f970:
    // 0x30f970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f974:
    // 0x30f974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30f974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30f978:
    // 0x30f978: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30f978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_30f97c:
    // 0x30f97c: 0xc08e1a4  jal         func_238690
label_30f980:
    if (ctx->pc == 0x30F980u) {
        ctx->pc = 0x30F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F97Cu;
        // 0x30f980: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F984u;
        goto label_30f984;
    }
    ctx->pc = 0x30F97Cu;
    SET_GPR_U32(ctx, 31, 0x30F984u);
    ctx->pc = 0x30F980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F97Cu;
    // 0x30f980: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x30F97Cu, 0x30F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F984u;
label_30f984:
    // 0x30f984: 0x10000015  b           . + 4 + (0x15 << 2)
label_30f988:
    if (ctx->pc == 0x30F988u) {
        ctx->pc = 0x30F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F984u;
        // 0x30f988: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F98Cu;
        goto label_30f98c;
    }
    ctx->pc = 0x30F984u;
    {
        const bool branch_taken_0x30f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F984u;
        // 0x30f988: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f984) {
            ctx->pc = 0x30F9DCu;
            goto label_30f9dc;
        }
    }
    ctx->pc = 0x30F98Cu;
label_30f98c:
    // 0x30f98c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30f990:
    // 0x30f990: 0xc087612  jal         func_21D848
label_30f994:
    if (ctx->pc == 0x30F994u) {
        ctx->pc = 0x30F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F990u;
        // 0x30f994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F998u;
        goto label_30f998;
    }
    ctx->pc = 0x30F990u;
    SET_GPR_U32(ctx, 31, 0x30F998u);
    ctx->pc = 0x30F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F990u;
    // 0x30f994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x30F990u, 0x30F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F998u;
label_30f998:
    // 0x30f998: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x30f998u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_30f99c:
    // 0x30f99c: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x30f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_30f9a0:
    // 0x30f9a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30f9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30f9a4:
    // 0x30f9a4: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x30f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_30f9a8:
    // 0x30f9a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30f9ac:
    // 0x30f9ac: 0xa2320265  sb          $s2, 0x265($s1)
    ctx->pc = 0x30f9acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 613), (uint8_t)GPR_U32(ctx, 18));
label_30f9b0:
    // 0x30f9b0: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x30f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
label_30f9b4:
    // 0x30f9b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30f9b8:
    // 0x30f9b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30f9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30f9bc:
    // 0x30f9bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30f9c0:
    // 0x30f9c0: 0x40f809  jalr        $v0
label_30f9c4:
    if (ctx->pc == 0x30F9C4u) {
        ctx->pc = 0x30F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9C0u;
        // 0x30f9c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F9C8u;
        goto label_30f9c8;
    }
    ctx->pc = 0x30F9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30F9C8u);
        ctx->pc = 0x30F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9C0u;
        // 0x30f9c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F9C0u, 0x30F9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30F9C8u;
label_30f9c8:
    // 0x30f9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f9cc:
    // 0x30f9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f9d0:
    // 0x30f9d0: 0xc08e1a4  jal         func_238690
label_30f9d4:
    if (ctx->pc == 0x30F9D4u) {
        ctx->pc = 0x30F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9D0u;
        // 0x30f9d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F9D8u;
        goto label_30f9d8;
    }
    ctx->pc = 0x30F9D0u;
    SET_GPR_U32(ctx, 31, 0x30F9D8u);
    ctx->pc = 0x30F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F9D0u;
    // 0x30f9d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x30F9D0u, 0x30F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F9D8u;
label_30f9d8:
    // 0x30f9d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30f9d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_30f9dc:
    // 0x30f9dc: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x30f9dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30f9e0:
    // 0x30f9e0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_30f9e4:
    if (ctx->pc == 0x30F9E4u) {
        ctx->pc = 0x30F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9E0u;
        // 0x30f9e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F9E8u;
        goto label_30f9e8;
    }
    ctx->pc = 0x30F9E0u;
    {
        const bool branch_taken_0x30f9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9E0u;
        // 0x30f9e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f9e0) {
            ctx->pc = 0x30F8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f8b8;
        }
    }
    ctx->pc = 0x30F9E8u;
label_30f9e8:
    // 0x30f9e8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30f9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_30f9ec:
    // 0x30f9ec: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30f9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30f9f0:
    // 0x30f9f0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30f9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30f9f4:
    // 0x30f9f4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30f9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30f9f8:
    // 0x30f9f8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30f9f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30f9fc:
    // 0x30f9fc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x30f9fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30fa00:
    // 0x30fa00: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x30fa00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30fa04:
    // 0x30fa04: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x30fa04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30fa08:
    // 0x30fa08: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x30fa08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30fa0c:
    // 0x30fa0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30fa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30fa10:
    // 0x30fa10: 0x3e00008  jr          $ra
label_30fa14:
    if (ctx->pc == 0x30FA14u) {
        ctx->pc = 0x30FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA10u;
        // 0x30fa14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FA18u;
        goto label_fallthrough_0x30fa10;
    }
    ctx->pc = 0x30FA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA10u;
        // 0x30fa14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30fa10:
    ctx->pc = 0x30FA18u;
}
